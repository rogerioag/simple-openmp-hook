/* Ganchos PRE_GOMP_* do teste. Os contadores são atômicos porque os ganchos
 * de laço rodam em todas as threads. */
#include <stdio.h>
#include "debug.h"

static int num_doacross_start, num_wait, num_ull_wait, num_post;

#define INC(x) __atomic_fetch_add(&(x), 1, __ATOMIC_RELAXED)

void PRE_GOMP_loop_doacross_start(void)          { PRINT_FUNC_NAME; INC(num_doacross_start); }
void PRE_GOMP_loop_doacross_static_start(void)   { PRINT_FUNC_NAME; INC(num_doacross_start); }
void PRE_GOMP_loop_ull_doacross_start(void)      { PRINT_FUNC_NAME; INC(num_doacross_start); }
void PRE_GOMP_loop_ull_doacross_static_start(void) { PRINT_FUNC_NAME; INC(num_doacross_start); }
void PRE_GOMP_doacross_wait(void)                { PRINT_FUNC_NAME; INC(num_wait); }
void PRE_GOMP_doacross_ull_wait(void)            { PRINT_FUNC_NAME; INC(num_ull_wait); }
void PRE_GOMP_doacross_post(void)                { PRINT_FUNC_NAME; INC(num_post); }
void PRE_GOMP_doacross_ull_post(void)            { PRINT_FUNC_NAME; INC(num_post); }

__attribute__((destructor)) static void print_results(void) {
    printf("Inícios de laço doacross, por thread: %d\n", num_doacross_start);
    printf("GOMP_doacross_wait:                   %d\n", num_wait);
    printf("GOMP_doacross_ull_wait:               %d\n", num_ull_wait);
    printf("GOMP_doacross_post / ull_post:        %d\n", num_post);
}
