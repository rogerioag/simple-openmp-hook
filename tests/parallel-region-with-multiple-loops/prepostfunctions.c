#include "debug.h"
#include <stdio.h>
#include <stdlib.h>

int num_parallel_regions = 0;

int num_loop_dynamic_start = 0;

int num_loop_dynamic_next = 0;

void print_results() {
  printf("Number of parallel regions: %d\n", num_parallel_regions);
  printf("Number of loops with schedule(dynamic): %d\n",
         num_loop_dynamic_start);
  printf("Number of loop dynamic next: %d\n", num_loop_dynamic_next);
}

void PRE_GOMP_parallel(void) {
  PRINT_FUNC_NAME;
  num_parallel_regions++;
}

void POST_GOMP_parallel(void) {
  PRINT_FUNC_NAME;
  print_results();
}

void PRE_GOMP_parallel_start(void) {
  PRINT_FUNC_NAME;
  num_parallel_regions++;
}

void PRE_GOMP_parallel_end(void) { PRINT_FUNC_NAME; }

void POST_GOMP_parallel_start(void) { PRINT_FUNC_NAME; }

void POST_GOMP_parallel_end(void) {
  PRINT_FUNC_NAME;

  print_results();
}

void PRE_GOMP_loop_dynamic_start() {
  PRINT_FUNC_NAME;
  num_loop_dynamic_start++;
}

void POST_GOMP_loop_dynamic_start() { PRINT_FUNC_NAME; }

void PRE_GOMP_loop_dynamic_next() {
  PRINT_FUNC_NAME;
  num_loop_dynamic_next++;
}

void POST_GOMP_loop_dynamic_next(long istart, long iend) {
  PRINT_FUNC_NAME;
  printf("%d, %d\n", istart, iend);
}

/* ==== Acrescentado por check_hook_compat.py em 2026-11-20 11:46 para
 * parallel-region-with-multiple-loops.exe. Ganchos que faltavam para as funções
 * do runtime chamadas pelo binário. ==== */
#include "debug.h"
#include <stdio.h>

#ifndef HOOK_INC
#define HOOK_INC(x) __atomic_fetch_add(&(x), 1, __ATOMIC_RELAXED)
#endif

/* ---- libgomp (GCC) ---- */

static int hook_count_GOMP_loop_end;
void PRE_GOMP_loop_end(void) {
  PRINT_FUNC_NAME;
  HOOK_INC(hook_count_GOMP_loop_end);
  /* TODO: código executado antes de GOMP_loop_end(). */
}

void POST_GOMP_loop_end(void) {
  PRINT_FUNC_NAME;
  /* TODO: código executado depois de GOMP_loop_end(). */
}

static int hook_count_GOMP_loop_end_nowait;
void PRE_GOMP_loop_end_nowait(void) {
  PRINT_FUNC_NAME;
  HOOK_INC(hook_count_GOMP_loop_end_nowait);
  /* TODO: código executado antes de GOMP_loop_end_nowait(). */
}

void POST_GOMP_loop_end_nowait(void) {
  PRINT_FUNC_NAME;
  /* TODO: código executado depois de GOMP_loop_end_nowait(). */
}

static int hook_count_GOMP_loop_maybe_nonmonotonic_runtime_next;
void PRE_GOMP_loop_maybe_nonmonotonic_runtime_next(void) {
  PRINT_FUNC_NAME;
  HOOK_INC(hook_count_GOMP_loop_maybe_nonmonotonic_runtime_next);
  /* TODO: código executado antes de
   * GOMP_loop_maybe_nonmonotonic_runtime_next(). */
}

void POST_GOMP_loop_maybe_nonmonotonic_runtime_next(void) {
  PRINT_FUNC_NAME;
  /* TODO: código executado depois de
   * GOMP_loop_maybe_nonmonotonic_runtime_next(). */
}

static int hook_count_GOMP_loop_maybe_nonmonotonic_runtime_start;
void PRE_GOMP_loop_maybe_nonmonotonic_runtime_start(void) {
  PRINT_FUNC_NAME;
  HOOK_INC(hook_count_GOMP_loop_maybe_nonmonotonic_runtime_start);
  /* TODO: código executado antes de
   * GOMP_loop_maybe_nonmonotonic_runtime_start(). */
}

void POST_GOMP_loop_maybe_nonmonotonic_runtime_start(void) {
  PRINT_FUNC_NAME;
  /* TODO: código executado depois de
   * GOMP_loop_maybe_nonmonotonic_runtime_start(). */
}

static int hook_count_GOMP_loop_nonmonotonic_dynamic_next;
void PRE_GOMP_loop_nonmonotonic_dynamic_next(void) {
  PRINT_FUNC_NAME;
  HOOK_INC(hook_count_GOMP_loop_nonmonotonic_dynamic_next);
  /* TODO: código executado antes de GOMP_loop_nonmonotonic_dynamic_next(). */
}

void POST_GOMP_loop_nonmonotonic_dynamic_next(void) {
  PRINT_FUNC_NAME;
  /* TODO: código executado depois de GOMP_loop_nonmonotonic_dynamic_next(). */
}

static int hook_count_GOMP_loop_nonmonotonic_dynamic_start;
void PRE_GOMP_loop_nonmonotonic_dynamic_start(void) {
  PRINT_FUNC_NAME;
  HOOK_INC(hook_count_GOMP_loop_nonmonotonic_dynamic_start);
  /* TODO: código executado antes de GOMP_loop_nonmonotonic_dynamic_start(). */
}

void POST_GOMP_loop_nonmonotonic_dynamic_start(void) {
  PRINT_FUNC_NAME;
  /* TODO: código executado depois de GOMP_loop_nonmonotonic_dynamic_start(). */
}

__attribute__((destructor)) static void hook_print_counts_20261120114631(void) {
  printf("Chamadas interceptadas (contadores dos ganchos PRE_*):\n");
  printf("  %-44s %d\n", "GOMP_loop_end", hook_count_GOMP_loop_end);
  printf("  %-44s %d\n", "GOMP_loop_end_nowait",
         hook_count_GOMP_loop_end_nowait);
  printf("  %-44s %d\n", "GOMP_loop_maybe_nonmonotonic_runtime_next",
         hook_count_GOMP_loop_maybe_nonmonotonic_runtime_next);
  printf("  %-44s %d\n", "GOMP_loop_maybe_nonmonotonic_runtime_start",
         hook_count_GOMP_loop_maybe_nonmonotonic_runtime_start);
  printf("  %-44s %d\n", "GOMP_loop_nonmonotonic_dynamic_next",
         hook_count_GOMP_loop_nonmonotonic_dynamic_next);
  printf("  %-44s %d\n", "GOMP_loop_nonmonotonic_dynamic_start",
         hook_count_GOMP_loop_nonmonotonic_dynamic_start);
}
