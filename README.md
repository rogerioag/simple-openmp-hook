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

## 📁 Estrutura do Repositório

- **[hookomp.h](hookomp.h)**: Cabeçalho principal com declarações dos ponteiros de função da ABI `GOMP_*` e a macro `GET_RUNTIME_FUNCTION`.
- **[hookomp.c](hookomp.c)**: Implementação das funções interceptadoras que redirecionam a execução para ganchos `PRE`/`POST` e chamam a `libgomp` nativa.
- **[prepostdef.h](prepostdef.h)**: Declaração dos prototypes das funções de callback (`PRE_GOMP_*` e `POST_GOMP_*`).
- **[debug.h](debug.h)**: Macros de depuração (`TRACE`, `PRINT_FUNC_NAME`) para diagnóstico em tempo de compilação/execução.
- **[Makefile](Makefile)**: Script de compilação da biblioteca compartilhada `libhookomp.so`.
- **[tests/](tests)**: Programas de teste e validação:
  - `parallel-region-with-multiple-loops`: Teste com múltiplos laços de repetição e agendamentos dinâmicos.
  - `parallel-region-with-tasks`: Teste com criação, sincronização e contabilização de tarefas OpenMP.

---

## 🛠️ Compilação e Uso

### 1. Compilar a Biblioteca `libhookomp.so`

No diretório raiz do projeto, execute:

```bash
make
```

Para ativar mensagens detalhadas de depuração (*trace*):

```bash
make OPTIONS="-DVERBOSE -DDEBUG"
```

Isso gerará a biblioteca compartilhada `libhookomp.so`.

---

### 2. Utilizar a Biblioteca com uma Aplicação OpenMP

Para interceptar as chamadas OpenMP de qualquer aplicação compilada com o GCC (`-fopenmp`), basta carregar a biblioteca via `LD_PRELOAD`:

```bash
LD_PRELOAD=./libhookomp.so ./sua_aplicacao_omp
```

---

### 3. Personalizar os Callbacks (Ganchos)

Para criar métricas customizadas, crie/edite o arquivo `prepostfunctions.c` definindo o comportamento desejado nos ganchos. Exemplo:

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

Em seguida, compile e vincule `prepostfunctions.c` junto com sua aplicação ou inclua na build da biblioteca `libhookomp.so`.

---

## 🧪 Executando os Testes

Navegue até um dos diretórios de teste e execute o `make`:

```bash
cd tests/parallel-region-with-multiple-loops
make
LD_PRELOAD=./libhookomp.so ./parallel-region-with-multiple-loops.exe
```

Ou para o teste de tarefas:

```bash
cd tests/parallel-region-with-tasks
make
LD_PRELOAD=./libhookomp.so ./parallel-region-with-tasks.exe 15
```

---

## 📜 Licença

Este projeto está disponível sob a licença aberta do repositório.
=======
# simple-openmp-hook
OpenMP Hook

HOOKOMP
