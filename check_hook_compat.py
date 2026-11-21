#!/usr/bin/env python3
"""
check_hook_compat.py - Verifica se as bibliotecas de interceptação (libhookgomp.so e
libhookkmpc.so) são compatíveis com a ABI OpenMP usada por um binário (.o ou executável)
e gera ou completa o prepostfunctions.c com os ganchos das funções que o binário chama.

Passos:
  1. Lê do binário o compilador e a versão (seção .comment) e as funções do runtime
     que ele chama (símbolos GOMP_* e __kmpc_* indefinidos).
  2. Baixa os protótipos da versão do runtime correspondente (mesmo parser do
     update_hookomp.py) e compara com os wrappers de hookgomp.h / hookkmpc.h.
  3. Acrescenta ao prepostfunctions.c os ganchos PRE_* / POST_* que ainda faltam,
     com contadores atômicos e marcações TODO. Cria o arquivo se ele não existir.

Códigos de saída: 0 = compatível, 1 = incompatibilidade encontrada, 2 = erro.
"""

import argparse
import contextlib
import datetime
import io
import os
import re
import shutil
import subprocess
import sys
import urllib.error
import urllib.request

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, SCRIPT_DIR)
sys.dont_write_bytecode = True   # não cria __pycache__/ na raiz do projeto ao importar o gerador
import update_hookomp as gen  # noqa: E402  (parser e URLs compartilhados com o gerador)

EXIT_OK, EXIT_INCOMPAT, EXIT_ERROR = 0, 1, 2

RUNTIMES = {
    "libgomp": {
        "title": "libgomp (GCC)", "symbol_prefix": "GOMP_", "hook_header": "hookgomp.h",
        "prepostdef": "prepostdef_gomp.h", "library": "libhookgomp.so", "compiler": "GCC",
    },
    "libomp": {
        "title": "libomp (LLVM/Clang)", "symbol_prefix": "__kmpc_", "hook_header": "hookkmpc.h",
        "prepostdef": "prepostdef_kmpc.h", "library": "libhookkmpc.so", "compiler": "Clang",
    },
}


class ToolError(Exception):
    pass


# ---------------------------------------------------------------------------
# Leitura do binário (binutils: readelf e nm)
# ---------------------------------------------------------------------------

def run_tool(cmd):
    if not shutil.which(cmd[0]):
        raise ToolError(f"'{cmd[0]}' não encontrado (instale o binutils)")
    # LC_ALL=C: a saída do readelf/nm é traduzida conforme o idioma do sistema ("Tipo:" em vez de "Type:")
    res = subprocess.run(cmd, capture_output=True, text=True, env={**os.environ, "LC_ALL": "C"})
    if res.returncode != 0:
        raise ToolError(f"{' '.join(cmd)} falhou: {res.stderr.strip()}")
    return res.stdout


def read_binary(path):
    """Retorna tipo ELF, comentários do compilador, símbolos indefinidos e bibliotecas NEEDED."""
    if not os.path.isfile(path):
        raise ToolError(f"{path}: arquivo não encontrado")
    with open(path, "rb") as f:
        if f.read(4) != b"\x7fELF":
            raise ToolError(f"{path}: não é um arquivo ELF (.o ou executável)")

    header = run_tool(["readelf", "-h", path])
    m = re.search(r"^\s*Type:\s+(\w+)", header, re.M)
    elf_type = m.group(1) if m else "?"

    comments = []
    out = run_tool(["readelf", "-p", ".comment", path])
    for line in out.splitlines():
        m = re.match(r"\s*\[\s*\w+\]\s+(.*)", line)
        if m:
            comments.append(m.group(1).strip())

    # .o: tabela de símbolos normal; executável/biblioteca: tabela dinâmica
    nm_cmd = ["nm", "-u", path] if elf_type == "REL" else ["nm", "-D", "-u", path]
    undefined = {}
    for line in run_tool(nm_cmd).splitlines():
        parts = line.split()
        if not parts or parts[-2:-1] not in (["U"], ["w"]):
            continue
        name, _, version = parts[-1].partition("@")
        undefined[name] = version.lstrip("@")

    needed = []
    if elf_type != "REL":
        for line in run_tool(["readelf", "-d", path]).splitlines():
            m = re.search(r"\(NEEDED\).*\[(.+)\]", line)
            if m:
                needed.append(m.group(1))

    return {"path": path, "type": elf_type, "comments": comments,
            "undefined": undefined, "needed": needed}


def detect_compilers(comments):
    """Extrai as versões de GCC e Clang da seção .comment.

    Um executável gerado pelo Clang também traz entradas 'GCC:' dos arquivos crt*.o
    do sistema; por isso o runtime é decidido pelos símbolos, não por aqui."""
    gcc, clang = [], []
    for c in comments:
        m = re.match(r"GCC: \((.*?)\) (\d+\.\d+\.\d+)", c)
        if m:
            gcc.append(m.group(2))
        m = re.search(r"clang version (\d+\.\d+\.\d+)\S*(?: \(\S+ ([0-9a-f]{7,40})\))?", c)
        if m:
            clang.append((m.group(1), m.group(2)))
    vkey = lambda v: tuple(int(x) for x in v.split("."))
    return (max(gcc, key=vkey) if gcc else None,
            max(clang, key=lambda t: vkey(t[0])) if clang else None)


# ---------------------------------------------------------------------------
# Protótipos de referência (fontes oficiais do GCC / LLVM)
# ---------------------------------------------------------------------------

def http_get(url):
    try:
        with urllib.request.urlopen(url, timeout=30) as r:
            return r.read().decode("utf-8")
    except urllib.error.HTTPError as e:
        if e.code == 404:
            return None
        raise ToolError(f"falha ao baixar {url}: {e}")
    except urllib.error.URLError as e:
        raise ToolError(f"falha ao baixar {url}: {e.reason}")


def make_sig(name, ret, args):
    """(forma normalizada, usada na comparação; protótipo legível, usado no relatório)."""
    text = re.sub(r"([(),*\[\]])", r" \1 ", f"{ret} ({args})")
    return " ".join(text.split()), f"{' '.join(ret.split())} {name}({' '.join(args.split())})"


def display_path(path):
    """Caminho relativo se estiver dentro do diretório atual; senão, absoluto."""
    rel = os.path.relpath(path)
    return path if rel.startswith("..") else rel


def package_commit(package, version):
    """Hash do commit de um pacote instalado do Arch (versão X.Y.Z+rN+g<hash>), se bater com a versão."""
    if not shutil.which("pacman"):
        return None
    res = subprocess.run(["pacman", "-Q", package], capture_output=True, text=True)
    if res.returncode != 0:
        return None
    pkgver = res.stdout.split()[-1]
    if not pkgver.startswith(version + "+"):
        return None
    try:
        return gen.parse_commit_ref(pkgver), pkgver
    except ValueError:
        return None


def candidate_refs(runtime, version, commit_hint):
    """Refs (tag ou commit) a tentar, da mais exata para a aproximação mais próxima."""
    x, y, z = (int(p) for p in version.split("."))
    tag = (lambda zz: f"releases/gcc-{x}.{y}.{zz}") if runtime == "libgomp" else (lambda zz: f"llvmorg-{x}.{y}.{zz}")
    yield tag(z), "tag", None
    if commit_hint:
        yield commit_hint, "commit", "commit informado pelo compilador na seção .comment"
    pkg = package_commit("gcc" if runtime == "libgomp" else "clang", version)
    if pkg:
        yield pkg[0], "commit", f"commit do pacote instalado ({pkg[1]})"
    for zz in range(z - 1, -1, -1):
        yield tag(zz), "tag", f"versão {version} não tem tag; usando a tag anterior mais próxima"


def load_reference(runtime, version, commit_hint=None, forced_ref=None):
    """Retorna (ref, tipo, nota, {função: assinatura}, {função: motivo_rejeição})."""
    refs = [(forced_ref, "commit" if re.fullmatch(r"[0-9a-f]{7,40}", forced_ref) else "tag", "informada pelo usuário")] \
        if forced_ref else candidate_refs(runtime, version, commit_hint)
    for ref, kind, note in refs:
        if runtime == "libgomp":
            content = http_get(gen.GCC_RAW_URL.format(tag=ref, filename="libgomp_g.h"))
            if content is None:
                continue
            sigs = {fn["name"]: make_sig(fn["name"], fn["return_type"], fn["args"])
                    for fn in gen.parse_gomp_prototypes(content)}
            return ref, kind, note, sigs, {}
        sources = []
        for filename, required in gen.LLVM_SOURCES:
            content = http_get(gen.LLVM_RAW_URL.format(tag=ref, filename=filename))
            if content is None and required:
                sources = None
                break
            if content:
                sources.append((filename, content))
        if sources is None:
            continue
        with contextlib.redirect_stdout(io.StringIO()):
            functions, rejected = gen.parse_kmpc_prototypes(sources)
        sigs = {fn["name"]: make_sig(fn["name"], fn["return_type"],
                                     ", ".join(p[0] for p in fn["params"]) if fn["params"] else "void")
                for fn in functions}
        return ref, kind, note, sigs, rejected
    raise ToolError(f"nenhuma tag ou commit encontrado para a versão {version}")


# ---------------------------------------------------------------------------
# Hook local (hookgomp.h / hookkmpc.h e a biblioteca compilada)
# ---------------------------------------------------------------------------

def load_hook(runtime, hook_dir):
    info = RUNTIMES[runtime]
    path = os.path.join(hook_dir, info["hook_header"])
    if not os.path.isfile(path):
        raise ToolError(f"{path} não encontrado (use --hook-dir com a raiz do simple-openmp-hook)")
    text = open(path, encoding="utf-8").read()
    m = re.search(r"Gerado por update_hookomp\.py a partir do (?:GCC|LLVM) (\S+?)\.\s", text.split("\n", 1)[0])
    generated_from = m.group(1) if m else None
    sigs = {}
    for m in re.finditer(r"^extern\s+(.+?)\s*\(\*lib_(\w+)\)\s*\((.*)\);\s*$", text, re.M):
        sigs[m.group(2)] = make_sig(m.group(2), m.group(1), m.group(3))

    lib_path = os.path.join(hook_dir, info["library"])
    exported, lib_stale = None, False
    if os.path.isfile(lib_path):
        exported = {line.split()[-1].split("@")[0]
                    for line in run_tool(["nm", "-D", "--defined-only", lib_path]).splitlines() if line.split()}
        lib_stale = os.path.getmtime(lib_path) < os.path.getmtime(path)
    return {"header": path, "generated_from": generated_from, "sigs": sigs,
            "library": lib_path, "exported": exported, "lib_stale": lib_stale}


def hook_base(runtime, name):
    """GOMP_parallel -> GOMP_parallel ; __kmpc_fork_call -> kmpc_fork_call."""
    return name if runtime == "libgomp" else name[len("__"):]


def update_command(runtime, ref, kind):
    if runtime == "libgomp":
        opt = f"--commit {ref}" if kind == "commit" else f"--gcc-version {ref[len('releases/gcc-'):]}"
        return f"python3 update_hookomp.py {opt} && make"
    opt = f"--commit {ref}" if kind == "commit" else f"--llvm-version {ref[len('llvmorg-'):]}"
    return f"python3 update_hookomp.py --runtime libomp {opt} && make"


# ---------------------------------------------------------------------------
# Análise
# ---------------------------------------------------------------------------

def analyze_runtime(runtime, used, binaries, args):
    """Imprime o relatório de um runtime e retorna True se houver incompatibilidade."""
    info = RUNTIMES[runtime]
    print(f"\n=== {info['title']}: {len(used)} funções do runtime chamadas ===")

    gcc_v, clang_v = args.compilers
    version, commit_hint = (gcc_v, None) if runtime == "libgomp" else (clang_v or (None, None))
    forced = args.gcc_ref if runtime == "libgomp" else args.llvm_ref
    if version:
        print(f"Compilador: {info['compiler']} {version}")
    elif not forced:
        print(f"[!] A seção .comment não informa a versão do {info['compiler']}; "
              f"sem ela não dá para comparar as assinaturas. Use --{'gcc' if runtime == 'libgomp' else 'llvm'}-ref.")

    if runtime == "libgomp":
        libs = sorted({n for b in binaries for n in b["needed"]})
        if "libomp.so" in libs or any(n.startswith("libomp.so") for n in libs):
            print("[!] O executável carrega a libomp: as chamadas GOMP_* vão para a camada de compatibilidade "
                  "da libomp, e a referência do GCC pode não corresponder a ela.")
    versions = sorted({v for b in binaries for n, v in b["undefined"].items()
                       if n.startswith(info["symbol_prefix"]) and v})
    if versions:
        print(f"Versões de símbolo exigidas: {', '.join(versions)}")

    hook = load_hook(runtime, args.hook_dir)
    print(f"Hook local: {display_path(hook['header'])} "
          f"(gerado a partir de: {hook['generated_from'] or 'desconhecido, arquivo sem cabeçalho de versão'})")

    ref = kind = None
    ref_sigs, rejected = None, {}
    if args.offline:
        print("[!] --offline: assinaturas não comparadas com os fontes do runtime.")
    elif version or forced:
        try:
            ref, kind, note, ref_sigs, rejected = load_reference(runtime, version, commit_hint, forced)
            print(f"Referência: {ref}" + (f" ({note})" if note else ""))
        except ToolError as e:
            print(f"[!] Não foi possível obter a referência: {e}. Assinaturas não comparadas.")

    problems, warnings, ok = [], [], 0
    for name in used:
        if name not in hook["sigs"]:
            why = f" (o gerador não suporta: {rejected[name]})" if name in rejected else ""
            problems.append(f"{name}: sem wrapper no hook; a chamada vai direto para o runtime{why}")
            continue
        if hook["exported"] is not None and name not in hook["exported"]:
            problems.append(f"{name}: declarado em {info['hook_header']}, mas não exportado por "
                            f"{info['library']} (recompile com make)")
            continue
        if ref_sigs is not None:
            if name not in ref_sigs:
                warnings.append(f"{name}: não existe nos protótipos de {ref}")
            elif ref_sigs[name][0] != hook["sigs"][name][0]:
                problems.append(f"{name}: assinatura diferente\n"
                                f"        hook:       {hook['sigs'][name][1]}\n"
                                f"        referência: {ref_sigs[name][1]}")
                continue
        ok += 1

    if hook["exported"] is None:
        warnings.append(f"{info['library']} não foi compilada (rode make)")
    elif hook["lib_stale"]:
        warnings.append(f"{info['library']} é mais antiga que {info['hook_header']} (rode make)")
    if ref and hook["generated_from"] and hook["generated_from"] != ref:
        warnings.append(f"o hook foi gerado a partir de {hook['generated_from']}, e o binário corresponde a {ref}")

    print(f"[OK] {ok} de {len(used)} funções compatíveis")
    for w in warnings:
        print(f"[!]  {w}")
    for p in problems:
        print(f"[X]  {p}")

    needs_regen = any("rode make" not in p and "recompile" not in p for p in problems) or \
        (ref and hook["generated_from"] and hook["generated_from"] != ref)
    if ref and (needs_regen or (problems and not hook["generated_from"])):
        print(f"\nPara atualizar o hook para a versão do binário, na raiz do projeto:\n    "
              f"{update_command(runtime, ref, kind)}")
    elif problems:
        print("\nPara corrigir, recompile as bibliotecas na raiz do projeto:\n    make")
    return bool(problems)


# ---------------------------------------------------------------------------
# prepostfunctions.c
# ---------------------------------------------------------------------------

def defined_hooks(text):
    """{nome do gancho: parâmetros declarados} das definições PRE_*/POST_* do arquivo."""
    text = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    text = re.sub(r"//[^\n]*", "", text)
    return {m.group(1): " ".join(m.group(2).split())
            for m in re.finditer(r"\b(?:static\s+)?(?:inline\s+)?void\s+((?:PRE|POST)_\w+)\s*\(([^)]*)\)\s*\{", text)}


def build_hooks_block(used_by_runtime, existing, hook_sigs, binaries, new_file):
    """Monta o código dos ganchos que faltam. Retorna (texto, nº de ganchos)."""
    stamp = datetime.datetime.now()
    names = ", ".join(os.path.basename(b["path"]) for b in binaries)
    out, count = [], 0
    if new_file:
        out += [f"/* prepostfunctions.c: ganchos PRE_* / POST_* para {names}.",
                f" * Gerado por check_hook_compat.py em {stamp:%Y-%m-%d %H:%M}. Preencha os TODO.",
                " * Os contadores são atômicos porque vários ganchos (laços, barreiras, critical...)",
                " * rodam em todas as threads do time. */"]
    else:
        out += ["", "", f"/* ==== Acrescentado por check_hook_compat.py em {stamp:%Y-%m-%d %H:%M} para {names}.",
                " * Ganchos que faltavam para as funções do runtime chamadas pelo binário. ==== */"]
    out += ["#include <stdio.h>", '#include "debug.h"']
    if new_file:
        for runtime in used_by_runtime:
            out.append(f'#include "{RUNTIMES[runtime]["prepostdef"]}"')
    out += ["", "#ifndef HOOK_INC", "#define HOOK_INC(x) __atomic_fetch_add(&(x), 1, __ATOMIC_RELAXED)", "#endif"]

    counters = []
    for runtime, used in used_by_runtime.items():
        section = []
        for name in used:
            base = hook_base(runtime, name)
            pre, post = f"PRE_{base}", f"POST_{base}"
            note = "" if name in hook_sigs[runtime] else \
                "\n    /* Atenção: o hook atual não tem wrapper para esta função; regenere-o para este gancho ser chamado. */"
            if pre not in existing:
                counter = f"hook_count_{base}"
                counters.append((name, counter))
                section += [f"static int {counter};",
                            f"void {pre}(void) {{", "    PRINT_FUNC_NAME;", f"    HOOK_INC({counter});{note}",
                            f"    /* TODO: código executado antes de {name}(). */", "}", ""]
                count += 1
            if post not in existing:
                section += [f"void {post}(void) {{", f"    PRINT_FUNC_NAME;{note}",
                            f"    /* TODO: código executado depois de {name}(). */", "}", ""]
                count += 1
        if section:
            out += ["", f"/* ---- {RUNTIMES[runtime]['title']} ---- */", ""] + section

    if counters:
        width = max(len(n) for n, _ in counters) + 2
        out += [f"__attribute__((destructor)) static void hook_print_counts_{stamp:%Y%m%d%H%M%S}(void) {{",
                '    printf("Chamadas interceptadas (contadores dos ganchos PRE_*):\\n");']
        out += [f'    printf("  %-{width}s %d\\n", "{n}", {c});' for n, c in counters]
        out += ["}"]
    return "\n".join(out) + "\n", count


def check_existing_hooks(existing, rel):
    """Ganchos com parâmetros: a biblioteca chama todos os PRE_*/POST_* sem argumentos."""
    bad = {name: params for name, params in existing.items() if params not in ("", "void")}
    for name, params in sorted(bad.items()):
        print(f"[X]  {name}({params}): a biblioteca chama os ganchos sem argumentos, então os "
              f"parâmetros recebem lixo. Declare como {name}(void).")
    return bool(bad)


def update_prepost(path, used_by_runtime, hook_sigs, binaries, dry_run, write):
    """Verifica e completa o prepostfunctions.c. Retorna True se houver gancho incompatível."""
    exists = os.path.isfile(path)
    text = open(path, encoding="utf-8").read() if exists else ""
    existing = defined_hooks(text)
    rel = display_path(path)
    print(f"\n=== {rel} ===")
    if not exists:
        print(f"[!]  {rel} não existe" + (" e será criado." if write and not dry_run else "."))
    bad = check_existing_hooks(existing, rel)
    block, count = build_hooks_block(used_by_runtime, existing, hook_sigs, binaries, new_file=not exists)
    if count == 0:
        print(f"[OK] {rel} já define os ganchos PRE_*/POST_* de todas as funções usadas.")
        return bad
    if not write:
        print(f"[!]  faltam {count} ganchos PRE_*/POST_* para as funções usadas (rode sem --no-prepost para gerá-los).")
        return bad
    action = "seriam acrescentados a" if exists else "seriam criados em"
    if dry_run:
        print(f"[--dry-run] {count} ganchos {action} {rel}:\n")
        print(block)
        return bad
    with open(path, "a" if exists else "w", encoding="utf-8") as f:
        if exists and text and not text.endswith("\n"):
            f.write("\n")
        f.write(block)
    print(f"[✓] {count} ganchos {'acrescentados a' if exists else 'criados em'} {rel} (procure por TODO).")
    return bad


# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(
        description="Verifica a compatibilidade entre a ABI OpenMP de um binário e as bibliotecas de "
                    "interceptação (libhookgomp.so / libhookkmpc.so), e gera os ganchos que faltam no "
                    "prepostfunctions.c.",
        epilog="Códigos de saída: 0 = compatível, 1 = incompatibilidade encontrada, 2 = erro.")
    parser.add_argument("binaries", nargs="+", metavar="ARQUIVO",
                        help="arquivo(s) .o ou executável da aplicação; vários arquivos são analisados juntos")
    parser.add_argument("--prepost", metavar="CAMINHO",
                        help="prepostfunctions.c a verificar/criar (padrão: no diretório do primeiro ARQUIVO)")
    parser.add_argument("--hook-dir", default=SCRIPT_DIR, metavar="DIR",
                        help="raiz do simple-openmp-hook, com hookgomp.h/hookkmpc.h (padrão: diretório do script)")
    parser.add_argument("--gcc-ref", metavar="REF",
                        help="tag ou commit do GCC para comparar, no lugar do detectado (ex.: releases/gcc-16.2.0)")
    parser.add_argument("--llvm-ref", metavar="REF",
                        help="tag ou commit do LLVM para comparar, no lugar do detectado (ex.: llvmorg-23.1.5)")
    parser.add_argument("--offline", action="store_true",
                        help="não baixa os fontes do runtime: verifica só a cobertura dos wrappers")
    parser.add_argument("--no-prepost", action="store_true",
                        help="verifica o prepostfunctions.c, mas não grava os ganchos que faltam")
    parser.add_argument("--dry-run", action="store_true",
                        help="mostra os ganchos que seriam gerados, sem gravar o prepostfunctions.c")
    args = parser.parse_args()

    try:
        binaries = [read_binary(p) for p in args.binaries]
        args.compilers = detect_compilers([c for b in binaries for c in b["comments"]])

        used_by_runtime = {}
        for runtime, info in RUNTIMES.items():
            used = sorted({n for b in binaries for n in b["undefined"] if n.startswith(info["symbol_prefix"])})
            if used:
                used_by_runtime[runtime] = used

        print("Arquivos analisados:")
        for b in binaries:
            kind = {"REL": "objeto (.o)", "EXEC": "executável", "DYN": "executável PIE / biblioteca"}.get(b["type"], b["type"])
            needed = f"; runtime: {', '.join(n for n in b['needed'] if 'gomp' in n or 'omp' in n)}" \
                if any("omp" in n for n in b["needed"]) else ""
            print(f"  {b['path']}: {kind}{needed}")
        if not used_by_runtime:
            print("\n[!] Nenhuma chamada GOMP_* ou __kmpc_* encontrada. O binário foi compilado com -fopenmp? "
                  "Se o runtime foi linkado estaticamente, a interceptação por LD_PRELOAD não funciona.")
            return EXIT_OK

        incompatible = False
        for runtime, used in used_by_runtime.items():
            incompatible |= analyze_runtime(runtime, used, binaries, args)

        prepost = args.prepost or os.path.join(os.path.dirname(os.path.abspath(args.binaries[0])),
                                               "prepostfunctions.c")
        hook_sigs = {rt: load_hook(rt, args.hook_dir)["sigs"] for rt in used_by_runtime}
        incompatible |= update_prepost(prepost, used_by_runtime, hook_sigs, binaries,
                                       args.dry_run, write=not args.no_prepost)

        print("\nResultado: " + ("INCOMPATÍVEL (veja os itens [X] acima)" if incompatible else "compatível"))
        return EXIT_INCOMPAT if incompatible else EXIT_OK
    except ToolError as e:
        print(f"[erro] {e}", file=sys.stderr)
        return EXIT_ERROR


if __name__ == "__main__":
    sys.exit(main())
