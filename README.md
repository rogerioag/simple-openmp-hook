# simple-openmp-hook: Interceptação Dinâmica do Runtime GNU OpenMP (GOMP)

O **simple-openmp-hook** é uma biblioteca de instrumentação dinâmica e interceptação (*hooking*) desenvolvida para o runtime OpenMP do GCC (**libgomp**). Através da técnica de interposição de biblioteca compartilhada via `LD_PRELOAD`, o projeto intercepta chamadas internas da ABI `GOMP_*` e permite a execução de rotinas customizadas de pré e pós-processamento (`PRE_*` e `POST_*`) sem a necessidade de alterar o código-fonte da aplicação nem recompilar a biblioteca nativa OpenMP.

---

## 🎯 Visão Geral e Arquitetura

Quando um compilador GCC processa código C/C++ contendo diretivas OpenMP (ex: `#pragma omp parallel`, `#pragma omp for`, `#pragma omp task`), ele converte essas diretivas em chamadas para funções da ABI GNU OpenMP (`GOMP_parallel_start`, `GOMP_loop_dynamic_start`, `GOMP_task`, etc.).

O **simple-openmp-hook** atua como uma camada intermediária entre a aplicação e a `libgomp`:

```
+------------------------------------+
|  Aplicação C/C++ (#pragma omp...)  |
+------------------------------------+
                  |
                  | (Chamada ABI GOMP_*)
                  v
+------------------------------------+
|          libhookomp.so             |
| 1. Executa PRE_GOMP_*()            |
| 2. Chama dlsym(RTLD_NEXT, GOMP_*)  |---> libgomp.so (GCC Nativo)
| 3. Executa POST_GOMP_*()           |
+------------------------------------+
```

### Funcionalidades
- **Rastreamento Transparente**: Não exige alterações nos arquivos-fonte nem no binário final da aplicação.
- **Ganchos Personalizados**: Permite definir funções `PRE_GOMP_*` e `POST_GOMP_*` no arquivo `prepostfunctions.c` para registrar métricas, contar iterações/chunks e analisar overhead.
- **Suporte Abrangente da ABI GOMP**: Intercepta regiões paralelas, laços (estático, dinâmico, guided, runtime), sincronizações (barreiras, seções críticas, atômicas), tarefas (*tasks*), seções e rotinas de aceleradores (*target/teams*).

---

## Estrutura do Repositório

- **[hookomp.h](hookomp.h)**: Cabeçalho principal com declarações dos ponteiros de função da ABI `GOMP_*` e a macro `GET_RUNTIME_FUNCTION`.
- **[hookomp.c](hookomp.c)**: Implementação das funções interceptadoras que redirecionam a execução para ganchos `PRE`/`POST` e chamam a `libgomp` nativa.
- **[prepostdef.h](prepostdef.h)**: Declaração dos prototypes das funções de callback (`PRE_GOMP_*` e `POST_GOMP_*`).
- **[debug.h](debug.h)**: Macros de depuração (`TRACE`, `PRINT_FUNC_NAME`) para diagnóstico em tempo de compilação/execução.
- **[Makefile](Makefile)**: Script de compilação da biblioteca compartilhada `libhookomp.so`.
- **[tests/](tests)**: Programas de teste e validação:
  - `parallel-region-with-multiple-loops`: Teste com múltiplos laços de repetição e agendamentos dinâmicos.
  - `parallel-region-with-tasks`: Teste com criação, sincronização e contabilização de tarefas OpenMP.

As funções de interceptação estão disponíveis no arquivo `hookomp.c` do projeto. O código apresenta o exemplo das funções de interceptação criadas para as funções `GOMP_parallel_start` e `GOMP_parallel_end`:

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

A macro `GET_RUNTIME_FUNCTION(...)` definida em `hookomp.h` faz uma chamada para o _linker_ 

```C
#define GET_RUNTIME_FUNCTION(hook_func_pointer, func_name) \
  do { \
    if (hook_func_pointer) break; \
    void *__handle = RTLD_NEXT; \
    hook_func_pointer = (typeof(hook_func_pointer)) (uintptr_t) dlsym(__handle, func_name); \
  } while(0)
```

O `dlsym` é uma função da `API` de carregamento dinâmico em C/C++ (parte da biblioteca `<dlfcn.h>`) usada para obter o endereço de memória de um símbolo (como uma função ou uma variável global) em uma biblioteca compartilhada que foi aberta com [`dlopen`](https://linux.die.net/man/3/dlsym).

```C
void *dlsym(void *restrict handle, const char *restrict name);
```

O `handle` é um ponteiro retornado por `dlopen()`, ou um dos `pseudo-handles` especiais (`RTLD_DEFAULT` ou `RTLD_NEXT`). O `name` é o nome do símbolo (função ou variável) em formato de _string_ terminada em nulo (`char*`). A função retorna um ponteiro genérico (`void*`) para o endereço do símbolo. Se falhar, retorna `NULL` e você pode usar `dlerror()` para capturar a mensagem de erro.

Os _Pseudo-handles_ Especiais são: `RTLD_DEFAULT` que busca a primeira ocorrência do símbolo usando a ordem padrão de pesquisa de objetos compartilhados. Já o `RTLD_NEXT` busca a próxima ocorrência do símbolo após o objeto atual (muito usado para *symbol interposition*, ou seja, criar "wrappers" ou interceptar chamadas de funções existentes).

A biblioteca do projeto como será carregada antes, irá substituir as chamadas que o código da aplicação faria para o _runtime_ do `OpenMP`. E as funções de interceptação perguntam ao _linker_ qual é a próxima referência com o nome da função interceptada, o que irá devolver uma referência para a função da biblioteca original do _runtime_.

Com o ponteiro para a função original `lib_GOMP_parallel_end`, as funções definidas na biblioteca de interceptação faz uma chamada para as funções de precisam ser executadas antes (`PRE_GOMP_parallel_end()`) de depois (`POST_GOMP_parallel_end()`) da chamada para função original do _runtime_.

```C
PRE_GOMP_parallel_end();
lib_GOMP_parallel_end();
POST_GOMP_parallel_end();
```

Produzindo o efeito desejado de interceptação das chamadas para o _runtime_ do `OpenMP`.

---

## Compilação e Uso

### 1. Compilar a Biblioteca `libhookomp.so`

No diretório raiz do projeto, execute:

```bash
[simple-openmp-hook]$ make
rm -rf *.o main-test *.so 
Use make OPTIONS="-DVERBOSE -DDEBUG" to compile with messages.
g++  -c -Werror -fpic hookomp.c
LD_LIBRARY_PATH=simple-openmp-hook: export LD_LIBRARY_PATH
g++ -L simple-openmp-hook -shared hookomp.o -ldl -o libhookomp.so
[simple-openmp-hook]$
```

Para ativar mensagens detalhadas de depuração (*trace*):

```bash
make OPTIONS="-DVERBOSE -DDEBUG"
```

Isso gerará a biblioteca compartilhada `libhookomp.so` com mensagens de depuração.

```bash
[simple-openmp-hook]$ make OPTIONS="-DVERBOSE -DDEBUG"
rm -rf *.o main-test *.so 
Use make OPTIONS="-DVERBOSE -DDEBUG" to compile with messages.
g++ -DVERBOSE -DDEBUG -c -Werror -fpic hookomp.c 
LD_LIBRARY_PATH=simple-openmp-hook: export LD_LIBRARY_PATH
g++ -L simple-openmp-hook -shared hookomp.o -ldl -o libhookomp.so
[simple-openmp-hook]$
```

---

### 2. Utilizar a Biblioteca com uma Aplicação OpenMP

Para interceptar as chamadas `OpenMP` de qualquer aplicação compilada com o GCC (`-fopenmp`), basta carregar a biblioteca via `LD_PRELOAD`:

```bash
LD_PRELOAD=./libhookomp.so ./sua_aplicacao_omp.exe
```

O carregamento com `LD_PRELOAD` faz com que a biblioteca de interceptação seja carregada antes das bibliotecas do _runtime_ do `OpenMP` utilizado, no caso do `GCC` com `LibGOMP`, a biblioteca `libgomp.so`.

---

### 3. Personalizar os Callbacks (Ganchos)

Para criar métricas customizadas, crie ou edite o arquivo `prepostfunctions.c` definindo o comportamento desejado nas funções que serão chamadas pelas funções de interceptação. Exemplo:

```c
#include <stdio.h>
#include "prepostdef.h"

static int total_parallel_regions = 0;

void PRE_GOMP_parallel_start (void) {
    total_parallel_regions++;
    printf("[HOOK] Iniciando região paralela #%d\n", total_parallel_regions);
}

void POST_GOMP_parallel_end (void) {
    printf("[HOOK] Finalizando região paralela #%d\n", total_parallel_regions);
}
```

Em seguida, compile e vincule `prepostfunctions.c` junto com sua aplicação ou inclua no diretório da sua aplicação a biblioteca `libhookomp.so`.

---

## Executando os Testes

Navegue até um dos diretórios de teste e execute o `make`:

```bash
$ cd tests/parallel-region-with-multiple-loops
[parallel-region-with-multiple-loops]$ make
[parallel-region-with-multiple-loops]$ LD_PRELOAD=./libhookomp.so ./parallel-region-with-multiple-loops.exe
TRACE: [ hookomp.c:0001223] Calling [GOMP_parallel()]
TRACE: [prepostfunctions.c:0000018] Calling [PRE_GOMP_parallel()]
TRACE: [ hookomp.c:0000516] Calling [GOMP_loop_nonmonotonic_dynamic_start()]
TRACE: [ hookomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [ hookomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [ hookomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [ hookomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [ hookomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [ hookomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [ hookomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [ hookomp.c:0000642] Calling [GOMP_loop_nonmonotonic_dynamic_next()]
TRACE: [ hookomp.c:0000855] Calling [GOMP_loop_end()]
TRACE: [ hookomp.c:0000543] Calling [GOMP_loop_maybe_nonmonotonic_runtime_start()]
TRACE: [ hookomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [ hookomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [ hookomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [ hookomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [ hookomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [ hookomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [ hookomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [ hookomp.c:0000669] Calling [GOMP_loop_maybe_nonmonotonic_runtime_next()]
TRACE: [ hookomp.c:0000863] Calling [GOMP_loop_end_nowait()]
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

Ou para o teste de tarefas:

```bash
$ cd tests/parallel-region-with-tasks
[parallel-region-with-tasks]$ make
[parallel-region-with-tasks]$ 
[parallel-region-with-tasks]$ LD_PRELOAD=./libhookomp.so ./parallel-region-with-tasks.exe 15
Thread[00,140474537798912]: Antes da região paralela.
TRACE: [ hookomp.c:0001235] Calling [GOMP_parallel()]
  Thread[00,140474537798912]: Todas as threads executam.
TRACE: [ hookomp.c:0001442] Calling [GOMP_single_start()]
  Thread[03,140474512598720]: Todas as threads executam.
TRACE: [ hookomp.c:0001442] Calling [GOMP_single_start()]
  Thread[02,140474520991424]: Todas as threads executam.
TRACE: [ hookomp.c:0001442] Calling [GOMP_single_start()]
  Thread[01,140474529384128]: Todas as threads executam.
TRACE: [ hookomp.c:0001442] Calling [GOMP_single_start()]
  Thread[00,140474537798912]: Antes de criar tasks.
TRACE: [ hookomp.c:0001270] Calling [GOMP_task()]
    Thread[03,140474512598720]: Trabalhando na task 1.
TRACE: [ hookomp.c:0001270] Calling [GOMP_task()]
    Thread[00,140474537798912]: Trabalhando na task 2.
    Thread[00,140474537798912]: Antes do taskwait.
TRACE: [ hookomp.c:0001294] Calling [GOMP_taskwait()]
    Thread[00,140474537798912]: Depois do taskwait.
TRACE: [ hookomp.c:0001270] Calling [GOMP_task()]
    Thread[03,140474512598720]: Trabalhando na task 3.
Number of parallel regions: 1
Number of loops with schedule(dynamic): 0
Number of loop dynamic next: 0
Number of tasks: 3
Number of Finished tasks: 3
Thread[00,140474537798912]: Depois da região paralela.
[parallel-region-with-tasks]$
```



---

