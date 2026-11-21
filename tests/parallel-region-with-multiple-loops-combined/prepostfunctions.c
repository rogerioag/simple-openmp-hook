#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

/*
 * [parallel-region-with-multiple-loops-combined]$ cat parallel-region-with-multiple-loops-combined.s | grep GOMP_
call    GOMP_parallel_loop_nonmonotonic_dynamic@PLT
call    GOMP_parallel_loop_maybe_nonmonotonic_runtime@PLT
call    GOMP_parallel@PLT
call    GOMP_parallel@PLT
call    GOMP_loop_nonmonotonic_dynamic_next@PLT
call    GOMP_loop_nonmonotonic_dynamic_next@PLT
call    GOMP_loop_end_nowait@PLT
call    GOMP_loop_maybe_nonmonotonic_runtime_next@PLT
call    GOMP_loop_maybe_nonmonotonic_runtime_next@PLT
call    GOMP_loop_end_nowait@PLT
call    GOMP_loop_nonmonotonic_dynamic_start@PLT
call    GOMP_loop_nonmonotonic_dynamic_next@PLT
call    GOMP_loop_end@PLT
call    GOMP_loop_maybe_nonmonotonic_runtime_start@PLT
call    GOMP_loop_maybe_nonmonotonic_runtime_next@PLT
call    GOMP_loop_end@PLT
[parallel-region-with-multiple-loops-combined]$
*/


int num_parallel_regions = 0;

int num_loop_dynamic_start = 0;

int num_loop_dynamic_next = 0;

int num_loop_runtime_start = 0;

int num_loop_runtime_next = 0;




void print_results(){
	printf("Number of parallel regions: %d\n", num_parallel_regions);
	printf("Number of loops with schedule(dynamic): %d\n", num_loop_dynamic_start);
	printf("Number of loop dynamic next: %d\n", num_loop_dynamic_next);
}

void PRE_GOMP_parallel (void){
	PRINT_FUNC_NAME;
	num_parallel_regions++;
}

void POST_GOMP_parallel (void){
	PRINT_FUNC_NAME;
	print_results();
}

void PRE_GOMP_parallel_start (void){
	PRINT_FUNC_NAME;
	num_parallel_regions++;
}

void PRE_GOMP_parallel_end (void){
	PRINT_FUNC_NAME;
}

void POST_GOMP_parallel_start (void){
	PRINT_FUNC_NAME;
}

void POST_GOMP_parallel_end (void){
	PRINT_FUNC_NAME;
	
	print_results();
}

void PRE_GOMP_loop_dynamic_start(){
	PRINT_FUNC_NAME;
	num_loop_dynamic_start++;
}

void POST_GOMP_loop_dynamic_start(){
	PRINT_FUNC_NAME;
}

void PRE_GOMP_loop_dynamic_next(){
	PRINT_FUNC_NAME;
	num_loop_dynamic_next++;
}

void POST_GOMP_loop_dynamic_next(long istart, long iend){
	PRINT_FUNC_NAME;
	printf("%d, %d\n", istart, iend);
}
