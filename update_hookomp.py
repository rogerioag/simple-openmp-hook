#!/usr/bin/env python3
"""
update_hookomp.py - Script para atualizar a lib de interceptacao OpenMP (hookomp)
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

def fetch_file_content(version_tag, filename):
    """Baixa o arquivo libgomp especifico da tag via HTTP (mais rápido que git archive completo)."""
    # Trata formato da tag
    tag_path = version_tag if version_tag.startswith("releases/") else f"releases/{version_tag}"
    url = GCC_RAW_URL.format(tag=tag_path, filename=filename)
    
    print(f"[*] Baixando {filename} para {version_tag} ({url})...")
    try:
        req = urllib.request.urlopen(url)
        return req.read().decode('utf-8')
    except Exception as e:
        print(f"[!] Erro ao baixar {filename} via HTTP: {e}")
        print("[*] Tentando via git archive remoto...")
        cmd = f"git archive --remote={GCC_GIT_REPO} {tag_path} libgomp/{filename} | tar -xO"
        res = subprocess.run(cmd, shell=True, capture_output=True)
        if res.returncode == 0:
            return res.stdout.decode('utf-8')
        else:
            raise RuntimeError(f"Não foi possível obter {filename} para a tag {version_tag}")

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

def generate_code(functions, output_dir="."):
    """Gera hookomp.h, prepostdef.h e hookomp.c com base nas funções extraídas."""
    print(f"[*] Gerando código para {len(functions)} funções GOMP_*...")

    # 1. prepostdef.h
    prepost_lines = [
        "#ifndef PREPOSTDEF_H",
        "#define PREPOSTDEF_H\n",
        "#ifdef __cplusplus",
        'extern "C" {',
        "#endif\n"
    ]
    for fn in functions:
        base_name = fn['name'].replace("GOMP_", "")
        prepost_lines.append(f"void PRE_GOMP_{base_name}(void);")
        prepost_lines.append(f"void POST_GOMP_{base_name}(void);\n")
        
    prepost_lines.extend(["#ifdef __cplusplus", "}", "#endif\n", "#endif /* PREPOSTDEF_H */"])
    
    with open(os.path.join(output_dir, "prepostdef.h"), "w") as f:
        f.write("\n".join(prepost_lines))

    # 2. hookomp.h (Declaração de ponteiros lib_GOMP_*)
    hook_h_lines = [
        "#ifndef hookomp_h__",
        "#define hookomp_h__\n",
        "#include <dlfcn.h>",
        "#include <stdarg.h>",
        "#include <stdio.h>",
        "#include <stdint.h>",
        "#include <stdbool.h>",
        "#include <pthread.h>",
        '#include "debug.h"',
        '#include "prepostdef.h"\n',
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
        
    hook_h_lines.extend(["\n#ifdef __cplusplus", "}", "#endif\n", "#endif /* hookomp_h__ */"])
    
    with open(os.path.join(output_dir, "hookomp.h"), "w") as f:
        f.write("\n".join(hook_h_lines))

    # 3. hookomp.c (Implementação das interceptações)
    hook_c_lines = [
        '#include "hookomp.h"\n',
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

    hook_c_lines.append("\n/* Funções de Interceptação */\n")
    
    for fn in functions:
        base_name = fn['name'].replace("GOMP_", "")
        typed_args, call_args = parse_args_to_names(fn['args'])
        
        is_variadic = "..." in typed_args
        inline_prefix = "__attribute__((always_inline)) inline " if is_variadic else ""
        
        hook_c_lines.append(f"{inline_prefix}{fn['return_type']} {fn['name']} ({typed_args}) {{")
        hook_c_lines.append("    PRINT_FUNC_NAME;")
        hook_c_lines.append(f'    GET_RUNTIME_FUNCTION(lib_{fn["name"]}, "{fn["name"]}");')
        hook_c_lines.append(f"    PRE_GOMP_{base_name}();")
        
        if fn['return_type'] == 'void':
            hook_c_lines.append(f"    lib_{fn['name']}({call_args});")
            hook_c_lines.append(f"    POST_GOMP_{base_name}();")
        else:
            hook_c_lines.append(f"    {fn['return_type']} res = lib_{fn['name']}({call_args});")
            hook_c_lines.append(f"    POST_GOMP_{base_name}();")
            hook_c_lines.append("    return res;")
            
        hook_c_lines.append("}\n")
        
    hook_c_lines.extend(["#ifdef __cplusplus", "}", "#endif\n"])
    
    with open(os.path.join(output_dir, "hookomp.c"), "w") as f:
        f.write("\n".join(hook_c_lines))

    print(f"[✓] Arquivos hookomp.h, hookomp.c e prepostdef.h atualizados com sucesso!")

def main():
    parser = argparse.ArgumentParser(description="Atualiza a lib simple-openmp-hook para uma versão do GCC.")
    parser.add_argument("--gcc-version", type=str, help="Versão do GCC (ex: gcc-12.2.0, 12.2.0 ou releases/gcc-12.2.0)")
    parser.add_argument("--list-tags", action="store_true", help="Lista as releases disponíveis no repositório do GCC")
    args = parser.parse_args()

    if args.list_tags:
        tags = list_gcc_releases()
        print("\nReleases encontradas no GCC:")
        for t in tags[-20:]:  # exibe as 20 mais recentes
            print(f" - {t}")
        return

    if not args.gcc_version:
        print("[!] Por favor, especifique uma versão do GCC com --gcc-version (ex: --gcc-version 12.2.0)")
        sys.exit(1)

    tag = args.gcc_version
    if not tag.startswith("gcc-") and not tag.startswith("releases/"):
        tag = f"releases/gcc-{tag}"
    elif tag.startswith("gcc-"):
        tag = f"releases/{tag}"

    header_content = fetch_file_content(tag, "libgomp_g.h")
    functions = parse_gomp_prototypes(header_content)
    
    print(f"[*] Encontradas {len(functions)} funções da ABI OpenMP no GCC ({tag}).")
    generate_code(functions)

if __name__ == "__main__":
    main()
