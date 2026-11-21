/* Ganchos PRE_kmpc_* / POST_kmpc_* do teste. Os contadores são atômicos porque
 * vários ganchos (for_static_init, dispatch_next, critical...) rodam em todas
 * as threads. */
#include "debug.h"
#include <stdio.h>

static int num_fork_call, num_fork_teams, num_static_init, num_dispatch_init,
    num_dispatch_next, num_critical, num_tasks;

#define INC(x) __atomic_fetch_add(&(x), 1, __ATOMIC_RELAXED)

void PRE_kmpc_fork_call(void) {
  PRINT_FUNC_NAME;
  INC(num_fork_call);
}
void PRE_kmpc_fork_teams(void) {
  PRINT_FUNC_NAME;
  INC(num_fork_teams);
}
void PRE_kmpc_for_static_init_4(void) {
  PRINT_FUNC_NAME;
  INC(num_static_init);
}
void PRE_kmpc_dispatch_init_4(void) {
  PRINT_FUNC_NAME;
  INC(num_dispatch_init);
}
void PRE_kmpc_dispatch_next_4(void) {
  PRINT_FUNC_NAME;
  INC(num_dispatch_next);
}
void PRE_kmpc_critical(void) {
  PRINT_FUNC_NAME;
  INC(num_critical);
}
void PRE_kmpc_omp_task(void) {
  PRINT_FUNC_NAME;
  INC(num_tasks);
}

__attribute__((destructor)) static void print_results(void) {
  printf("Regiões parallel (__kmpc_fork_call):        %d\n", num_fork_call);
  printf("Regiões teams (__kmpc_fork_teams):          %d\n", num_fork_teams);
  printf("Laços static, por thread (for_static_init): %d\n", num_static_init);
  printf("Laços dynamic, por thread (dispatch_init):  %d\n", num_dispatch_init);
  printf("Chamadas dispatch_next:                     %d\n", num_dispatch_next);
  printf("Entradas em critical:                       %d\n", num_critical);
  printf("Tasks criadas (__kmpc_omp_task):            %d\n", num_tasks);
}
