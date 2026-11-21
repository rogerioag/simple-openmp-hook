#!/usr/bin/env python3
"""
update_hookomp.py - Script para atualizar as libs de interceptacao OpenMP (hookgomp e hookkmpc)
com base na versao do GCC desejada.
"""

import os
import re
import sys
import argparse
import urllib.request
import subprocess

GCC_GIT_REPO = "https://github.com/gcc-mirror/gcc.git"
GCC_RAW_URL = "https://raw.githubusercontent.com/gcc-mirror/gcc/{tag}/libgomp/{filename}"

def list_gcc_releases():
    """Lista as tags de release oficiais do GCC no Git."""
    print("[*] Buscando releases do GCC no repositório remoto...")
    cmd = (
        f"git ls-remote --tags --refs {GCC_GIT_REPO} | "
        "awk -F/ '!/rc/ && !/test/ && !/lib/ && !/prerelease/ && "
        "!/basepoint/ && !/misc/ && !/bet/ && !/embedded/ && "
        "!/egs/ && !/g77/ {{print $NF}}'"
    )
    res = subprocess.run(cmd, shell=True, capture_output=True, text=True)
    tags = sorted(list(set(res.stdout.strip().split('\n'))))
    return [t for t in tags if t.startswith("gcc-") or t.startswith("releases/gcc-")]

def parse_commit_ref(value):
    """Extrai o hash de um commit.

    Aceita um hash (7 a 40 dígitos hexadecimais) ou uma versão de pacote com o
    sufixo +g<hash>, como as do Arch Linux (ex.: 16.2.1+r23+gd564253eb6c8)."""
    m = re.fullmatch(r"(?:.*\+g)?([0-9a-fA-F]{7,40})(?:-\d+)?", value.strip())
    if not m:
        raise ValueError(f"'{value}' não é um hash de commit nem uma versão com sufixo +g<hash>")
    return m.group(1).lower()


def gcc_ref_from_version(version):
    """12.2.0, gcc-12.2.0 ou releases/gcc-12.2.0 -> releases/gcc-12.2.0."""
    if version.startswith("releases/"):
        return version
    if version.startswith("gcc-"):
        return f"releases/{version}"
    return f"releases/gcc-{version}"


def fetch_file_content(ref, filename):
    """Baixa um arquivo da libgomp numa tag ou commit via HTTP (mais rápido que git archive completo)."""
    url = GCC_RAW_URL.format(tag=ref, filename=filename)

    print(f"[*] Baixando {filename} para {ref} ({url})...")
    try:
        req = urllib.request.urlopen(url)
        return req.read().decode('utf-8')
    except Exception as e:
        print(f"[!] Erro ao baixar {filename} via HTTP: {e}")
        print("[*] Tentando via git archive remoto...")
        cmd = f"git archive --remote={GCC_GIT_REPO} {ref} libgomp/{filename} | tar -xO"
        res = subprocess.run(cmd, shell=True, capture_output=True)
        if res.returncode == 0:
            return res.stdout.decode('utf-8')
        else:
            raise RuntimeError(f"Não foi possível obter {filename} para {ref} (tag ou commit inexistente?)")

def parse_gomp_prototypes(header_content):
    """Analisa o libgomp_g.h e extrai as funções extern GOMP_*."""
    # Remove comentários C /* ... */
    clean_content = re.sub(r'/\*.*?\*/', '', header_content, flags=re.DOTALL)
    
    # Regex para capturar declarações: extern <ret_type> GOMP_<name> (<args>);
    pattern = r'extern\s+([\w\s\*]+?)\s+(GOMP_[\w]+)\s*\((.*?)\);'
    matches = re.findall(pattern, clean_content, re.DOTALL)
    
    functions = []
    for ret_type, name, args in matches:
        ret_type = ' '.join(ret_type.split())
        args = ' '.join(args.split())
        functions.append({
            'return_type': ret_type,
            'name': name,
            'args': args
        })
    return functions

def parse_args_to_names(args_str):
    """Converte lista de argumentos C para nomes de variáveis de chamada."""
    if not args_str or args_str.strip() == "void":
        return "", ""
    
    # Split parameters carefully (handling function pointers with commas inside parameters)
    params = []
    current = []
    paren_depth = 0
    for char in args_str:
        if char == "(":
            paren_depth += 1
            current.append(char)
        elif char == ")":
            paren_depth -= 1
            current.append(char)
        elif char == "," and paren_depth == 0:
            params.append("".join(current).strip())
            current = []
        else:
            current.append(char)
    if current:
        params.append("".join(current).strip())
        
    call_args = []
    typed_args = []
    
    arg_idx = 1
    for p in params:
        p_strip = p.strip()
        if p_strip == "...":
            typed_args.append("...")
            call_args.append("__builtin_va_arg_pack()")
        elif "(*)" in p_strip:
            var_name = f"arg{arg_idx}"
            typed = p_strip.replace("(*)", f"(*{var_name})")
            typed_args.append(typed)
            call_args.append(var_name)
            arg_idx += 1
        elif re.search(r"\(\*\s*\)", p_strip):
            var_name = f"arg{arg_idx}"
            typed = re.sub(r"\(\*\s*\)", f"(*{var_name})", p_strip)
            typed_args.append(typed)
            call_args.append(var_name)
            arg_idx += 1
        else:
            var_name = f"arg{arg_idx}"
            typed_args.append(f"{p_strip} {var_name}")
            call_args.append(var_name)
            arg_idx += 1
            
    return ", ".join(typed_args), ", ".join(call_args)

# --- Funções variádicas da libgomp -------------------------------------------
# GOMP_doacross_wait(long first, ...) e GOMP_doacross_ull_wait(unsigned long long first, ...)
# recebem ncounts valores, onde ncounts é o 1º argumento de GOMP_loop[_ull]_doacross_*start
# chamado antes pela mesma thread. O wrapper do start guarda ncounts por thread, e o do
# wait encaminha com um switch (até --max-switch-args) ou com libffi (acima disso).
_GOMP_DOACROSS_START = re.compile(r"GOMP_loop(_ull)?_doacross_\w*start")
_GOMP_DOACROSS_WAIT = re.compile(r"GOMP_doacross(_ull)?_wait")
# Funções que executam uma região inteira na thread que chama (podem conter outro doacross).
# As variantes *_start/_end da API antiga retornam antes de a região rodar e ficam de fora.
_GOMP_RUNS_REGION = re.compile(r"GOMP_parallel(?!\w*_start$|_end$)\w*|GOMP_teams_reg")
_GOMP_FFI_TYPES = {"long": "ffi_type_slong", "unsigned long long": "ffi_type_uint64"}

GOMP_VARIADIC_SUPPORT = r"""
#ifdef HOOK_USE_LIBFFI
#include <ffi.h>
#endif
#include <stdlib.h>

/* Laços doacross com até HOOK_GOMP_SWITCH_MAX_ARGS dimensões usam o switch;
 * acima disso, libffi (HOOK_USE_LIBFFI) ou abort(). */
#define HOOK_GOMP_SWITCH_MAX_ARGS @MAX@

/* ncounts do laço doacross atual desta thread (0 = nenhum). */
static __thread unsigned hook_gomp_doacross_ncounts = 0;

/* Encaminha values[0..n-1] (cada um com tamanho size e tipo ffi type_name)
 * para uma função variádica fn(first, ...). */
static void hook_gomp_forward_variadic(const char *name, void (*fn)(void), const char *type_name,
                                       size_t size, void *values, unsigned n) {
#ifdef HOOK_USE_LIBFFI
    ffi_type *t = type_name[0] == 'u' ? &ffi_type_uint64 : &ffi_type_slong;
    ffi_type *types[n];
    void *args[n];
    for (unsigned i = 0; i < n; i++) {
        types[i] = t;
        args[i] = (char *) values + i * size;   /* ffi_call recebe ponteiros para cada valor */
    }
    ffi_cif cif;
    if (ffi_prep_cif_var(&cif, FFI_DEFAULT_ABI, 1, n, &ffi_type_void, types) != FFI_OK) {
        fprintf(stderr, "hookgomp: ffi_prep_cif_var falhou em %s (n=%u)\n", name, n);
        abort();
    }
    ffi_call(&cif, fn, NULL, args);
#else
    (void) fn; (void) type_name; (void) size; (void) values;
    fprintf(stderr, "hookgomp: %s chamada com %u argumentos (máximo sem libffi: %d). "
                    "Recompile com USE_LIBFFI=1.\n", name, n, HOOK_GOMP_SWITCH_MAX_ARGS);
    abort();
#endif
}
"""


def _gomp_doacross_wait_wrapper(fn, typed_args, max_switch_args):
    """Gera o wrapper de GOMP_doacross[_ull]_wait; outras variádicas são ignoradas."""
    name, base_name = fn['name'], fn['name'].replace("GOMP_", "")
    fixed = [a.strip() for a in typed_args.split(",")][:-1]
    vtype = " ".join(fixed[0].split()[:-1]) if len(fixed) == 1 else ""
    if not _GOMP_DOACROSS_WAIT.fullmatch(name) or vtype not in _GOMP_FFI_TYPES or fn['return_type'] != 'void':
        print(f"[!] {name}: função variádica sem regra de encaminhamento; não será interceptada.")
        return []
    first = fixed[0].split()[-1]
    lines = [
        f"{fn['return_type']} {name} ({typed_args}) {{",
        "    PRINT_FUNC_NAME;",
        f'    GET_RUNTIME_FUNCTION(lib_{name}, "{name}");',
        "    unsigned n = hook_gomp_doacross_ncounts;",
        "    if (n == 0) {",
        f'        fprintf(stderr, "hookgomp: {name} fora de um laço doacross conhecido.\\n");',
        "        abort();",
        "    }",
        f"    {vtype} a[n];",
        f"    a[0] = {first};",
        "    va_list ap;",
        f"    va_start(ap, {first});",
        f"    for (unsigned i = 1; i < n; i++) a[i] = va_arg(ap, {vtype});",
        "    va_end(ap);",
        f"    PRE_GOMP_{base_name}();",
        "    switch (n) {",
    ]
    for k in range(1, max_switch_args + 1):
        args = ", ".join(f"a[{i}]" for i in range(k))
        lines.append(f"      case {k}: lib_{name}({args}); break;")
    lines += [
        f'      default: hook_gomp_forward_variadic("{name}", (void (*)(void)) lib_{name}, '
        f'"{vtype}", sizeof(a[0]), a, n); break;',
        "    }",
        f"    POST_GOMP_{base_name}();",
        "}\n",
    ]
    return lines


def generate_code(functions, output_dir=".", max_switch_args=32, gcc_ref=None):
    """Gera hookgomp.h, prepostdef_gomp.h e hookgomp.c com base nas funções extraídas."""
    print(f"[*] Gerando código para {len(functions)} funções GOMP_*...")
    # Primeira linha de cada arquivo: de onde o código foi gerado (lida pelo check_hook_compat.py)
    banner = [f"/* Gerado por update_hookomp.py a partir do GCC {gcc_ref}. Não edite à mão. */\n"] if gcc_ref else []

    # 1. prepostdef_gomp.h
    prepost_lines = banner + [
        "#ifndef PREPOSTDEF_GOMP_H",
        "#define PREPOSTDEF_GOMP_H\n",
        "#ifdef __cplusplus",
        'extern "C" {',
        "#endif\n"
    ]
    for fn in functions:
        base_name = fn['name'].replace("GOMP_", "")
        prepost_lines.append(f"void PRE_GOMP_{base_name}(void);")
        prepost_lines.append(f"void POST_GOMP_{base_name}(void);\n")
        
    prepost_lines.extend(["#ifdef __cplusplus", "}", "#endif\n", "#endif /* PREPOSTDEF_GOMP_H */"])
    
    with open(os.path.join(output_dir, "prepostdef_gomp.h"), "w") as f:
        f.write("\n".join(prepost_lines))

    # 2. hookgomp.h (Declaração de ponteiros lib_GOMP_*)
    hook_h_lines = banner + [
        "#ifndef hookgomp_h__",
        "#define hookgomp_h__\n",
        "#include <dlfcn.h>",
        "#include <stdarg.h>",
        "#include <stdio.h>",
        "#include <stdint.h>",
        "#include <stdbool.h>",
        "#include <pthread.h>",
        '#include "debug.h"',
        '#include "prepostdef_gomp.h"\n',
        "#ifdef __cplusplus",
        'extern "C" {',
        "#endif\n",
        "#define GET_RUNTIME_FUNCTION(hook_func_pointer, func_name) \\",
        "  do { \\",
        "    if (hook_func_pointer) break; \\",
        "    void *__handle = RTLD_NEXT; \\",
        "    hook_func_pointer = (typeof(hook_func_pointer)) (uintptr_t) dlsym(__handle, func_name); \\",
        "  } while(0)\n",
        "/* Ponteiros de função da libgomp */"
    ]
    
    for fn in functions:
        hook_h_lines.append(f"extern {fn['return_type']} (*lib_{fn['name']}) ({fn['args']});")
        
    hook_h_lines.extend(["\n#ifdef __cplusplus", "}", "#endif\n", "#endif /* hookgomp_h__ */"])
    
    with open(os.path.join(output_dir, "hookgomp.h"), "w") as f:
        f.write("\n".join(hook_h_lines))

    # 3. hookgomp.c (Implementação das interceptações)
    hook_c_lines = banner + [
        '#include "hookgomp.h"\n',
        "#ifdef __cplusplus",
        'extern "C" {',
        "#endif\n"
    ]
    
    # Define os ponteiros globais
    for fn in functions:
        hook_c_lines.append(f"{fn['return_type']} (*lib_{fn['name']}) ({fn['args']}) = NULL;")
        
    hook_c_lines.append("\n/* Default Weak Callbacks */")
    for fn in functions:
        base_name = fn['name'].replace("GOMP_", "")
        hook_c_lines.append(f"void __attribute__((weak)) PRE_GOMP_{base_name}(void) {{}}")
        hook_c_lines.append(f"void __attribute__((weak)) POST_GOMP_{base_name}(void) {{}}")

    hook_c_lines.append(GOMP_VARIADIC_SUPPORT.replace("@MAX@", str(max_switch_args)))

    hook_c_lines.append("/* Funções de Interceptação */\n")

    for fn in functions:
        base_name = fn['name'].replace("GOMP_", "")
        typed_args, call_args = parse_args_to_names(fn['args'])

        if "..." in typed_args:
            hook_c_lines.extend(_gomp_doacross_wait_wrapper(fn, typed_args, max_switch_args))
            continue

        hook_c_lines.append(f"{fn['return_type']} {fn['name']} ({typed_args}) {{")
        hook_c_lines.append("    PRINT_FUNC_NAME;")
        hook_c_lines.append(f'    GET_RUNTIME_FUNCTION(lib_{fn["name"]}, "{fn["name"]}");')
        if _GOMP_DOACROSS_START.fullmatch(fn['name']) and call_args:
            # o 1º argumento (ncounts) diz quantos valores GOMP_doacross_*wait recebe
            hook_c_lines.append(f"    hook_gomp_doacross_ncounts = {call_args.split(',')[0]};")
        # região aninhada pode iniciar outro laço doacross nesta mesma thread
        nested = _GOMP_RUNS_REGION.fullmatch(fn['name']) is not None
        if nested:
            hook_c_lines.append("    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;")
        hook_c_lines.append(f"    PRE_GOMP_{base_name}();")
        restore = ["    hook_gomp_doacross_ncounts = hook_saved_ncounts;"] if nested else []

        if fn['return_type'] == 'void':
            hook_c_lines.append(f"    lib_{fn['name']}({call_args});")
            hook_c_lines.extend(restore)
            hook_c_lines.append(f"    POST_GOMP_{base_name}();")
        else:
            hook_c_lines.append(f"    {fn['return_type']} res = lib_{fn['name']}({call_args});")
            hook_c_lines.extend(restore)
            hook_c_lines.append(f"    POST_GOMP_{base_name}();")
            hook_c_lines.append("    return res;")

        hook_c_lines.append("}\n")
        
    hook_c_lines.extend(["#ifdef __cplusplus", "}", "#endif\n"])
    
    with open(os.path.join(output_dir, "hookgomp.c"), "w") as f:
        f.write("\n".join(hook_c_lines))

    print(f"[✓] Arquivos hookgomp.h, hookgomp.c e prepostdef_gomp.h atualizados com sucesso!")

# ===========================================================================
# libomp (LLVM/Clang): ABI __kmpc_*
# ===========================================================================

LLVM_GIT_REPO = "https://github.com/llvm/llvm-project.git"
LLVM_RAW_URL = "https://raw.githubusercontent.com/llvm/llvm-project/{tag}/openmp/runtime/src/{filename}"

# Arquivos do runtime com protótipos __kmpc_*. Só o kmp.h é obrigatório;
# os demais podem não existir em versões antigas do LLVM.
LLVM_SOURCES = [
    ("kmp.h", True),
    ("kmp_collapse.h", False),   # __kmpc_for_collapsed_init etc. (LLVM >= 16)
    ("kmp_atomic.h", False),     # __kmpc_atomic_*
    ("kmp_sched.cpp", False),    # __kmpc_for_static_init_* (só definidos no .cpp)
    ("kmp_dispatch.cpp", False), # __kmpc_dist_dispatch_init_* (só definidos no .cpp)
]

# Tipos que o hookkmpc.h sabe declarar. Funções que usam qualquer outro tipo
# (ex.: _Quad, Quad_a16_t, kmp_cmplx128) são descartadas e listadas no relatório.
KMPC_QUALIFIERS = {"const", "volatile", "struct", "enum", "unsigned", "signed", "_Complex"}
KMPC_KNOWN_TYPES = {
    "void", "int", "char", "short", "long", "float", "double", "bool", "size_t",
    "int8_t", "uint8_t", "int16_t", "uint16_t", "int32_t", "uint32_t",
    "int64_t", "uint64_t", "uintptr_t", "intptr_t",
    "kmp_int8", "kmp_uint8", "kmp_int16", "kmp_uint16", "kmp_int32", "kmp_uint32",
    "kmp_int64", "kmp_uint64", "kmp_real32", "kmp_real64",
    "kmp_cmplx32", "kmp_cmplx64", "kmp_cmplx80",
    "ident_t", "kmpc_micro", "kmp_critical_name", "kmp_task_t", "kmp_routine_entry_t",
    "kmpc_ctor", "kmpc_cctor", "kmpc_dtor", "kmpc_ctor_vec", "kmpc_cctor_vec", "kmpc_dtor_vec",
    "kmp_event_t", "kmp_depend_info_t", "kmp_base_depnode_t", "kmp_depnode_list_t",
    "kmp_task_affinity_info_t", "omp_allocator_handle_t", "omp_memspace_handle_t",
    "omp_alloctrait_t", "kmp_pause_status_t", "kmp_loop_nest_iv_t", "kmp_index_t",
    "bounds_info_t", "kmp_dim", "sched_type",
}
KMPC_DECL_NOISE = {"KMP_EXPORT", "extern", "static", "inline"}

# Valores de macros usados para descartar ramos de #if que não valem no Linux.
# Macros fora desta tabela (ex.: KMP_ARCH_*) mantêm os dois ramos.
KMPC_PP_MACROS = {"KMP_OS_WINDOWS": 0, "KMP_OS_LINUX": 1, "KMP_OS_UNIX": 1,
                  "KMP_OS_DARWIN": 0, "KMP_OS_WASI": 0, "__cplusplus": 1}

KMPC_TYPES_HEADER = r"""/* Tipos da ABI da libomp (LLVM), reduzidos ao necessário para os wrappers.
 * Tipos usados só por ponteiro são declarados como structs opacas. */
typedef int8_t   kmp_int8;
typedef uint8_t  kmp_uint8;
typedef int16_t  kmp_int16;
typedef uint16_t kmp_uint16;
typedef int32_t  kmp_int32;
typedef uint32_t kmp_uint32;
typedef int64_t  kmp_int64;
typedef uint64_t kmp_uint64;
typedef float    kmp_real32;
typedef double   kmp_real64;
typedef float _Complex       kmp_cmplx32;
typedef double _Complex      kmp_cmplx64;
typedef long double _Complex kmp_cmplx80;

typedef struct ident {
    kmp_int32 reserved_1;
    kmp_int32 flags;
    kmp_int32 reserved_2;
    kmp_int32 reserved_3;
    const char *psource;   /* ";arquivo;funcao;linha;coluna;;" */
} ident_t;

typedef void (*kmpc_micro)(kmp_int32 *global_tid, kmp_int32 *bound_tid, ...);
typedef kmp_int32 kmp_critical_name[8];
typedef struct hook_kmp_task kmp_task_t;
typedef kmp_int32 (*kmp_routine_entry_t)(kmp_int32, void *);
typedef void *(*kmpc_ctor)(void *);
typedef void *(*kmpc_cctor)(void *, void *);
typedef void (*kmpc_dtor)(void *);
typedef void *(*kmpc_ctor_vec)(void *, size_t);
typedef void *(*kmpc_cctor_vec)(void *, void *, size_t);
typedef void (*kmpc_dtor_vec)(void *, size_t);
typedef struct hook_kmp_event kmp_event_t;
typedef struct hook_kmp_depend_info kmp_depend_info_t;
typedef struct hook_kmp_base_depnode kmp_base_depnode_t;
typedef struct hook_kmp_depnode_list kmp_depnode_list_t;
typedef struct hook_kmp_task_affinity_info kmp_task_affinity_info_t;
typedef struct hook_bounds_info bounds_info_t;
struct kmp_dim;
enum sched_type { hook_kmp_sch_placeholder = 0 };   /* só repassado por valor */
typedef uintptr_t omp_allocator_handle_t;
typedef uintptr_t omp_memspace_handle_t;
typedef struct { int key; uintptr_t value; } omp_alloctrait_t;
typedef int kmp_pause_status_t;
typedef kmp_uint64 kmp_loop_nest_iv_t;
typedef kmp_int32 kmp_index_t;
"""


def list_llvm_releases():
    """Lista as tags de release do LLVM (llvmorg-X.Y.Z), sem release candidates."""
    print("[*] Buscando releases do LLVM no repositório remoto...")
    res = subprocess.run(["git", "ls-remote", "--tags", "--refs", LLVM_GIT_REPO, "llvmorg-*"],
                         capture_output=True, text=True)
    tags = [line.rsplit("/", 1)[-1] for line in res.stdout.splitlines()]
    tags = [t for t in tags if re.fullmatch(r"llvmorg-\d+\.\d+\.\d+", t)]
    return sorted(set(tags), key=lambda t: [int(x) for x in t[len("llvmorg-"):].split(".")])


def fetch_llvm_file(tag, filename, required=True):
    url = LLVM_RAW_URL.format(tag=tag, filename=filename)
    print(f"[*] Baixando {filename} para {tag} ({url})...")
    try:
        with urllib.request.urlopen(url) as req:
            return req.read().decode("utf-8")
    except Exception as e:
        if required:
            raise RuntimeError(f"Não foi possível obter {filename} para a tag {tag}: {e}")
        print(f"[!] {filename} não encontrado para {tag} (ignorado): {e}")
        return ""


def _eval_pp_condition(expr):
    """Avalia uma condição de #if com KMPC_PP_MACROS. None = desconhecida."""
    # Todas as macros da tabela são sempre definidas (KMP_OS_* valem 0 ou 1).
    expr = re.sub(r"defined\s*\(\s*(\w+)\s*\)|defined\s+(\w+)",
                  lambda m: "1" if (m.group(1) or m.group(2)) in KMPC_PP_MACROS else "UNKNOWN",
                  expr)
    expr = re.sub(r"[A-Za-z_]\w*", lambda m: str(KMPC_PP_MACROS[m.group(0)])
                  if m.group(0) in KMPC_PP_MACROS else m.group(0), expr)
    if re.search(r"[A-Za-z_]", expr):
        return None
    expr = expr.replace("&&", " and ").replace("||", " or ")
    expr = re.sub(r"!(?!=)", " not ", expr)
    try:
        return bool(eval(expr, {"__builtins__": {}}))
    except Exception:
        return None


def _strip_preprocessor(src):
    """Remove diretivas e os ramos de #if que sabidamente não valem no Linux."""
    src = re.sub(r"\\\n", " ", src)
    # Cada frame: {"branch": True/False/None, "any_true": bool, "any_unknown": bool}
    # None = condição desconhecida: o ramo é mantido.
    out, stack = [], []

    def enter_branch(frame, value):
        if frame["any_true"]:
            value = False
        elif value is not False and frame["any_unknown"]:
            value = None
        frame["branch"] = value
        frame["any_true"] |= value is True
        frame["any_unknown"] |= value is None

    for line in src.split("\n"):
        m = re.match(r"\s*#\s*(\w+)\s*(.*)", line)
        if not m:
            if all(f["branch"] is not False for f in stack):
                out.append(line)
            continue
        d, rest = m.group(1), m.group(2)
        if d in ("if", "ifdef", "ifndef"):
            if d == "if":
                val = _eval_pp_condition(rest)
            else:
                macro = rest.split()[0] if rest.split() else ""
                val = True if macro in KMPC_PP_MACROS else None
                if d == "ifndef" and val is not None:
                    val = not val
            frame = {"branch": None, "any_true": False, "any_unknown": False}
            enter_branch(frame, val)
            stack.append(frame)
        elif d == "elif" and stack:
            enter_branch(stack[-1], _eval_pp_condition(rest))
        elif d == "else" and stack:
            enter_branch(stack[-1], True)
        elif d == "endif" and stack:
            stack.pop()
    return "\n".join(out)


def _split_params(s):
    out, cur, depth = [], [], 0
    for ch in s:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    if "".join(cur).strip():
        out.append("".join(cur).strip())
    return out


def _check_type(text, allow_name):
    """Valida um tipo (com nome opcional no fim). Retorna o nome ('' se não houver) ou None."""
    if re.search(r"[^\w\s\*\[\]]", text):
        return None
    ids = re.findall(r"[A-Za-z_]\w*", text)
    if not any(t in KMPC_KNOWN_TYPES for t in ids):
        return None
    others = [t for t in ids if t not in KMPC_KNOWN_TYPES and t not in KMPC_QUALIFIERS]
    if len(others) > (1 if allow_name else 0) or (others and ids[-1] != others[0]):
        return None
    return others[0] if others else ""


def _parse_kmpc_param(p, idx):
    """Converte um parâmetro em (declaração com nome argN, nome argN) ou None se o tipo for desconhecido."""
    p = " ".join(p.split())
    if p == "...":
        return ("...", "...")
    name = f"arg{idx}"
    m = re.fullmatch(r"(.+?)\(\s*\*\s*(\w*)\s*\)\s*\((.*)\)", p)
    if m:  # ponteiro para função
        ret, _, inner = m.groups()
        if _check_type(ret, False) is None:
            return None
        if inner.strip() not in ("", "void"):
            if any(_check_type(q.replace("[]", ""), True) is None for q in _split_params(inner)):
                return None
        return (f"{ret.strip()} (*{name})({inner.strip()})", name)
    arr = ""
    m = re.fullmatch(r"(.*?)\s*(\[\s*\w*\s*\])", p)
    if m:
        p, arr = m.group(1), m.group(2)
    orig = _check_type(p, True)
    if orig is None:
        return None
    base = p[: p.rfind(orig)].rstrip() if orig else p
    return (f"{base} {name}{arr}", name)


_KMPC_DECL = re.compile(r"\b(__kmpc_\w+)\s*\(((?:[^()]|\([^()]*\))*)\)\s*[;{]")


def parse_kmpc_prototypes(sources):
    """Extrai protótipos __kmpc_* de uma lista de (nome_arquivo, conteúdo).

    Retorna (funções aceitas, {nome: motivo} das descartadas)."""
    functions, rejected, seen = [], {}, {}
    for fname, content in sources:
        src = _strip_preprocessor(content)
        src = re.sub(r"/\*.*?\*/", " ", src, flags=re.S)
        src = re.sub(r"//[^\n]*", "", src)
        src = src.replace('extern "C"', " ")
        for m in _KMPC_DECL.finditer(src):
            name, args = m.group(1), " ".join(m.group(2).split())
            j = m.start() - 1
            while j >= 0 and src[j] not in ";{}()":
                j -= 1
            if j >= 0 and src[j] == ")":
                continue   # cast ou chamada, não declaração
            ret = " ".join(t for t in src[j + 1:m.start()].split() if t not in KMPC_DECL_NOISE)
            if not ret or _check_type(ret, False) is None:
                continue   # chamada (return __kmpc_x(...), x = __kmpc_x(...)) ou tipo desconhecido
            params = []
            if args not in ("", "void"):
                for i, p in enumerate(_split_params(args), 1):
                    pp = _parse_kmpc_param(p, i)
                    if pp is None:
                        params = None
                        break
                    params.append(pp)
            if params is None:
                rejected.setdefault(name, f"{fname}: tipo não suportado em ({args})")
                continue
            sig = (ret, tuple(p[0] for p in params))
            if name in seen:
                if seen[name] != sig:
                    print(f"[!] {name}: assinatura divergente em {fname}; mantida a primeira.")
                continue
            seen[name] = sig
            rejected.pop(name, None)
            functions.append({"name": name, "return_type": ret, "params": params, "file": fname})
    rejected = {k: v for k, v in rejected.items() if k not in seen}
    return functions, rejected


def _is_fork_like(fn):
    """__kmpc_fork_call / __kmpc_fork_teams: (ident_t *, kmp_int32 argc, kmpc_micro, ...)."""
    decls = [p[0] for p in fn["params"]]
    return (len(decls) == 4 and decls[3] == "..." and decls[0].startswith("ident_t *")
            and decls[1].startswith("kmp_int32 ") and decls[2].startswith("kmpc_micro "))


def generate_kmpc_code(functions, llvm_tag, max_switch_args=32, output_dir="."):
    """Gera hookkmpc.h, hookkmpc.c e prepostdef_kmpc.h para a ABI __kmpc_* da libomp."""
    kept = []
    for fn in functions:
        if any(p[0] == "..." for p in fn["params"]) and not _is_fork_like(fn):
            print(f"[!] {fn['name']}: variádica com formato desconhecido, ignorada.")
            continue
        kept.append(fn)
    functions = kept
    print(f"[*] Gerando código para {len(functions)} funções __kmpc_*...")

    def base(fn):
        return fn["name"][len("__kmpc_"):]

    def decl_params(fn):
        return ", ".join(p[0] for p in fn["params"]) if fn["params"] else "void"

    def ptr_decl(fn):
        return f"{fn['return_type']} (*lib_{fn['name']}) ({decl_params(fn)})"

    banner = f"/* Gerado por update_hookomp.py a partir do LLVM {llvm_tag}. Não edite à mão. */\n"

    # 1. prepostdef_kmpc.h
    lines = [banner, "#ifndef PREPOSTDEF_KMPC_H", "#define PREPOSTDEF_KMPC_H\n",
             "#ifdef __cplusplus", 'extern "C" {', "#endif\n"]
    for fn in functions:
        lines.append(f"void PRE_kmpc_{base(fn)}(void);")
        lines.append(f"void POST_kmpc_{base(fn)}(void);\n")
    lines += ["#ifdef __cplusplus", "}", "#endif\n", "#endif /* PREPOSTDEF_KMPC_H */\n"]
    with open(os.path.join(output_dir, "prepostdef_kmpc.h"), "w") as f:
        f.write("\n".join(lines))

    # 2. hookkmpc.h
    lines = [banner, "#ifndef hookkmpc_h__", "#define hookkmpc_h__\n",
             "#include <dlfcn.h>", "#include <stdarg.h>", "#include <stdbool.h>",
             "#include <stddef.h>", "#include <stdint.h>", "#include <stdio.h>",
             "#include <stdlib.h>", '#include "debug.h"', '#include "prepostdef_kmpc.h"\n',
             "#ifdef __cplusplus", 'extern "C" {', "#endif\n",
             "#ifndef GET_RUNTIME_FUNCTION",
             "#define GET_RUNTIME_FUNCTION(hook_func_pointer, func_name) \\",
             "  do { \\",
             "    if (hook_func_pointer) break; \\",
             "    void *__handle = RTLD_NEXT; \\",
             "    hook_func_pointer = (typeof(hook_func_pointer)) (uintptr_t) dlsym(__handle, func_name); \\",
             "  } while(0)",
             "#endif\n",
             f"/* Regiões com até {max_switch_args} variáveis compartilhadas usam o switch (sem custo extra);",
             " * acima disso, libffi (HOOK_USE_LIBFFI) ou abort(). */",
             f"#define HOOK_KMPC_SWITCH_MAX_ARGS {max_switch_args}\n",
             KMPC_TYPES_HEADER,
             "/* Ponteiros de função da libomp */"]
    for fn in functions:
        lines.append(f"extern {ptr_decl(fn)};")
    lines += ["\n#ifdef __cplusplus", "}", "#endif\n", "#endif /* hookkmpc_h__ */\n"]
    with open(os.path.join(output_dir, "hookkmpc.h"), "w") as f:
        f.write("\n".join(lines))

    # 3. hookkmpc.c
    lines = [banner, '#include "hookkmpc.h"\n',
             "#ifdef HOOK_USE_LIBFFI", "#include <ffi.h>", "#endif\n",
             "#ifdef __cplusplus", 'extern "C" {', "#endif\n"]
    for fn in functions:
        lines.append(f"{ptr_decl(fn)} = NULL;")

    lines.append("\n/* Default Weak Callbacks */")
    for fn in functions:
        lines.append(f"void __attribute__((weak)) PRE_kmpc_{base(fn)}(void) {{}}")
        lines.append(f"void __attribute__((weak)) POST_kmpc_{base(fn)}(void) {{}}")

    lines.append(r"""
/* Encaminha (loc, argc, microtask, shared[0..argc-1]) para uma função variádica
 * da libomp quando argc passa de HOOK_KMPC_SWITCH_MAX_ARGS. */
static void hook_kmpc_forward_variadic(const char *name, void (*fn)(void), ident_t *loc,
                                       kmp_int32 argc, kmpc_micro microtask, void **shared) {
#ifdef HOOK_USE_LIBFFI
    unsigned nfixed = 3, ntotal = nfixed + (unsigned) argc;
    ffi_type *types[ntotal];
    void *values[ntotal];   /* ffi_call recebe ponteiros para cada valor */
    types[0] = &ffi_type_pointer; values[0] = &loc;
    types[1] = &ffi_type_sint32;  values[1] = &argc;
    types[2] = &ffi_type_pointer; values[2] = &microtask;
    for (kmp_int32 i = 0; i < argc; i++) {
        types[nfixed + i] = &ffi_type_pointer;
        values[nfixed + i] = &shared[i];
    }
    ffi_cif cif;
    if (ffi_prep_cif_var(&cif, FFI_DEFAULT_ABI, nfixed, ntotal, &ffi_type_void, types) != FFI_OK) {
        fprintf(stderr, "hookkmpc: ffi_prep_cif_var falhou em %s (argc=%d)\n", name, (int) argc);
        abort();
    }
    ffi_call(&cif, fn, NULL, values);
#else
    (void) fn; (void) loc; (void) microtask; (void) shared;
    fprintf(stderr, "hookkmpc: %s chamada com %d argumentos (máximo sem libffi: %d). "
                    "Recompile com USE_LIBFFI=1.\n", name, (int) argc, HOOK_KMPC_SWITCH_MAX_ARGS);
    abort();
#endif
}
""")

    lines.append("/* Funções de Interceptação */\n")
    for fn in functions:
        name, ret = fn["name"], fn["return_type"]
        call = ", ".join(p[1] for p in fn["params"])
        lines.append(f"{ret} {name} ({decl_params(fn)}) {{")
        lines.append("    PRINT_FUNC_NAME;")
        lines.append(f'    GET_RUNTIME_FUNCTION(lib_{name}, "{name}");')

        if _is_fork_like(fn):
            loc, argc, micro = (p[1] for p in fn["params"][:3])
            lines.append(f"    void *a[{argc} > 0 ? {argc} : 1];")
            lines.append("    va_list ap;")
            lines.append(f"    va_start(ap, {micro});")
            lines.append(f"    for (kmp_int32 i = 0; i < {argc}; i++) a[i] = va_arg(ap, void *);")
            lines.append("    va_end(ap);")
            lines.append(f"    PRE_kmpc_{base(fn)}();")
            lines.append(f"    switch ({argc}) {{")
            for n in range(max_switch_args + 1):
                extra = "".join(f", a[{i}]" for i in range(n))
                lines.append(f"      case {n}: lib_{name}({loc}, {argc}, {micro}{extra}); break;")
            lines.append(f'      default: hook_kmpc_forward_variadic("{name}", (void (*)(void)) lib_{name}, '
                         f"{loc}, {argc}, {micro}, a); break;")
            lines.append("    }")
            lines.append(f"    POST_kmpc_{base(fn)}();")
        elif ret == "void":
            lines.append(f"    PRE_kmpc_{base(fn)}();")
            lines.append(f"    lib_{name}({call});")
            lines.append(f"    POST_kmpc_{base(fn)}();")
        else:
            lines.append(f"    PRE_kmpc_{base(fn)}();")
            lines.append(f"    {ret} res = lib_{name}({call});")
            lines.append(f"    POST_kmpc_{base(fn)}();")
            lines.append("    return res;")
        lines.append("}\n")

    lines += ["#ifdef __cplusplus", "}", "#endif\n"]
    with open(os.path.join(output_dir, "hookkmpc.c"), "w") as f:
        f.write("\n".join(lines))

    print("[✓] Arquivos hookkmpc.h, hookkmpc.c e prepostdef_kmpc.h atualizados com sucesso!")


def update_libomp(tag, max_switch_args):
    """Gera os wrappers __kmpc_* a partir de uma tag (llvmorg-X.Y.Z) ou commit do LLVM."""
    sources = []
    for filename, required in LLVM_SOURCES:
        content = fetch_llvm_file(tag, filename, required)
        if content:
            sources.append((filename, content))
    functions, rejected = parse_kmpc_prototypes(sources)
    print(f"[*] Encontradas {len(functions)} funções __kmpc_* no LLVM ({tag}).")
    if rejected:
        print(f"[*] {len(rejected)} funções ignoradas por usarem tipos não suportados "
              f"(ex.: {', '.join(sorted(rejected)[:5])}).")
    generate_kmpc_code(functions, tag, max_switch_args)


def main():
    parser = argparse.ArgumentParser(
        description="Atualiza a lib simple-openmp-hook para uma versão do GCC (libgomp) ou do LLVM (libomp).")
    parser.add_argument("--runtime", choices=["libgomp", "libomp"], default="libgomp",
                        help="Runtime OpenMP alvo: libgomp (GCC, ABI GOMP_*) ou libomp (LLVM, ABI __kmpc_*)")
    parser.add_argument("--gcc-version", type=str, help="Versão do GCC (ex: gcc-12.2.0, 12.2.0 ou releases/gcc-12.2.0)")
    parser.add_argument("--llvm-version", type=str, help="Versão do LLVM para --runtime libomp (ex: 19.1.0 ou llvmorg-19.1.0)")
    parser.add_argument("--commit", type=str,
                        help="Commit do GCC ou do LLVM (conforme --runtime) no lugar de uma versão: hash curto ou "
                             "completo, ou versão de pacote com +g<hash> (ex: 16.2.1+r23+gd564253eb6c8)")
    parser.add_argument("--max-switch-args", type=int, default=32,
                        help="nº de argumentos variádicos tratados pelo switch (__kmpc_fork_call/teams, "
                             "GOMP_doacross_wait); acima disso, libffi (padrão: 32)")
    parser.add_argument("--list-tags", action="store_true", help="Lista as releases disponíveis do runtime escolhido")
    args = parser.parse_args()

    version = args.llvm_version if args.runtime == "libomp" else args.gcc_version
    if args.commit and version:
        parser.error("use --commit ou uma versão (--gcc-version/--llvm-version), não os dois")
    commit = None
    if args.commit:
        try:
            commit = parse_commit_ref(args.commit)
        except ValueError as e:
            parser.error(str(e))

    if args.runtime == "libomp":
        if args.list_tags:
            print("\nReleases encontradas no LLVM:")
            for t in list_llvm_releases()[-20:]:
                print(f" - {t}")
            return
        if not (args.llvm_version or commit):
            print("[!] Por favor, especifique uma versão do LLVM com --llvm-version (ex: --llvm-version 19.1.0) "
                  "ou um commit com --commit")
            sys.exit(1)
        if commit:
            tag = commit
        else:
            tag = args.llvm_version if args.llvm_version.startswith("llvmorg-") else f"llvmorg-{args.llvm_version}"
        update_libomp(tag, args.max_switch_args)
        return

    if args.list_tags:
        tags = list_gcc_releases()
        print("\nReleases encontradas no GCC:")
        for t in tags[-20:]:  # exibe as 20 mais recentes
            print(f" - {t}")
        return

    if not (args.gcc_version or commit):
        print("[!] Por favor, especifique uma versão do GCC com --gcc-version (ex: --gcc-version 12.2.0) "
              "ou um commit com --commit")
        sys.exit(1)

    tag = commit or gcc_ref_from_version(args.gcc_version)

    header_content = fetch_file_content(tag, "libgomp_g.h")
    functions = parse_gomp_prototypes(header_content)
    
    print(f"[*] Encontradas {len(functions)} funções da ABI OpenMP no GCC ({tag}).")
    generate_code(functions, max_switch_args=args.max_switch_args, gcc_ref=tag)

if __name__ == "__main__":
    main()
