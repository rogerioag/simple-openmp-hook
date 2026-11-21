#include <stdio.h>
#include <stdlib.h>

#ifdef _OPENMP
#include <omp.h>
#else
#define omp_get_thread_num() 0
#define omp_get_num_threads() 1
#define omp_get_num_procs() (system("cat /proc/cpuinfo | grep 'processor' | wc -l"))
#endif

// Size of vectors.
#ifndef N
#define N 8
#endif

int main() {
  int i;

  printf("Antes das regiões paralelas.\n");

  // Laços combinados com regiões paralelas.

  #pragma omp parallel for schedule(dynamic)
  for (i = 0; i < N; i++) {
    printf("loop: 1, thread: %lu, iteration: %d\n", omp_get_thread_num(), i);
  }

  #pragma omp parallel for schedule(runtime)
  for (i = 0; i < N; i++) {
    printf("loop: 1, thread: %lu, iteration: %d\n", omp_get_thread_num(), i);
  }

  #pragma omp parallel for schedule(static,32)
  for (i = 0; i < N; i++) {
    printf("loop: 1, thread: %lu, iteration: %d\n", omp_get_thread_num(), i);
  }

  // Mesmos laços dentro de uma única região paralela.

  #pragma omp parallel
  {
    #pragma omp for schedule(dynamic)
    for (i = 0; i < N; i++) {
      printf("loop: 2, thread: %lu, iteration: %d\n", omp_get_thread_num(), i);
    }

    #pragma omp for schedule(runtime)
    for (i = 0; i < N; i++) {
      printf("loop: 2, thread: %lu, iteration: %d\n", omp_get_thread_num(), i);
    }

    #pragma omp for schedule(static)
    for (i = 0; i < N; i++) {
      printf("loop: 2, thread: %lu, iteration: %d\n", omp_get_thread_num(), i);
    }

  }

  printf("Fora das regiões paralelas.\n");

  return 0;
}
