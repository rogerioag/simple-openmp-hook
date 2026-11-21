# simple-openmp-hook: Interceptação Dinâmica dos Runtimes OpenMP (libgomp e libomp)

O **simple-openmp-hook** é uma biblioteca de instrumentação dinâmica e interceptação (*hooking*) para os dois principais runtimes OpenMP do Linux:

- **libgomp**, o runtime do **GCC**, que usa a ABI `GOMP_*`;
- **libomp**, o runtime do **LLVM/Clang**, que usa a ABI `__kmpc_*`.

Usando interposição de biblioteca compartilhada via `LD_PRELOAD`, o projeto intercepta as chamadas que a aplicação faz ao _runtime_ e executa rotinas customizadas de pré e pós-processamento (`PRE_*` e `POST_*`). Não é preciso alterar o código-fonte da aplicação nem recompilar o _runtime_ `OpenMP`.

Cada _runtime_ tem a sua biblioteca de interceptação:

| | Opção 1: libgomp (GCC) | Opção 2: libomp (LLVM/Clang) |
|-----|---|---|
| Aplicações compiladas com | `gcc -fopenmp` | `clang -fopenmp` |
| ABI interceptada | `GOMP_*` | `__kmpc_*` |
| Biblioteca de interceptação | `libhookgomp.so` | `libhookkmpc.so` |
| Arquivos gerados | `hookgomp.c`, `hookgomp.h`, `prepostdef_gomp.h` | `hookkmpc.c`, `hookkmpc.h`, `prepostdef_kmpc.h` |
| Ganchos | `PRE_GOMP_<nome>()` / `POST_GOMP_<nome>()` | `PRE_kmpc_<nome>()` / `POST_kmpc_<nome>()` |
| Exemplo de gancho | `PRE_GOMP_parallel()` | `PRE_kmpc_fork_call()` |

---

## Visão Geral e Arquitetura

O compilador converte as diretivas `OpenMP` de um código C/C++ (ex.: `#pragma omp parallel`, `#pragma omp for`, `#pragma omp task`) em chamadas para funções do runtime. Cada compilador usa uma ABI diferente:

| Diretiva | GCC → libgomp | Clang → libomp |
|---|---|---|
| `parallel` | `GOMP_parallel` | `__kmpc_fork_call` |
| `for schedule(static)` | nenhuma: a divisão das iterações é calculada inline | `__kmpc_for_static_init_4`, `__kmpc_for_static_fini` |
| `for schedule(dynamic)` | `GOMP_loop_nonmonotonic_dynamic_start`, `GOMP_loop_nonmonotonic_dynamic_next`, `GOMP_loop_end` | `__kmpc_dispatch_init_4`, `__kmpc_dispatch_next_4` |
| `barrier` | `GOMP_barrier` | `__kmpc_barrier` |
| `critical` | `GOMP_critical_start`, `GOMP_critical_end` | `__kmpc_critical`, `__kmpc_end_critical` |
| `single` | `GOMP_single_start` | `__kmpc_single`, `__kmpc_end_single` |
| `task` | `GOMP_task` | `__kmpc_omp_task_alloc`, `__kmpc_omp_task` |
| `taskwait` | `GOMP_taskwait` | `__kmpc_omp_taskwait` |

A tabela mostra as chamadas geradas pelo `GCC` na versão $16.2.1$ e pelo `clang` na versão $23.1.5$ para um laço. Para ver as chamadas de um programa seu, use `nm programa.[o | exe] | grep -E "GOMP_|__kmpc_"`.

O **simple-openmp-hook** atua como uma camada intermediária entre a aplicação e o _runtime_:

```
+------------------------------------+        +------------------------------------+
| Aplicação compilada com GCC        |        | Aplicação compilada com Clang      |
| (#pragma omp ...)                  |        | (#pragma omp ...)                  |
+------------------------------------+        +------------------------------------+
                  |                                             |
                  | chamada ABI GOMP_*                          | chamada ABI __kmpc_*
                  v                                             v
+------------------------------------+        +------------------------------------+
|          libhookgomp.so            |        |          libhookkmpc.so            |
| 1. Executa PRE_GOMP_*()            |        | 1. Executa PRE_kmpc_*()            |
| 2. dlsym(RTLD_NEXT, "GOMP_*")      |        | 2. dlsym(RTLD_NEXT, "__kmpc_*")    |
| 3. Executa POST_GOMP_*()           |        | 3. Executa POST_kmpc_*()           |
+------------------------------------+        +------------------------------------+
                  |                                             |
                  v                                             v
        libgomp.so (GCC nativo)                       libomp.so (LLVM nativo)
```

### Funcionalidades
- **Rastreamento transparente**: não exige alterações nos arquivos-fonte nem no binário final da aplicação.
- **Dois runtimes**: a mesma abordagem de ganchos `PRE_*`/`POST_*` para a libgomp (GCC) e para a libomp (LLVM/Clang).
- **Ganchos personalizados**: você define as funções `PRE_*` e `POST_*` que quiser num arquivo como `prepostfunctions.c`, para registrar métricas, contar iterações/chunks e analisar _overhead_. As que não forem definidas têm uma implementação vazia (*weak*).
- **Cobertura ampla das ABIs**: regiões paralelas, laços (estático, dinâmico, guided, runtime, doacross), sincronizações (barreiras, seções críticas, atômicas), tarefas (*tasks*), seções e rotinas de aceleradores (*target/teams*). Na libomp, todos os `__kmpc_*` exportados são interceptados, exceto as atômicas de 128 bits.
- **Funções variádicas**: `__kmpc_fork_call`/`__kmpc_fork_teams` (libomp) e `GOMP_doacross_wait` (libgomp) são repassadas com o número exato de argumentos. Veja [Funções Variádicas](#funções-variádicas).
- **Gerador de código**: os _wrappers_ são gerados a partir dos fontes oficiais do `GCC` ou do `LLVM Clang`, para qualquer versão ou _commit_. Veja [Atualizar os Wrappers para Outra Versão do Runtime](#atualizar-os-wrappers-para-outra-versão-do-runtime).

---

## Estrutura do Repositório

- **[hookgomp.h](hookgomp.h)**: cabeçalho da opção libgomp, com as declarações dos ponteiros de função da ABI `GOMP_*` e a macro `GET_RUNTIME_FUNCTION`.
- **[hookgomp.c](hookgomp.c)**: funções interceptadoras da ABI `GOMP_*`, que executam os ganchos `PRE`/`POST` e chamam a `libgomp` nativa.
- **[prepostdef_gomp.h](prepostdef_gomp.h)**: protótipos dos ganchos `PRE_GOMP_*` e `POST_GOMP_*`.
- **[hookkmpc.h](hookkmpc.h)**: cabeçalho da opção libomp, com os tipos da ABI `__kmpc_*` e os ponteiros de função.
- **[hookkmpc.c](hookkmpc.c)**: funções interceptadoras da ABI `__kmpc_*`, que executam os ganchos `PRE`/`POST` e chamam a `libomp` nativa.
- **[prepostdef_kmpc.h](prepostdef_kmpc.h)**: protótipos dos ganchos `PRE_kmpc_*` e `POST_kmpc_*`.
- **[debug.h](debug.h)**: macros de depuração (`TRACE`, `PRINT_FUNC_NAME`) para diagnóstico em tempo de compilação/execução.
- **[update_hookomp.py](update_hookomp.py)**: gerador dos arquivos acima a partir dos fontes do GCC ou do LLVM.
- **[check_hook_compat.py](check_hook_compat.py)**: verifica se o hook é compatível com a ABI de um binário e gera os ganchos que faltam no `prepostfunctions.c`. Veja [Verificar a Compatibilidade de uma Aplicação](#verificar-a-compatibilidade-de-uma-aplicação).
- **[Makefile](Makefile)**: compilação das bibliotecas compartilhadas `libhookgomp.so` e `libhookkmpc.so`.
- **[tests/](tests)**: programas de teste e validação:
  - `parallel-region-with-multiple-loops` (libgomp): múltiplos laços de repetição e agendamentos dinâmicos.
  - `parallel-region-with-tasks` (libgomp): criação, sincronização e contabilização de tarefas OpenMP.
  - `libgomp-doacross` (libgomp): laços `ordered(n)` com `doacross`, que usam funções variádicas.
  - `libomp-parallel-many-args` (libomp): regiões `parallel` e `teams`, laços, `critical` e tasks com programas compilados pelo Clang.

---

## Como Funciona a Interceptação

As duas bibliotecas usam o mesmo mecanismo. Cada função interceptadora tem o mesmo nome e a mesma assinatura da função do runtime. Como a biblioteca de interceptação é carregada antes, a aplicação chama a versão dela.

Exemplo da opção libgomp (`hookgomp.c`), para `GOMP_parallel_start` e `GOMP_parallel_end`:

```c
void GOMP_parallel_start (void (*arg1) (void *), void * arg2, unsigned arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_start, "GOMP_parallel_start");
    PRE_GOMP_parallel_start();
    lib_GOMP_parallel_start(arg1, arg2, arg3);
    POST_GOMP_parallel_start();
}

void GOMP_parallel_end () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_end, "GOMP_parallel_end");
    PRE_GOMP_parallel_end();
    lib_GOMP_parallel_end();
    POST_GOMP_parallel_end();
}
```

Exemplo equivalente da opção libomp (`hookkmpc.c`), para `__kmpc_barrier`:

```c
void __kmpc_barrier (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_barrier, "__kmpc_barrier");
    PRE_kmpc_barrier();
    lib___kmpc_barrier(arg1, arg2);
    POST_kmpc_barrier();
}
```

A macro `GET_RUNTIME_FUNCTION(...)`, definida em `hookgomp.h` e em `hookkmpc.h`, pede ao _linker_ dinâmico o endereço da função original:

```C
#define GET_RUNTIME_FUNCTION(hook_func_pointer, func_name) \
  do { \
    if (hook_func_pointer) break; \
    void *__handle = RTLD_NEXT; \
    hook_func_pointer = (typeof(hook_func_pointer)) (uintptr_t) dlsym(__handle, func_name); \
  } while(0)
```

O `dlsym` faz parte da API de carregamento dinâmico do C/C++ (`<dlfcn.h>`). Ele retorna o endereço de memória de um símbolo, como uma função ou uma variável global, numa biblioteca compartilhada ([documentação](https://linux.die.net/man/3/dlsym)):

```C
void *dlsym(void *restrict handle, const char *restrict name);
```

O `handle` é um ponteiro retornado por `dlopen()` ou um dos *pseudo-handles* especiais, `RTLD_DEFAULT` ou `RTLD_NEXT`. O `name` é o nome do símbolo, numa _string_ terminada em nulo. A função retorna um ponteiro genérico (`void*`) para o símbolo. Em caso de falha, retorna `NULL`, e `dlerror()` informa o motivo.

- `RTLD_DEFAULT` busca a primeira ocorrência do símbolo, na ordem padrão de pesquisa dos objetos compartilhados.
- `RTLD_NEXT` busca a próxima ocorrência do símbolo depois do objeto atual. É o recurso usado em *symbol interposition*, ou seja, para criar *wrappers* que interceptam funções existentes.

Como a biblioteca de interceptação é carregada antes do runtime, as chamadas da aplicação chegam primeiro a ela. A função interceptadora usa `RTLD_NEXT` para pedir ao _linker_ a próxima função com o mesmo nome, que é a função original da `libgomp.so` ou da `libomp.so`. O ponteiro é resolvido na primeira chamada e guardado (`lib_GOMP_parallel_end`, `lib___kmpc_barrier` etc.).

Com esse ponteiro, a função interceptadora executa o gancho de antes (`PRE_*`), chama a função original e executa o gancho de depois (`POST_*`):

```C
PRE_GOMP_parallel_end();        PRE_kmpc_barrier();
lib_GOMP_parallel_end();        lib___kmpc_barrier(arg1, arg2);
POST_GOMP_parallel_end();       POST_kmpc_barrier();
```

---

## Funções Variádicas

Algumas funções dos runtimes recebem argumentos variáveis (`...`). Em C não é possível repassar um `...` diretamente para outra função, então os wrappers dessas funções são gerados de um jeito especial, igual nas duas opções:

- **Até `--max-switch-args` argumentos (padrão: 32):** um `switch` chama a função original com o número exato de argumentos. É o caminho rápido, com custo praticamente nulo.
- **Acima disso:** a chamada é montada em tempo de execução com a **libffi** (`ffi_prep_cif_var` + `ffi_call`), sem limite de argumentos.

O `Makefile` liga a libffi automaticamente quando ela está instalada (`pkg-config libffi`). Use `make USE_LIBFFI=0` para compilar sem ela. Nesse caso, uma chamada com mais argumentos do que o `switch` trata encerra o programa com uma mensagem explicando o motivo.

### Opção libomp: regiões `parallel` e `teams`

`__kmpc_fork_call` e `__kmpc_fork_teams` recebem as variáveis compartilhadas da região como argumentos variáveis. O número de argumentos vem na própria chamada, no parâmetro `argc`:

```c
void __kmpc_fork_call(ident_t *loc, kmp_int32 argc, kmpc_micro microtask, ...);
```

### Opção libgomp: laços `doacross`

`GOMP_doacross_wait(long first, ...)` e `GOMP_doacross_ull_wait(unsigned long long first, ...)` são chamadas a cada `#pragma omp ordered doacross(sink: ...)` de um laço `ordered(n)` e recebem `n` índices. Aqui o número de argumentos não vem na chamada, então o wrapper faz assim:

1. O wrapper de `GOMP_loop[_ull]_doacross_*start(unsigned ncounts, ...)` guarda `ncounts` numa variável por thread (`__thread`).
2. O wrapper de `GOMP_doacross[_ull]_wait` lê os `ncounts` valores e os encaminha com o esquema `switch` + libffi.
3. Os wrappers de `GOMP_parallel*` e `GOMP_teams_reg` salvam e restauram `ncounts`. Assim, um laço `doacross` dentro de uma região aninhada não sobrescreve o valor do laço externo.

---

## Atualizar os Wrappers para Outra Versão do Runtime

Os arquivos `hookgomp.*`, `prepostdef_gomp.h`, `hookkmpc.*` e `prepostdef_kmpc.h` são gerados pelo script [update_hookomp.py](update_hookomp.py). Ele baixa os fontes do runtime escolhido e extrai os protótipos da ABI:

- **libgomp:** `libgomp/libgomp_g.h`, do espelho do GCC no GitHub.
- **libomp:** `kmp.h`, `kmp_atomic.h`, `kmp_collapse.h`, `kmp_sched.cpp` e `kmp_dispatch.cpp`, do `llvm-project`. O gerador descarta os ramos `#if KMP_OS_WINDOWS`. Funções com tipos que ele não sabe declarar (`_Quad`, `kmp_cmplx128` etc., quase todas atômicas de 128 bits) são ignoradas, e o script informa quantas foram.

Gere os wrappers para a mesma versão do runtime com que as aplicações vão rodar. Funções que existem só em versões mais novas não serão interceptadas, e assinaturas diferentes podem quebrar a chamada.

> **Atenção:** o script grava os arquivos no **diretório atual** e sobrescreve os que já existem. Rode-o na raiz do projeto e recompile com `make` em seguida.

### Opções

| Opção | Descrição |
|---|---|
| `--runtime {libgomp,libomp}` | Runtime alvo. `libgomp` (padrão) gera `hookgomp.*` e `prepostdef_gomp.h`; `libomp` gera `hookkmpc.*` e `prepostdef_kmpc.h`. |
| `--gcc-version VERSÃO` | Versão do GCC, para `--runtime libgomp`. Aceita `16.2.0`, `gcc-16.2.0` ou `releases/gcc-16.2.0`. |
| `--llvm-version VERSÃO` | Versão do LLVM, para `--runtime libomp`. Aceita `23.1.5` ou `llvmorg-23.1.5`. |
| `--commit COMMIT` | Commit do GCC ou do LLVM, conforme o `--runtime`, no lugar de uma versão. Aceita um hash de 7 a 40 dígitos ou uma versão de pacote com o sufixo `+g<hash>`, como `16.2.1+r23+gd564253eb6c8-1`. Não pode ser usada junto com `--gcc-version`/`--llvm-version`. |
| `--list-tags` | Lista as 20 releases mais recentes do runtime escolhido e sai. |
| `--max-switch-args N` | Número de argumentos variádicos tratados pelo `switch` gerado (padrão: `32`). Acima disso, a chamada usa libffi. Veja [Funções Variádicas](#funções-variádicas). |

### Exemplos: opção libgomp (GCC)

```bash
python3 update_hookomp.py --list-tags                # releases disponíveis do GCC
python3 update_hookomp.py --gcc-version 16.2.0       # a partir da tag releases/gcc-16.2.0
python3 update_hookomp.py --commit d564253eb6c8      # a partir de um commit
python3 update_hookomp.py --commit "$(pacman -Q gcc | cut -d' ' -f2)"

```

### Exemplos: opção libomp (LLVM/Clang)

```bash
python3 update_hookomp.py --runtime libomp --list-tags              # releases disponíveis do LLVM
python3 update_hookomp.py --runtime libomp --llvm-version 23.1.5    # a partir da tag llvmorg-23.1.5
python3 update_hookomp.py --runtime libomp --commit 392dfff97d29    # a partir de um commit
```

### Versões sem tag (snapshots entre releases)

Versões terminadas em `.1`, como o GCC `16.2.1`, não têm tag. Elas são snapshots de um branch de release (`releases/gcc-16`) feitos depois da última versão oficial. Para gerar exatamente a ABI de um desses snapshots, use `--commit`.

No Arch Linux, a versão do pacote já traz o hash do commit:

```bash
$ pacman -Q gcc
gcc 16.2.1+r23+gd564253eb6c8-1     # 23 commits depois de releases/gcc-16.2.0, commit d564253eb6c8

$ python3 update_hookomp.py --commit "$(pacman -Q gcc | cut -d' ' -f2)"
```

Para descobrir o commit de uma tag do LLVM:

```bash
git ls-remote https://github.com/llvm/llvm-project.git 'refs/tags/llvmorg-23.1.5^{}'
```

### Combinar opções

```bash
# switch com até 64 argumentos antes de recorrer à libffi, nas duas opções
python3 update_hookomp.py --gcc-version 16.2.0 --max-switch-args 64
python3 update_hookomp.py --runtime libomp --llvm-version 23.1.5 --max-switch-args 64
make
```

---

## Verificar a Compatibilidade de uma Aplicação

O script [check_hook_compat.py](check_hook_compat.py) recebe um ou mais `.o` ou executáveis da aplicação e responde duas perguntas:

1. **O hook atual intercepta corretamente as chamadas desse binário?**
2. **O `prepostfunctions.c` tem os ganchos de todas as funções que o binário usa?**

```bash
python3 check_hook_compat.py tests/parallel-region-with-tasks/parallel-region-with-tasks.exe
python3 check_hook_compat.py main.o solver.o io.o            # vários arquivos, analisados juntos
```

### O que é verificado

1. **Compilador e versão**, lidos da seção `.comment` do binário (`GCC: (GNU) 16.2.1`, `clang version 23.1.5`).
2. **Funções do runtime chamadas pelo binário**: os símbolos `GOMP_*` e `__kmpc_*` indefinidos. Um binário com os dois tipos é analisado nas duas opções.
3. **Cobertura**: cada função usada precisa ter wrapper em `hookgomp.h`/`hookkmpc.h` e estar exportada pela biblioteca compilada.
4. **Assinaturas**: o protótipo de cada função usada é comparado com o dos fontes oficiais da versão do compilador, com o mesmo parser do `update_hookomp.py`. A referência é escolhida nesta ordem:
   1. a tag da versão;
   2. o commit informado pelo compilador;
   3. o commit do pacote instalado (Arch Linux: `pacman -Q gcc`/`clang`, quando a versão bate);
   4. a tag anterior mais próxima.
5. **Versão do hook**: a primeira linha dos arquivos gerados registra de qual tag ou commit eles vieram. Se for diferente da do binário, o script avisa.
6. **Ganchos existentes no `prepostfunctions.c`**: a biblioteca chama todos os `PRE_*`/`POST_*` sem argumentos. Um gancho declarado com parâmetros recebe lixo e é reportado como incompatível.

Quando há incompatibilidade, o script mostra o comando que atualiza o hook para a versão do binário. Exemplo, com um hook gerado para o GCC 10 e um binário compilado com o GCC 16:

```
=== libgomp (GCC): 13 funções do runtime chamadas ===
Compilador: GCC 16.2.1
Hook local: hookgomp.h (gerado a partir de: releases/gcc-10.5.0)
Referência: d564253eb6c8 (commit do pacote instalado (16.2.1+r23+gd564253eb6c8-1))
[OK] 12 de 13 funções compatíveis
[!]  o hook foi gerado a partir de releases/gcc-10.5.0, e o binário corresponde a d564253eb6c8
[X]  GOMP_task: assinatura diferente
        hook:       void GOMP_task(void (*) (void *), void *, void (*) (void *, void *), long, long, bool, unsigned, void **, int)
        referência: void GOMP_task(void (*) (void *), void *, void (*) (void *, void *), long, long, bool, unsigned, void **, int, void *)

Para atualizar o hook para a versão do binário, na raiz do projeto:
    python3 update_hookomp.py --commit d564253eb6c8 && make

Resultado: INCOMPATÍVEL (veja os itens [X] acima)
```

### Ganchos gerados no `prepostfunctions.c`

Para cada função usada pelo binário que ainda não tem `PRE_*` ou `POST_*`, o script gera o gancho que falta. Cada `PRE_*` gerado tem um contador atômico e uma marcação `TODO`, e um destrutor imprime os contadores no fim da execução:

```c
static int hook_count_GOMP_taskwait;
void PRE_GOMP_taskwait(void) {
    PRINT_FUNC_NAME;
    HOOK_INC(hook_count_GOMP_taskwait);
    /* TODO: código executado antes de GOMP_taskwait(). */
}

void POST_GOMP_taskwait(void) {
    PRINT_FUNC_NAME;
    /* TODO: código executado depois de GOMP_taskwait(). */
}
```

- **Se o arquivo não existir**, ele é criado com todos os ganchos e com o `#include` do `prepostdef_gomp.h`/`prepostdef_kmpc.h`, para que o compilador confira os protótipos.
- **Se o arquivo existir**, os ganchos que faltam são acrescentados no final, num bloco com data. O que já estava no arquivo não é alterado, e rodar o script de novo não duplica nada.
- **Local padrão:** `prepostfunctions.c` no diretório do primeiro arquivo analisado, que normalmente é o do código da aplicação. Use `--prepost` para apontar outro arquivo, por exemplo um `prepostfunctions.c` único com os ganchos de um projeto inteiro.

### Opções

| Opção | Descrição |
|---|---|
| `--prepost CAMINHO` | `prepostfunctions.c` a verificar e completar (padrão: no diretório do primeiro arquivo analisado). |
| `--dry-run` | Mostra os ganchos que seriam gerados, sem gravar o arquivo. |
| `--no-prepost` | Verifica o `prepostfunctions.c`, mas não grava os ganchos que faltam. |
| `--hook-dir DIR` | Raiz do simple-openmp-hook, com `hookgomp.h`/`hookkmpc.h` (padrão: o diretório do script). |
| `--gcc-ref REF` / `--llvm-ref REF` | Tag ou commit para comparar, no lugar do detectado. Útil quando o binário não tem a seção `.comment`. |
| `--offline` | Não baixa os fontes do runtime: verifica só a cobertura dos wrappers e os ganchos. |

### Códigos de saída

| Código | Significado |
|---|---|
| `0` | Compatível. Avisos `[!]`, como uma versão de hook diferente com as mesmas assinaturas, não mudam o resultado. |
| `1` | Incompatibilidade encontrada: algum item `[X]`. |
| `2` | Erro: arquivo inexistente ou que não é ELF, ferramenta do binutils ausente etc. |

Com isso, o script pode interromper a compilação num `Makefile` quando o hook estiver desatualizado:

```make
check: app.exe
	python3 ../../check_hook_compat.py app.exe --no-prepost
```

O script usa `readelf` e `nm` do binutils. Para comparar as assinaturas, precisa de acesso à internet, para baixar os fontes do GCC/LLVM do GitHub.

---

## Compilação e Uso

### 1. Compilar as Bibliotecas `libhookgomp.so` e `libhookkmpc.so`

No diretório raiz do projeto, execute:

```bash
[simple-openmp-hook]$ make
rm -rf *.o main-test *.so 
Use make OPTIONS="-DVERBOSE -DDEBUG" to compile with messages.
libffi: USE_LIBFFI=1 (make USE_LIBFFI=0 compila sem libffi).
g++  -DHOOK_USE_LIBFFI  -c -Werror -fpic hookgomp.c
LD_LIBRARY_PATH=simple-openmp-hook: export LD_LIBRARY_PATH
g++ -L simple-openmp-hook -shared hookgomp.o -ldl -lffi -o libhookgomp.so
gcc  -DHOOK_USE_LIBFFI  -c -Werror -fpic hookkmpc.c
gcc -shared hookkmpc.o -ldl -lffi -o libhookkmpc.so
[simple-openmp-hook]$
```

Para compilar só uma das bibliotecas:

```bash
make libhookgomp     # opção libgomp (GCC)
make libhookkmpc    # opção libomp (LLVM/Clang)
```

#### Variáveis do `make`

| Variável | Descrição |
|---|---|
| `OPTIONS` | Flags extras de compilação. Ex.: `OPTIONS="-DVERBOSE -DDEBUG"` ativa as mensagens de *trace*. |
| `USE_LIBFFI` | `1` usa a libffi para chamadas variádicas com mais argumentos do que o `switch` trata; `0` compila sem ela. O padrão é `1` se `pkg-config` encontrar a libffi, e `0` caso contrário. |

Para ativar mensagens detalhadas de depuração (*trace*):

```bash
[simple-openmp-hook]$ make OPTIONS="-DVERBOSE -DDEBUG"
rm -rf *.o main-test *.so 
Use make OPTIONS="-DVERBOSE -DDEBUG" to compile with messages.
libffi: USE_LIBFFI=1 (make USE_LIBFFI=0 compila sem libffi).
g++ -DVERBOSE -DDEBUG -DHOOK_USE_LIBFFI  -c -Werror -fpic hookgomp.c
LD_LIBRARY_PATH=simple-openmp-hook: export LD_LIBRARY_PATH
g++ -L simple-openmp-hook -shared hookgomp.o -ldl -lffi -o libhookgomp.so
gcc -DVERBOSE -DDEBUG -DHOOK_USE_LIBFFI -c -Werror -fpic hookkmpc.c
gcc -shared hookkmpc.o -ldl -lffi -o libhookkmpc.so
[simple-openmp-hook]$
```

Para compilar sem a `libffi`:

```bash
make USE_LIBFFI=0
```

---

### 2. Utilizar a Biblioteca com uma Aplicação OpenMP

Escolha a biblioteca conforme o compilador usado na aplicação e carregue-a via `LD_PRELOAD`:

```bash
LD_PRELOAD=./libhookgomp.so  ./sua_aplicacao_omp.exe   # opção libgomp: compilada com gcc -fopenmp
LD_PRELOAD=./libhookkmpc.so ./sua_aplicacao_omp.exe   # opção libomp: compilada com clang -fopenmp
```

O `LD_PRELOAD` faz a biblioteca de interceptação ser carregada antes do runtime OpenMP usado pela aplicação: a `libgomp.so`, no caso do GCC, ou a `libomp.so`, no caso do Clang.

Para saber qual runtime uma aplicação usa:

```bash
ldd ./sua_aplicacao_omp.exe | grep -E "libgomp|libomp"
```

Carregue um único arquivo `.so` de hook por runtime. Se a aplicação já estiver linkada com `-lhookgomp` ou `-lhookkmpc`, use no `LD_PRELOAD` o mesmo arquivo do link. Duas cópias diferentes da mesma biblioteca de hook carregadas ao mesmo tempo causam falha de segmentação.

---

### 3. Personalizar os Callbacks (Ganchos)

Para criar métricas customizadas, crie ou edite um arquivo `prepostfunctions.c` com os ganchos que você quer usar. Os ganchos não têm parâmetros, e os que você não definir continuam com a implementação vazia da biblioteca.

Opção libgomp (protótipos em `prepostdef_gomp.h`):

```c
#include <stdio.h>
#include "prepostdef_gomp.h"

static int total_parallel_regions = 0;

void PRE_GOMP_parallel (void) {
    total_parallel_regions++;
    printf("[HOOK] Iniciando região paralela #%d\n", total_parallel_regions);
}

void POST_GOMP_parallel (void) {
    printf("[HOOK] Finalizando região paralela #%d\n", total_parallel_regions);
}
```

Opção libomp (protótipos em `prepostdef_kmpc.h`):

```c
#include <stdio.h>
#include "prepostdef_kmpc.h"

static int total_parallel_regions = 0;

void PRE_kmpc_fork_call (void) {
    total_parallel_regions++;
    printf("[HOOK] Iniciando região paralela #%d\n", total_parallel_regions);
}

void POST_kmpc_fork_call (void) {
    printf("[HOOK] Finalizando região paralela #%d\n", total_parallel_regions);
}
```

Ganchos de laços, barreiras e seções críticas rodam em todas as threads do time. Use operações atômicas nos contadores, por exemplo `__atomic_fetch_add(&contador, 1, __ATOMIC_RELAXED)`.

Em seguida, compile `prepostfunctions.c` junto com a aplicação e linke com a biblioteca de interceptação (`-lhookgomp` ou `-lhookkmpc`), como fazem os `Makefile` em [tests/](tests). Se a aplicação não for linkada com a biblioteca e você usar só o `LD_PRELOAD`, linke-a com `-rdynamic`, para que os ganchos definidos nela fiquem visíveis para a biblioteca.

---

## Executando os Testes

Compile as bibliotecas na raiz do projeto (`make`), navegue até um dos diretórios de teste e execute o `make`.

### Opção libgomp (GCC)

Teste com múltiplos laços:

```bash
$ cd tests/parallel-region-with-multiple-loops
[parallel-region-with-multiple-loops]$ make
[parallel-region-with-multiple-loops]$ LD_PRELOAD=./libhookgomp.so ./parallel-region-with-multiple-loops.exe
TRACE: [hookgomp.c:0001223] Calling [GOMP_parallel()]
TRACE: [prepostfunctions.c:0000018] Calling [PRE_GOMP_parallel()]
TRACE: [hookgomp.c:0000516] Calling [GOMP_loop_nonmonotonic_dynamic_start()]
TRACE: [hookgomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [hookgomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [hookgomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [hookgomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [hookgomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [hookgomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [hookgomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [hookgomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [hookgomp.c:0000855] Calling [GOMP_loop_end()]
TRACE: [hookgomp.c:0000543] Calling [GOMP_loop_maybe_nonmonotonic_runtime_start()]
TRACE: [hookgomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [hookgomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [hookgomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [hookgomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [hookgomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [hookgomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [hookgomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [hookgomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [hookgomp.c:0000863] Calling [GOMP_loop_end_nowait()]
TRACE: [prepostfunctions.c:0000023] Calling [POST_GOMP_parallel()]
Number of parallel regions: 1
Number of loops with schedule(dynamic): 0
Number of loop dynamic next: 0
Fora da região paralela.
loop_0[0]: 0, loop_1[0]: 0
loop_0[1]: 0, loop_1[1]: 0
loop_0[2]: 0, loop_1[2]: 0
loop_0[3]: 0, loop_1[3]: 0
loop_0[4]: 0, loop_1[4]: 0
loop_0[5]: 0, loop_1[5]: 0
loop_0[6]: 0, loop_1[6]: 0
loop_0[7]: 0, loop_1[7]: 0
[parallel-region-with-multiple-loops]$
```

Teste de tarefas:

```bash
$ cd tests/parallel-region-with-tasks
[parallel-region-with-tasks]$ make
[parallel-region-with-tasks]$ 
[parallel-region-with-tasks]$ LD_PRELOAD=./libhookgomp.so ./parallel-region-with-tasks.exe 15
Thread[00,140474537798912]: Antes da região paralela.
TRACE: [hookgomp.c:0001235] Calling [GOMP_parallel()]
  Thread[00,140474537798912]: Todas as threads executam.
TRACE: [hookgomp.c:0001442] Calling [GOMP_single_start()]
  Thread[03,140474512598720]: Todas as threads executam.
TRACE: [hookgomp.c:0001442] Calling [GOMP_single_start()]
  Thread[02,140474520991424]: Todas as threads executam.
TRACE: [hookgomp.c:0001442] Calling [GOMP_single_start()]
  Thread[01,140474529384128]: Todas as threads executam.
TRACE: [hookgomp.c:0001442] Calling [GOMP_single_start()]
  Thread[00,140474537798912]: Antes de criar tasks.
TRACE: [hookgomp.c:0001270] Calling [GOMP_task()]
    Thread[03,140474512598720]: Trabalhando na task 1.
TRACE: [hookgomp.c:0001270] Calling [GOMP_task()]
    Thread[00,140474537798912]: Trabalhando na task 2.
    Thread[00,140474537798912]: Antes do taskwait.
TRACE: [hookgomp.c:0001294] Calling [GOMP_taskwait()]
    Thread[00,140474537798912]: Depois do taskwait.
TRACE: [hookgomp.c:0001270] Calling [GOMP_task()]
    Thread[03,140474512598720]: Trabalhando na task 3.
Number of parallel regions: 1
Number of loops with schedule(dynamic): 0
Number of loop dynamic next: 0
Number of tasks: 3
Number of Finished tasks: 3
Thread[00,140474537798912]: Depois da região paralela.
[parallel-region-with-tasks]$
```

Teste de laços `doacross` (funções variádicas). Ele usa laços `ordered(2)`, `ordered(1)` com índice `unsigned long long` (variante `ull`), `ordered(40)` (caminho via libffi) e um `ordered(8)` com uma região `ordered(1)` aninhada, e confere os resultados com uma versão serial:

```bash
$ cd tests/libgomp-doacross
[libgomp-doacross]$ make
[libgomp-doacross]$ ./libgomp-doacross.exe
OK: todos os resultados corretos
Inícios de laço doacross, por thread: 114
GOMP_doacross_wait:                   8252
GOMP_doacross_ull_wait:               62
GOMP_doacross_post / ull_post:        4487
```

### Opção libomp (LLVM/Clang)

O teste é compilado com o Clang. Ele usa regiões `parallel` e `teams` com 40 variáveis compartilhadas (caminho via libffi), além de laços `static`/`dynamic`, `critical` e tasks:

```bash
$ cd tests/libomp-parallel-many-args
[libomp-parallel-many-args]$ make
[libomp-parallel-many-args]$ ./libomp-parallel-many-args.exe
OK: todos os resultados corretos
Regiões parallel (__kmpc_fork_call):        3
Regiões teams (__kmpc_fork_teams):          1
Laços static, por thread (for_static_init): 8
Laços dynamic, por thread (dispatch_init):  4
Chamadas dispatch_next:                     147
Entradas em critical:                       4
Tasks criadas (__kmpc_omp_task):            16
```

---

## Limitações

- Os ganchos `PRE_*`/`POST_*` não recebem os argumentos da função interceptada.
- Só são interceptadas as chamadas que a aplicação faz ao runtime. Chamadas internas do próprio runtime não passam pelos ganchos.
- A interceptação não funciona com o runtime linkado estaticamente.
- Na opção libomp, as atômicas de 128 bits (`_Quad`, `kmp_cmplx128`) não são interceptadas.
- Não carregue duas cópias diferentes da mesma biblioteca de hook ao mesmo tempo (veja [Utilizar a Biblioteca](#2-utilizar-a-biblioteca-com-uma-aplicação-openmp)).

> **Alternativa para a libomp:** a libomp também implementa o **OMPT** (OpenMP Tools Interface), a API oficial de callbacks para ferramentas. Ela não depende da ABI do compilador. A libgomp do GCC não tem suporte completo a OMPT.
