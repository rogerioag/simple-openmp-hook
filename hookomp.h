#ifndef hookomp_h__
#define hookomp_h__

#include <dlfcn.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <pthread.h>
#include "debug.h"
#include "prepostdef.h"

#ifdef __cplusplus
extern "C" {
#endif

#define GET_RUNTIME_FUNCTION(hook_func_pointer, func_name) \
  do { \
    if (hook_func_pointer) break; \
    void *__handle = RTLD_NEXT; \
    hook_func_pointer = (typeof(hook_func_pointer)) (uintptr_t) dlsym(__handle, func_name); \
  } while(0)

/* Ponteiros de função da libgomp */
extern void (*lib_GOMP_barrier) (void);
extern bool (*lib_GOMP_barrier_cancel) (void);
extern void (*lib_GOMP_critical_start) (void);
extern void (*lib_GOMP_critical_end) (void);
extern void (*lib_GOMP_critical_name_start) (void **);
extern void (*lib_GOMP_critical_name_end) (void **);
extern void (*lib_GOMP_atomic_start) (void);
extern void (*lib_GOMP_atomic_end) (void);
extern bool (*lib_GOMP_loop_static_start) (long, long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_dynamic_start) (long, long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_guided_start) (long, long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_runtime_start) (long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_nonmonotonic_dynamic_start) (long, long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_nonmonotonic_guided_start) (long, long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_nonmonotonic_runtime_start) (long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_maybe_nonmonotonic_runtime_start) (long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_start) (long, long, long, long, long, long *, long *, uintptr_t *, void **);
extern bool (*lib_GOMP_loop_ordered_static_start) (long, long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_ordered_dynamic_start) (long, long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_ordered_guided_start) (long, long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_ordered_runtime_start) (long, long, long, long *, long *);
extern bool (*lib_GOMP_loop_ordered_start) (long, long, long, long, long, long *, long *, uintptr_t *, void **);
extern bool (*lib_GOMP_loop_static_next) (long *, long *);
extern bool (*lib_GOMP_loop_dynamic_next) (long *, long *);
extern bool (*lib_GOMP_loop_guided_next) (long *, long *);
extern bool (*lib_GOMP_loop_runtime_next) (long *, long *);
extern bool (*lib_GOMP_loop_nonmonotonic_dynamic_next) (long *, long *);
extern bool (*lib_GOMP_loop_nonmonotonic_guided_next) (long *, long *);
extern bool (*lib_GOMP_loop_nonmonotonic_runtime_next) (long *, long *);
extern bool (*lib_GOMP_loop_maybe_nonmonotonic_runtime_next) (long *, long *);
extern bool (*lib_GOMP_loop_ordered_static_next) (long *, long *);
extern bool (*lib_GOMP_loop_ordered_dynamic_next) (long *, long *);
extern bool (*lib_GOMP_loop_ordered_guided_next) (long *, long *);
extern bool (*lib_GOMP_loop_ordered_runtime_next) (long *, long *);
extern bool (*lib_GOMP_loop_doacross_static_start) (unsigned, long *, long, long *, long *);
extern bool (*lib_GOMP_loop_doacross_dynamic_start) (unsigned, long *, long, long *, long *);
extern bool (*lib_GOMP_loop_doacross_guided_start) (unsigned, long *, long, long *, long *);
extern bool (*lib_GOMP_loop_doacross_runtime_start) (unsigned, long *, long *, long *);
extern bool (*lib_GOMP_loop_doacross_start) (unsigned, long *, long, long, long *, long *, uintptr_t *, void **);
extern void (*lib_GOMP_parallel_loop_static_start) (void (*)(void *), void *, unsigned, long, long, long, long);
extern void (*lib_GOMP_parallel_loop_dynamic_start) (void (*)(void *), void *, unsigned, long, long, long, long);
extern void (*lib_GOMP_parallel_loop_guided_start) (void (*)(void *), void *, unsigned, long, long, long, long);
extern void (*lib_GOMP_parallel_loop_runtime_start) (void (*)(void *), void *, unsigned, long, long, long);
extern void (*lib_GOMP_parallel_loop_static) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned);
extern void (*lib_GOMP_parallel_loop_dynamic) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned);
extern void (*lib_GOMP_parallel_loop_guided) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned);
extern void (*lib_GOMP_parallel_loop_runtime) (void (*)(void *), void *, unsigned, long, long, long, unsigned);
extern void (*lib_GOMP_parallel_loop_nonmonotonic_dynamic) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned);
extern void (*lib_GOMP_parallel_loop_nonmonotonic_guided) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned);
extern void (*lib_GOMP_parallel_loop_nonmonotonic_runtime) (void (*)(void *), void *, unsigned, long, long, long, unsigned);
extern void (*lib_GOMP_parallel_loop_maybe_nonmonotonic_runtime) (void (*)(void *), void *, unsigned, long, long, long, unsigned);
extern void (*lib_GOMP_loop_end) (void);
extern void (*lib_GOMP_loop_end_nowait) (void);
extern bool (*lib_GOMP_loop_end_cancel) (void);
extern bool (*lib_GOMP_loop_ull_static_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_dynamic_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_guided_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_runtime_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_nonmonotonic_dynamic_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_nonmonotonic_guided_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_nonmonotonic_runtime_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_maybe_nonmonotonic_runtime_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_start) (bool, unsigned long long, unsigned long long, unsigned long long, long, unsigned long long, unsigned long long *, unsigned long long *, uintptr_t *, void **);
extern bool (*lib_GOMP_loop_ull_ordered_static_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_ordered_dynamic_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_ordered_guided_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_ordered_runtime_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_ordered_start) (bool, unsigned long long, unsigned long long, unsigned long long, long, unsigned long long, unsigned long long *, unsigned long long *, uintptr_t *, void **);
extern bool (*lib_GOMP_loop_ull_static_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_dynamic_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_guided_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_runtime_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_nonmonotonic_dynamic_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_nonmonotonic_guided_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_nonmonotonic_runtime_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_maybe_nonmonotonic_runtime_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_ordered_static_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_ordered_dynamic_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_ordered_guided_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_ordered_runtime_next) (unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_doacross_static_start) (unsigned, unsigned long long *, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_doacross_dynamic_start) (unsigned, unsigned long long *, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_doacross_guided_start) (unsigned, unsigned long long *, unsigned long long, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_doacross_runtime_start) (unsigned, unsigned long long *, unsigned long long *, unsigned long long *);
extern bool (*lib_GOMP_loop_ull_doacross_start) (unsigned, unsigned long long *, long, unsigned long long, unsigned long long *, unsigned long long *, uintptr_t *, void **);
extern void (*lib_GOMP_ordered_start) (void);
extern void (*lib_GOMP_ordered_end) (void);
extern void (*lib_GOMP_doacross_post) (long *);
extern void (*lib_GOMP_doacross_wait) (long, ...);
extern void (*lib_GOMP_doacross_ull_post) (unsigned long long *);
extern void (*lib_GOMP_doacross_ull_wait) (unsigned long long, ...);
extern void (*lib_GOMP_parallel_start) (void (*) (void *), void *, unsigned);
extern void (*lib_GOMP_parallel_end) (void);
extern void (*lib_GOMP_parallel) (void (*) (void *), void *, unsigned, unsigned);
extern unsigned (*lib_GOMP_parallel_reductions) (void (*) (void *), void *, unsigned, unsigned);
extern bool (*lib_GOMP_cancel) (int, bool);
extern bool (*lib_GOMP_cancellation_point) (int);
extern void (*lib_GOMP_task) (void (*) (void *), void *, void (*) (void *, void *), long, long, bool, unsigned, void **, int, void *);
extern void (*lib_GOMP_taskloop) (void (*) (void *), void *, void (*) (void *, void *), long, long, unsigned, unsigned long, int, long, long, long);
extern void (*lib_GOMP_taskloop_ull) (void (*) (void *), void *, void (*) (void *, void *), long, long, unsigned, unsigned long, int, unsigned long long, unsigned long long, unsigned long long);
extern void (*lib_GOMP_taskwait) (void);
extern void (*lib_GOMP_taskwait_depend) (void **);
extern void (*lib_GOMP_taskyield) (void);
extern void (*lib_GOMP_taskgroup_start) (void);
extern void (*lib_GOMP_taskgroup_end) (void);
extern void (*lib_GOMP_taskgroup_reduction_register) (uintptr_t *);
extern void (*lib_GOMP_taskgroup_reduction_unregister) (uintptr_t *);
extern void (*lib_GOMP_task_reduction_remap) (size_t, size_t, void **);
extern void (*lib_GOMP_workshare_task_reduction_unregister) (bool);
extern unsigned (*lib_GOMP_sections_start) (unsigned);
extern unsigned (*lib_GOMP_sections2_start) (unsigned, uintptr_t *, void **);
extern unsigned (*lib_GOMP_sections_next) (void);
extern void (*lib_GOMP_parallel_sections_start) (void (*) (void *), void *, unsigned, unsigned);
extern void (*lib_GOMP_parallel_sections) (void (*) (void *), void *, unsigned, unsigned, unsigned);
extern void (*lib_GOMP_sections_end) (void);
extern void (*lib_GOMP_sections_end_nowait) (void);
extern bool (*lib_GOMP_sections_end_cancel) (void);
extern bool (*lib_GOMP_single_start) (void);
extern void (*lib_GOMP_single_copy_end) (void *);
extern void (*lib_GOMP_scope_start) (uintptr_t *);
extern void (*lib_GOMP_target) (int, void (*) (void *), const void *, size_t, void **, size_t *, unsigned char *);
extern void (*lib_GOMP_target_ext) (int, void (*) (void *), size_t, void **, size_t *, unsigned short *, unsigned int, void **, void **);
extern void (*lib_GOMP_target_data) (int, const void *, size_t, void **, size_t *, unsigned char *);
extern void (*lib_GOMP_target_data_ext) (int, size_t, void **, size_t *, unsigned short *);
extern void (*lib_GOMP_target_end_data) (void);
extern void (*lib_GOMP_target_update) (int, const void *, size_t, void **, size_t *, unsigned char *);
extern void (*lib_GOMP_target_update_ext) (int, size_t, void **, size_t *, unsigned short *, unsigned int, void **);
extern void (*lib_GOMP_target_enter_exit_data) (int, size_t, void **, size_t *, unsigned short *, unsigned int, void **);
extern void (*lib_GOMP_teams) (unsigned int, unsigned int);
extern bool (*lib_GOMP_teams4) (unsigned int, unsigned int, unsigned int, bool);
extern void (*lib_GOMP_teams_reg) (void (*) (void *), void *, unsigned, unsigned, unsigned);
extern void (*lib_GOMP_free) (void *, uintptr_t);
extern void (*lib_GOMP_warning) (const char *, size_t);
extern void (*lib_GOMP_error) (const char *, size_t);

#ifdef __cplusplus
}
#endif

#endif /* hookomp_h__ */