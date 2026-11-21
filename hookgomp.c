#include "hookgomp.h"

#ifdef __cplusplus
extern "C" {
#endif

void (*lib_GOMP_barrier) (void) = NULL;
bool (*lib_GOMP_barrier_cancel) (void) = NULL;
void (*lib_GOMP_critical_start) (void) = NULL;
void (*lib_GOMP_critical_end) (void) = NULL;
void (*lib_GOMP_critical_name_start) (void **) = NULL;
void (*lib_GOMP_critical_name_end) (void **) = NULL;
void (*lib_GOMP_atomic_start) (void) = NULL;
void (*lib_GOMP_atomic_end) (void) = NULL;
bool (*lib_GOMP_loop_static_start) (long, long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_dynamic_start) (long, long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_guided_start) (long, long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_runtime_start) (long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_nonmonotonic_dynamic_start) (long, long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_nonmonotonic_guided_start) (long, long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_nonmonotonic_runtime_start) (long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_maybe_nonmonotonic_runtime_start) (long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_start) (long, long, long, long, long, long *, long *, uintptr_t *, void **) = NULL;
bool (*lib_GOMP_loop_ordered_static_start) (long, long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_ordered_dynamic_start) (long, long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_ordered_guided_start) (long, long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_ordered_runtime_start) (long, long, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_ordered_start) (long, long, long, long, long, long *, long *, uintptr_t *, void **) = NULL;
bool (*lib_GOMP_loop_static_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_dynamic_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_guided_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_runtime_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_nonmonotonic_dynamic_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_nonmonotonic_guided_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_nonmonotonic_runtime_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_maybe_nonmonotonic_runtime_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_ordered_static_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_ordered_dynamic_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_ordered_guided_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_ordered_runtime_next) (long *, long *) = NULL;
bool (*lib_GOMP_loop_doacross_static_start) (unsigned, long *, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_doacross_dynamic_start) (unsigned, long *, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_doacross_guided_start) (unsigned, long *, long, long *, long *) = NULL;
bool (*lib_GOMP_loop_doacross_runtime_start) (unsigned, long *, long *, long *) = NULL;
bool (*lib_GOMP_loop_doacross_start) (unsigned, long *, long, long, long *, long *, uintptr_t *, void **) = NULL;
void (*lib_GOMP_parallel_loop_static_start) (void (*)(void *), void *, unsigned, long, long, long, long) = NULL;
void (*lib_GOMP_parallel_loop_dynamic_start) (void (*)(void *), void *, unsigned, long, long, long, long) = NULL;
void (*lib_GOMP_parallel_loop_guided_start) (void (*)(void *), void *, unsigned, long, long, long, long) = NULL;
void (*lib_GOMP_parallel_loop_runtime_start) (void (*)(void *), void *, unsigned, long, long, long) = NULL;
void (*lib_GOMP_parallel_loop_static) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned) = NULL;
void (*lib_GOMP_parallel_loop_dynamic) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned) = NULL;
void (*lib_GOMP_parallel_loop_guided) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned) = NULL;
void (*lib_GOMP_parallel_loop_runtime) (void (*)(void *), void *, unsigned, long, long, long, unsigned) = NULL;
void (*lib_GOMP_parallel_loop_nonmonotonic_dynamic) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned) = NULL;
void (*lib_GOMP_parallel_loop_nonmonotonic_guided) (void (*)(void *), void *, unsigned, long, long, long, long, unsigned) = NULL;
void (*lib_GOMP_parallel_loop_nonmonotonic_runtime) (void (*)(void *), void *, unsigned, long, long, long, unsigned) = NULL;
void (*lib_GOMP_parallel_loop_maybe_nonmonotonic_runtime) (void (*)(void *), void *, unsigned, long, long, long, unsigned) = NULL;
void (*lib_GOMP_loop_end) (void) = NULL;
void (*lib_GOMP_loop_end_nowait) (void) = NULL;
bool (*lib_GOMP_loop_end_cancel) (void) = NULL;
bool (*lib_GOMP_loop_ull_static_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_dynamic_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_guided_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_runtime_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_nonmonotonic_dynamic_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_nonmonotonic_guided_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_nonmonotonic_runtime_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_maybe_nonmonotonic_runtime_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_start) (bool, unsigned long long, unsigned long long, unsigned long long, long, unsigned long long, unsigned long long *, unsigned long long *, uintptr_t *, void **) = NULL;
bool (*lib_GOMP_loop_ull_ordered_static_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_ordered_dynamic_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_ordered_guided_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_ordered_runtime_start) (bool, unsigned long long, unsigned long long, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_ordered_start) (bool, unsigned long long, unsigned long long, unsigned long long, long, unsigned long long, unsigned long long *, unsigned long long *, uintptr_t *, void **) = NULL;
bool (*lib_GOMP_loop_ull_static_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_dynamic_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_guided_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_runtime_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_nonmonotonic_dynamic_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_nonmonotonic_guided_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_nonmonotonic_runtime_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_maybe_nonmonotonic_runtime_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_ordered_static_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_ordered_dynamic_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_ordered_guided_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_ordered_runtime_next) (unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_doacross_static_start) (unsigned, unsigned long long *, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_doacross_dynamic_start) (unsigned, unsigned long long *, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_doacross_guided_start) (unsigned, unsigned long long *, unsigned long long, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_doacross_runtime_start) (unsigned, unsigned long long *, unsigned long long *, unsigned long long *) = NULL;
bool (*lib_GOMP_loop_ull_doacross_start) (unsigned, unsigned long long *, long, unsigned long long, unsigned long long *, unsigned long long *, uintptr_t *, void **) = NULL;
void (*lib_GOMP_ordered_start) (void) = NULL;
void (*lib_GOMP_ordered_end) (void) = NULL;
void (*lib_GOMP_doacross_post) (long *) = NULL;
void (*lib_GOMP_doacross_wait) (long, ...) = NULL;
void (*lib_GOMP_doacross_ull_post) (unsigned long long *) = NULL;
void (*lib_GOMP_doacross_ull_wait) (unsigned long long, ...) = NULL;
void (*lib_GOMP_parallel_start) (void (*) (void *), void *, unsigned) = NULL;
void (*lib_GOMP_parallel_end) (void) = NULL;
void (*lib_GOMP_parallel) (void (*) (void *), void *, unsigned, unsigned) = NULL;
unsigned (*lib_GOMP_parallel_reductions) (void (*) (void *), void *, unsigned, unsigned) = NULL;
bool (*lib_GOMP_cancel) (int, bool) = NULL;
bool (*lib_GOMP_cancellation_point) (int) = NULL;
void (*lib_GOMP_task) (void (*) (void *), void *, void (*) (void *, void *), long, long, bool, unsigned, void **, int, void *) = NULL;
void (*lib_GOMP_taskloop) (void (*) (void *), void *, void (*) (void *, void *), long, long, unsigned, unsigned long, int, long, long, long) = NULL;
void (*lib_GOMP_taskloop_ull) (void (*) (void *), void *, void (*) (void *, void *), long, long, unsigned, unsigned long, int, unsigned long long, unsigned long long, unsigned long long) = NULL;
void (*lib_GOMP_taskwait) (void) = NULL;
void (*lib_GOMP_taskwait_depend) (void **) = NULL;
void (*lib_GOMP_taskwait_depend_nowait) (void **) = NULL;
void (*lib_GOMP_taskyield) (void) = NULL;
void (*lib_GOMP_taskgroup_start) (void) = NULL;
void (*lib_GOMP_taskgroup_end) (void) = NULL;
void (*lib_GOMP_taskgroup_reduction_register) (uintptr_t *) = NULL;
void (*lib_GOMP_taskgroup_reduction_unregister) (uintptr_t *) = NULL;
void (*lib_GOMP_task_reduction_remap) (size_t, size_t, void **) = NULL;
void (*lib_GOMP_workshare_task_reduction_unregister) (bool) = NULL;
unsigned (*lib_GOMP_sections_start) (unsigned) = NULL;
unsigned (*lib_GOMP_sections2_start) (unsigned, uintptr_t *, void **) = NULL;
unsigned (*lib_GOMP_sections_next) (void) = NULL;
void (*lib_GOMP_parallel_sections_start) (void (*) (void *), void *, unsigned, unsigned) = NULL;
void (*lib_GOMP_parallel_sections) (void (*) (void *), void *, unsigned, unsigned, unsigned) = NULL;
void (*lib_GOMP_sections_end) (void) = NULL;
void (*lib_GOMP_sections_end_nowait) (void) = NULL;
bool (*lib_GOMP_sections_end_cancel) (void) = NULL;
bool (*lib_GOMP_single_start) (void) = NULL;
void (*lib_GOMP_single_copy_end) (void *) = NULL;
void (*lib_GOMP_scope_start) (uintptr_t *) = NULL;
void (*lib_GOMP_target) (int, void (*) (void *), const void *, size_t, void **, size_t *, unsigned char *) = NULL;
void (*lib_GOMP_target_ext) (int, void (*) (void *), size_t, void **, size_t *, unsigned short *, unsigned int, void **, void **) = NULL;
void (*lib_GOMP_target_data) (int, const void *, size_t, void **, size_t *, unsigned char *) = NULL;
void (*lib_GOMP_target_data_ext) (int, size_t, void **, size_t *, unsigned short *) = NULL;
void (*lib_GOMP_target_end_data) (void) = NULL;
void (*lib_GOMP_target_update) (int, const void *, size_t, void **, size_t *, unsigned char *) = NULL;
void (*lib_GOMP_target_update_ext) (int, size_t, void **, size_t *, unsigned short *, unsigned int, void **) = NULL;
void (*lib_GOMP_target_enter_exit_data) (int, size_t, void **, size_t *, unsigned short *, unsigned int, void **) = NULL;
void (*lib_GOMP_teams) (unsigned int, unsigned int) = NULL;
bool (*lib_GOMP_teams4) (unsigned int, unsigned int, unsigned int, bool) = NULL;
void (*lib_GOMP_interop) (int, int, struct interop_obj_t ***, const int *, const char **, int, struct interop_obj_t **, int, struct interop_obj_t ***, unsigned, void **) = NULL;
void (*lib_GOMP_teams_reg) (void (*) (void *), void *, unsigned, unsigned, unsigned) = NULL;
void (*lib_GOMP_add_alloc) (void *) = NULL;
bool (*lib_GOMP_is_alloc) (void *) = NULL;
void (*lib_GOMP_free) (void *, uintptr_t) = NULL;
void (*lib_GOMP_warning) (const char *, size_t) = NULL;
void (*lib_GOMP_error) (const char *, size_t) = NULL;

/* Default Weak Callbacks */
void __attribute__((weak)) PRE_GOMP_barrier(void) {}
void __attribute__((weak)) POST_GOMP_barrier(void) {}
void __attribute__((weak)) PRE_GOMP_barrier_cancel(void) {}
void __attribute__((weak)) POST_GOMP_barrier_cancel(void) {}
void __attribute__((weak)) PRE_GOMP_critical_start(void) {}
void __attribute__((weak)) POST_GOMP_critical_start(void) {}
void __attribute__((weak)) PRE_GOMP_critical_end(void) {}
void __attribute__((weak)) POST_GOMP_critical_end(void) {}
void __attribute__((weak)) PRE_GOMP_critical_name_start(void) {}
void __attribute__((weak)) POST_GOMP_critical_name_start(void) {}
void __attribute__((weak)) PRE_GOMP_critical_name_end(void) {}
void __attribute__((weak)) POST_GOMP_critical_name_end(void) {}
void __attribute__((weak)) PRE_GOMP_atomic_start(void) {}
void __attribute__((weak)) POST_GOMP_atomic_start(void) {}
void __attribute__((weak)) PRE_GOMP_atomic_end(void) {}
void __attribute__((weak)) POST_GOMP_atomic_end(void) {}
void __attribute__((weak)) PRE_GOMP_loop_static_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_static_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_nonmonotonic_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_nonmonotonic_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_nonmonotonic_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_nonmonotonic_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_nonmonotonic_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_nonmonotonic_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_maybe_nonmonotonic_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_maybe_nonmonotonic_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_static_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_static_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_static_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_static_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_dynamic_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_dynamic_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_guided_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_guided_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_runtime_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_runtime_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_nonmonotonic_dynamic_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_nonmonotonic_dynamic_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_nonmonotonic_guided_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_nonmonotonic_guided_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_nonmonotonic_runtime_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_nonmonotonic_runtime_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_maybe_nonmonotonic_runtime_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_maybe_nonmonotonic_runtime_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_static_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_static_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_dynamic_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_dynamic_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_guided_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_guided_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ordered_runtime_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ordered_runtime_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_doacross_static_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_doacross_static_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_doacross_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_doacross_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_doacross_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_doacross_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_doacross_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_doacross_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_doacross_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_doacross_start(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_static_start(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_static_start(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_static(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_static(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_dynamic(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_dynamic(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_guided(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_guided(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_runtime(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_runtime(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_nonmonotonic_dynamic(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_nonmonotonic_dynamic(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_nonmonotonic_guided(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_nonmonotonic_guided(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_nonmonotonic_runtime(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_nonmonotonic_runtime(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_loop_maybe_nonmonotonic_runtime(void) {}
void __attribute__((weak)) POST_GOMP_parallel_loop_maybe_nonmonotonic_runtime(void) {}
void __attribute__((weak)) PRE_GOMP_loop_end(void) {}
void __attribute__((weak)) POST_GOMP_loop_end(void) {}
void __attribute__((weak)) PRE_GOMP_loop_end_nowait(void) {}
void __attribute__((weak)) POST_GOMP_loop_end_nowait(void) {}
void __attribute__((weak)) PRE_GOMP_loop_end_cancel(void) {}
void __attribute__((weak)) POST_GOMP_loop_end_cancel(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_static_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_static_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_nonmonotonic_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_nonmonotonic_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_nonmonotonic_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_nonmonotonic_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_nonmonotonic_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_nonmonotonic_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_maybe_nonmonotonic_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_maybe_nonmonotonic_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_static_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_static_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_static_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_static_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_dynamic_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_dynamic_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_guided_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_guided_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_runtime_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_runtime_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_nonmonotonic_dynamic_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_nonmonotonic_dynamic_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_nonmonotonic_guided_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_nonmonotonic_guided_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_nonmonotonic_runtime_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_nonmonotonic_runtime_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_maybe_nonmonotonic_runtime_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_maybe_nonmonotonic_runtime_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_static_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_static_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_dynamic_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_dynamic_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_guided_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_guided_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_ordered_runtime_next(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_ordered_runtime_next(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_doacross_static_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_doacross_static_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_doacross_dynamic_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_doacross_dynamic_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_doacross_guided_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_doacross_guided_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_doacross_runtime_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_doacross_runtime_start(void) {}
void __attribute__((weak)) PRE_GOMP_loop_ull_doacross_start(void) {}
void __attribute__((weak)) POST_GOMP_loop_ull_doacross_start(void) {}
void __attribute__((weak)) PRE_GOMP_ordered_start(void) {}
void __attribute__((weak)) POST_GOMP_ordered_start(void) {}
void __attribute__((weak)) PRE_GOMP_ordered_end(void) {}
void __attribute__((weak)) POST_GOMP_ordered_end(void) {}
void __attribute__((weak)) PRE_GOMP_doacross_post(void) {}
void __attribute__((weak)) POST_GOMP_doacross_post(void) {}
void __attribute__((weak)) PRE_GOMP_doacross_wait(void) {}
void __attribute__((weak)) POST_GOMP_doacross_wait(void) {}
void __attribute__((weak)) PRE_GOMP_doacross_ull_post(void) {}
void __attribute__((weak)) POST_GOMP_doacross_ull_post(void) {}
void __attribute__((weak)) PRE_GOMP_doacross_ull_wait(void) {}
void __attribute__((weak)) POST_GOMP_doacross_ull_wait(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_start(void) {}
void __attribute__((weak)) POST_GOMP_parallel_start(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_end(void) {}
void __attribute__((weak)) POST_GOMP_parallel_end(void) {}
void __attribute__((weak)) PRE_GOMP_parallel(void) {}
void __attribute__((weak)) POST_GOMP_parallel(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_reductions(void) {}
void __attribute__((weak)) POST_GOMP_parallel_reductions(void) {}
void __attribute__((weak)) PRE_GOMP_cancel(void) {}
void __attribute__((weak)) POST_GOMP_cancel(void) {}
void __attribute__((weak)) PRE_GOMP_cancellation_point(void) {}
void __attribute__((weak)) POST_GOMP_cancellation_point(void) {}
void __attribute__((weak)) PRE_GOMP_task(void) {}
void __attribute__((weak)) POST_GOMP_task(void) {}
void __attribute__((weak)) PRE_GOMP_taskloop(void) {}
void __attribute__((weak)) POST_GOMP_taskloop(void) {}
void __attribute__((weak)) PRE_GOMP_taskloop_ull(void) {}
void __attribute__((weak)) POST_GOMP_taskloop_ull(void) {}
void __attribute__((weak)) PRE_GOMP_taskwait(void) {}
void __attribute__((weak)) POST_GOMP_taskwait(void) {}
void __attribute__((weak)) PRE_GOMP_taskwait_depend(void) {}
void __attribute__((weak)) POST_GOMP_taskwait_depend(void) {}
void __attribute__((weak)) PRE_GOMP_taskwait_depend_nowait(void) {}
void __attribute__((weak)) POST_GOMP_taskwait_depend_nowait(void) {}
void __attribute__((weak)) PRE_GOMP_taskyield(void) {}
void __attribute__((weak)) POST_GOMP_taskyield(void) {}
void __attribute__((weak)) PRE_GOMP_taskgroup_start(void) {}
void __attribute__((weak)) POST_GOMP_taskgroup_start(void) {}
void __attribute__((weak)) PRE_GOMP_taskgroup_end(void) {}
void __attribute__((weak)) POST_GOMP_taskgroup_end(void) {}
void __attribute__((weak)) PRE_GOMP_taskgroup_reduction_register(void) {}
void __attribute__((weak)) POST_GOMP_taskgroup_reduction_register(void) {}
void __attribute__((weak)) PRE_GOMP_taskgroup_reduction_unregister(void) {}
void __attribute__((weak)) POST_GOMP_taskgroup_reduction_unregister(void) {}
void __attribute__((weak)) PRE_GOMP_task_reduction_remap(void) {}
void __attribute__((weak)) POST_GOMP_task_reduction_remap(void) {}
void __attribute__((weak)) PRE_GOMP_workshare_task_reduction_unregister(void) {}
void __attribute__((weak)) POST_GOMP_workshare_task_reduction_unregister(void) {}
void __attribute__((weak)) PRE_GOMP_sections_start(void) {}
void __attribute__((weak)) POST_GOMP_sections_start(void) {}
void __attribute__((weak)) PRE_GOMP_sections2_start(void) {}
void __attribute__((weak)) POST_GOMP_sections2_start(void) {}
void __attribute__((weak)) PRE_GOMP_sections_next(void) {}
void __attribute__((weak)) POST_GOMP_sections_next(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_sections_start(void) {}
void __attribute__((weak)) POST_GOMP_parallel_sections_start(void) {}
void __attribute__((weak)) PRE_GOMP_parallel_sections(void) {}
void __attribute__((weak)) POST_GOMP_parallel_sections(void) {}
void __attribute__((weak)) PRE_GOMP_sections_end(void) {}
void __attribute__((weak)) POST_GOMP_sections_end(void) {}
void __attribute__((weak)) PRE_GOMP_sections_end_nowait(void) {}
void __attribute__((weak)) POST_GOMP_sections_end_nowait(void) {}
void __attribute__((weak)) PRE_GOMP_sections_end_cancel(void) {}
void __attribute__((weak)) POST_GOMP_sections_end_cancel(void) {}
void __attribute__((weak)) PRE_GOMP_single_start(void) {}
void __attribute__((weak)) POST_GOMP_single_start(void) {}
void __attribute__((weak)) PRE_GOMP_single_copy_end(void) {}
void __attribute__((weak)) POST_GOMP_single_copy_end(void) {}
void __attribute__((weak)) PRE_GOMP_scope_start(void) {}
void __attribute__((weak)) POST_GOMP_scope_start(void) {}
void __attribute__((weak)) PRE_GOMP_target(void) {}
void __attribute__((weak)) POST_GOMP_target(void) {}
void __attribute__((weak)) PRE_GOMP_target_ext(void) {}
void __attribute__((weak)) POST_GOMP_target_ext(void) {}
void __attribute__((weak)) PRE_GOMP_target_data(void) {}
void __attribute__((weak)) POST_GOMP_target_data(void) {}
void __attribute__((weak)) PRE_GOMP_target_data_ext(void) {}
void __attribute__((weak)) POST_GOMP_target_data_ext(void) {}
void __attribute__((weak)) PRE_GOMP_target_end_data(void) {}
void __attribute__((weak)) POST_GOMP_target_end_data(void) {}
void __attribute__((weak)) PRE_GOMP_target_update(void) {}
void __attribute__((weak)) POST_GOMP_target_update(void) {}
void __attribute__((weak)) PRE_GOMP_target_update_ext(void) {}
void __attribute__((weak)) POST_GOMP_target_update_ext(void) {}
void __attribute__((weak)) PRE_GOMP_target_enter_exit_data(void) {}
void __attribute__((weak)) POST_GOMP_target_enter_exit_data(void) {}
void __attribute__((weak)) PRE_GOMP_teams(void) {}
void __attribute__((weak)) POST_GOMP_teams(void) {}
void __attribute__((weak)) PRE_GOMP_teams4(void) {}
void __attribute__((weak)) POST_GOMP_teams4(void) {}
void __attribute__((weak)) PRE_GOMP_interop(void) {}
void __attribute__((weak)) POST_GOMP_interop(void) {}
void __attribute__((weak)) PRE_GOMP_teams_reg(void) {}
void __attribute__((weak)) POST_GOMP_teams_reg(void) {}
void __attribute__((weak)) PRE_GOMP_add_alloc(void) {}
void __attribute__((weak)) POST_GOMP_add_alloc(void) {}
void __attribute__((weak)) PRE_GOMP_is_alloc(void) {}
void __attribute__((weak)) POST_GOMP_is_alloc(void) {}
void __attribute__((weak)) PRE_GOMP_free(void) {}
void __attribute__((weak)) POST_GOMP_free(void) {}
void __attribute__((weak)) PRE_GOMP_warning(void) {}
void __attribute__((weak)) POST_GOMP_warning(void) {}
void __attribute__((weak)) PRE_GOMP_error(void) {}
void __attribute__((weak)) POST_GOMP_error(void) {}

#ifdef HOOK_USE_LIBFFI
#include <ffi.h>
#endif
#include <stdlib.h>

/* Laços doacross com até HOOK_GOMP_SWITCH_MAX_ARGS dimensões usam o switch;
 * acima disso, libffi (HOOK_USE_LIBFFI) ou abort(). */
#define HOOK_GOMP_SWITCH_MAX_ARGS 32

/* ncounts do laço doacross atual desta thread (0 = nenhum). */
static __thread unsigned hook_gomp_doacross_ncounts = 0;

/* Encaminha values[0..n-1] (cada um com tamanho size e tipo ffi type_name)
 * para uma função variádica fn(first, ...). */
static void hook_gomp_forward_variadic(const char *name, void (*fn)(void), const char *type_name,
                                       size_t size, void *values, unsigned n) {
#ifdef HOOK_USE_LIBFFI
    ffi_type *t = type_name[0] == 'u' ? &ffi_type_uint64 : &ffi_type_slong;
    ffi_type *types[n];
    void *args[n];
    for (unsigned i = 0; i < n; i++) {
        types[i] = t;
        args[i] = (char *) values + i * size;   /* ffi_call recebe ponteiros para cada valor */
    }
    ffi_cif cif;
    if (ffi_prep_cif_var(&cif, FFI_DEFAULT_ABI, 1, n, &ffi_type_void, types) != FFI_OK) {
        fprintf(stderr, "hookgomp: ffi_prep_cif_var falhou em %s (n=%u)\n", name, n);
        abort();
    }
    ffi_call(&cif, fn, NULL, args);
#else
    (void) fn; (void) type_name; (void) size; (void) values;
    fprintf(stderr, "hookgomp: %s chamada com %u argumentos (máximo sem libffi: %d). "
                    "Recompile com USE_LIBFFI=1.\n", name, n, HOOK_GOMP_SWITCH_MAX_ARGS);
    abort();
#endif
}

/* Funções de Interceptação */

void GOMP_barrier () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_barrier, "GOMP_barrier");
    PRE_GOMP_barrier();
    lib_GOMP_barrier();
    POST_GOMP_barrier();
}

bool GOMP_barrier_cancel () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_barrier_cancel, "GOMP_barrier_cancel");
    PRE_GOMP_barrier_cancel();
    bool res = lib_GOMP_barrier_cancel();
    POST_GOMP_barrier_cancel();
    return res;
}

void GOMP_critical_start () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_critical_start, "GOMP_critical_start");
    PRE_GOMP_critical_start();
    lib_GOMP_critical_start();
    POST_GOMP_critical_start();
}

void GOMP_critical_end () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_critical_end, "GOMP_critical_end");
    PRE_GOMP_critical_end();
    lib_GOMP_critical_end();
    POST_GOMP_critical_end();
}

void GOMP_critical_name_start (void ** arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_critical_name_start, "GOMP_critical_name_start");
    PRE_GOMP_critical_name_start();
    lib_GOMP_critical_name_start(arg1);
    POST_GOMP_critical_name_start();
}

void GOMP_critical_name_end (void ** arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_critical_name_end, "GOMP_critical_name_end");
    PRE_GOMP_critical_name_end();
    lib_GOMP_critical_name_end(arg1);
    POST_GOMP_critical_name_end();
}

void GOMP_atomic_start () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_atomic_start, "GOMP_atomic_start");
    PRE_GOMP_atomic_start();
    lib_GOMP_atomic_start();
    POST_GOMP_atomic_start();
}

void GOMP_atomic_end () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_atomic_end, "GOMP_atomic_end");
    PRE_GOMP_atomic_end();
    lib_GOMP_atomic_end();
    POST_GOMP_atomic_end();
}

bool GOMP_loop_static_start (long arg1, long arg2, long arg3, long arg4, long * arg5, long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_static_start, "GOMP_loop_static_start");
    PRE_GOMP_loop_static_start();
    bool res = lib_GOMP_loop_static_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_static_start();
    return res;
}

bool GOMP_loop_dynamic_start (long arg1, long arg2, long arg3, long arg4, long * arg5, long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_dynamic_start, "GOMP_loop_dynamic_start");
    PRE_GOMP_loop_dynamic_start();
    bool res = lib_GOMP_loop_dynamic_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_dynamic_start();
    return res;
}

bool GOMP_loop_guided_start (long arg1, long arg2, long arg3, long arg4, long * arg5, long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_guided_start, "GOMP_loop_guided_start");
    PRE_GOMP_loop_guided_start();
    bool res = lib_GOMP_loop_guided_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_guided_start();
    return res;
}

bool GOMP_loop_runtime_start (long arg1, long arg2, long arg3, long * arg4, long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_runtime_start, "GOMP_loop_runtime_start");
    PRE_GOMP_loop_runtime_start();
    bool res = lib_GOMP_loop_runtime_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_runtime_start();
    return res;
}

bool GOMP_loop_nonmonotonic_dynamic_start (long arg1, long arg2, long arg3, long arg4, long * arg5, long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_nonmonotonic_dynamic_start, "GOMP_loop_nonmonotonic_dynamic_start");
    PRE_GOMP_loop_nonmonotonic_dynamic_start();
    bool res = lib_GOMP_loop_nonmonotonic_dynamic_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_nonmonotonic_dynamic_start();
    return res;
}

bool GOMP_loop_nonmonotonic_guided_start (long arg1, long arg2, long arg3, long arg4, long * arg5, long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_nonmonotonic_guided_start, "GOMP_loop_nonmonotonic_guided_start");
    PRE_GOMP_loop_nonmonotonic_guided_start();
    bool res = lib_GOMP_loop_nonmonotonic_guided_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_nonmonotonic_guided_start();
    return res;
}

bool GOMP_loop_nonmonotonic_runtime_start (long arg1, long arg2, long arg3, long * arg4, long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_nonmonotonic_runtime_start, "GOMP_loop_nonmonotonic_runtime_start");
    PRE_GOMP_loop_nonmonotonic_runtime_start();
    bool res = lib_GOMP_loop_nonmonotonic_runtime_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_nonmonotonic_runtime_start();
    return res;
}

bool GOMP_loop_maybe_nonmonotonic_runtime_start (long arg1, long arg2, long arg3, long * arg4, long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_maybe_nonmonotonic_runtime_start, "GOMP_loop_maybe_nonmonotonic_runtime_start");
    PRE_GOMP_loop_maybe_nonmonotonic_runtime_start();
    bool res = lib_GOMP_loop_maybe_nonmonotonic_runtime_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_maybe_nonmonotonic_runtime_start();
    return res;
}

bool GOMP_loop_start (long arg1, long arg2, long arg3, long arg4, long arg5, long * arg6, long * arg7, uintptr_t * arg8, void ** arg9) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_start, "GOMP_loop_start");
    PRE_GOMP_loop_start();
    bool res = lib_GOMP_loop_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    POST_GOMP_loop_start();
    return res;
}

bool GOMP_loop_ordered_static_start (long arg1, long arg2, long arg3, long arg4, long * arg5, long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_static_start, "GOMP_loop_ordered_static_start");
    PRE_GOMP_loop_ordered_static_start();
    bool res = lib_GOMP_loop_ordered_static_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_ordered_static_start();
    return res;
}

bool GOMP_loop_ordered_dynamic_start (long arg1, long arg2, long arg3, long arg4, long * arg5, long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_dynamic_start, "GOMP_loop_ordered_dynamic_start");
    PRE_GOMP_loop_ordered_dynamic_start();
    bool res = lib_GOMP_loop_ordered_dynamic_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_ordered_dynamic_start();
    return res;
}

bool GOMP_loop_ordered_guided_start (long arg1, long arg2, long arg3, long arg4, long * arg5, long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_guided_start, "GOMP_loop_ordered_guided_start");
    PRE_GOMP_loop_ordered_guided_start();
    bool res = lib_GOMP_loop_ordered_guided_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_ordered_guided_start();
    return res;
}

bool GOMP_loop_ordered_runtime_start (long arg1, long arg2, long arg3, long * arg4, long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_runtime_start, "GOMP_loop_ordered_runtime_start");
    PRE_GOMP_loop_ordered_runtime_start();
    bool res = lib_GOMP_loop_ordered_runtime_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_ordered_runtime_start();
    return res;
}

bool GOMP_loop_ordered_start (long arg1, long arg2, long arg3, long arg4, long arg5, long * arg6, long * arg7, uintptr_t * arg8, void ** arg9) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_start, "GOMP_loop_ordered_start");
    PRE_GOMP_loop_ordered_start();
    bool res = lib_GOMP_loop_ordered_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    POST_GOMP_loop_ordered_start();
    return res;
}

bool GOMP_loop_static_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_static_next, "GOMP_loop_static_next");
    PRE_GOMP_loop_static_next();
    bool res = lib_GOMP_loop_static_next(arg1, arg2);
    POST_GOMP_loop_static_next();
    return res;
}

bool GOMP_loop_dynamic_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_dynamic_next, "GOMP_loop_dynamic_next");
    PRE_GOMP_loop_dynamic_next();
    bool res = lib_GOMP_loop_dynamic_next(arg1, arg2);
    POST_GOMP_loop_dynamic_next();
    return res;
}

bool GOMP_loop_guided_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_guided_next, "GOMP_loop_guided_next");
    PRE_GOMP_loop_guided_next();
    bool res = lib_GOMP_loop_guided_next(arg1, arg2);
    POST_GOMP_loop_guided_next();
    return res;
}

bool GOMP_loop_runtime_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_runtime_next, "GOMP_loop_runtime_next");
    PRE_GOMP_loop_runtime_next();
    bool res = lib_GOMP_loop_runtime_next(arg1, arg2);
    POST_GOMP_loop_runtime_next();
    return res;
}

bool GOMP_loop_nonmonotonic_dynamic_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_nonmonotonic_dynamic_next, "GOMP_loop_nonmonotonic_dynamic_next");
    PRE_GOMP_loop_nonmonotonic_dynamic_next();
    bool res = lib_GOMP_loop_nonmonotonic_dynamic_next(arg1, arg2);
    POST_GOMP_loop_nonmonotonic_dynamic_next();
    return res;
}

bool GOMP_loop_nonmonotonic_guided_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_nonmonotonic_guided_next, "GOMP_loop_nonmonotonic_guided_next");
    PRE_GOMP_loop_nonmonotonic_guided_next();
    bool res = lib_GOMP_loop_nonmonotonic_guided_next(arg1, arg2);
    POST_GOMP_loop_nonmonotonic_guided_next();
    return res;
}

bool GOMP_loop_nonmonotonic_runtime_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_nonmonotonic_runtime_next, "GOMP_loop_nonmonotonic_runtime_next");
    PRE_GOMP_loop_nonmonotonic_runtime_next();
    bool res = lib_GOMP_loop_nonmonotonic_runtime_next(arg1, arg2);
    POST_GOMP_loop_nonmonotonic_runtime_next();
    return res;
}

bool GOMP_loop_maybe_nonmonotonic_runtime_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_maybe_nonmonotonic_runtime_next, "GOMP_loop_maybe_nonmonotonic_runtime_next");
    PRE_GOMP_loop_maybe_nonmonotonic_runtime_next();
    bool res = lib_GOMP_loop_maybe_nonmonotonic_runtime_next(arg1, arg2);
    POST_GOMP_loop_maybe_nonmonotonic_runtime_next();
    return res;
}

bool GOMP_loop_ordered_static_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_static_next, "GOMP_loop_ordered_static_next");
    PRE_GOMP_loop_ordered_static_next();
    bool res = lib_GOMP_loop_ordered_static_next(arg1, arg2);
    POST_GOMP_loop_ordered_static_next();
    return res;
}

bool GOMP_loop_ordered_dynamic_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_dynamic_next, "GOMP_loop_ordered_dynamic_next");
    PRE_GOMP_loop_ordered_dynamic_next();
    bool res = lib_GOMP_loop_ordered_dynamic_next(arg1, arg2);
    POST_GOMP_loop_ordered_dynamic_next();
    return res;
}

bool GOMP_loop_ordered_guided_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_guided_next, "GOMP_loop_ordered_guided_next");
    PRE_GOMP_loop_ordered_guided_next();
    bool res = lib_GOMP_loop_ordered_guided_next(arg1, arg2);
    POST_GOMP_loop_ordered_guided_next();
    return res;
}

bool GOMP_loop_ordered_runtime_next (long * arg1, long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ordered_runtime_next, "GOMP_loop_ordered_runtime_next");
    PRE_GOMP_loop_ordered_runtime_next();
    bool res = lib_GOMP_loop_ordered_runtime_next(arg1, arg2);
    POST_GOMP_loop_ordered_runtime_next();
    return res;
}

bool GOMP_loop_doacross_static_start (unsigned arg1, long * arg2, long arg3, long * arg4, long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_doacross_static_start, "GOMP_loop_doacross_static_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_doacross_static_start();
    bool res = lib_GOMP_loop_doacross_static_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_doacross_static_start();
    return res;
}

bool GOMP_loop_doacross_dynamic_start (unsigned arg1, long * arg2, long arg3, long * arg4, long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_doacross_dynamic_start, "GOMP_loop_doacross_dynamic_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_doacross_dynamic_start();
    bool res = lib_GOMP_loop_doacross_dynamic_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_doacross_dynamic_start();
    return res;
}

bool GOMP_loop_doacross_guided_start (unsigned arg1, long * arg2, long arg3, long * arg4, long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_doacross_guided_start, "GOMP_loop_doacross_guided_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_doacross_guided_start();
    bool res = lib_GOMP_loop_doacross_guided_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_doacross_guided_start();
    return res;
}

bool GOMP_loop_doacross_runtime_start (unsigned arg1, long * arg2, long * arg3, long * arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_doacross_runtime_start, "GOMP_loop_doacross_runtime_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_doacross_runtime_start();
    bool res = lib_GOMP_loop_doacross_runtime_start(arg1, arg2, arg3, arg4);
    POST_GOMP_loop_doacross_runtime_start();
    return res;
}

bool GOMP_loop_doacross_start (unsigned arg1, long * arg2, long arg3, long arg4, long * arg5, long * arg6, uintptr_t * arg7, void ** arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_doacross_start, "GOMP_loop_doacross_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_doacross_start();
    bool res = lib_GOMP_loop_doacross_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_GOMP_loop_doacross_start();
    return res;
}

void GOMP_parallel_loop_static_start (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, long arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_static_start, "GOMP_parallel_loop_static_start");
    PRE_GOMP_parallel_loop_static_start();
    lib_GOMP_parallel_loop_static_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_parallel_loop_static_start();
}

void GOMP_parallel_loop_dynamic_start (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, long arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_dynamic_start, "GOMP_parallel_loop_dynamic_start");
    PRE_GOMP_parallel_loop_dynamic_start();
    lib_GOMP_parallel_loop_dynamic_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_parallel_loop_dynamic_start();
}

void GOMP_parallel_loop_guided_start (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, long arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_guided_start, "GOMP_parallel_loop_guided_start");
    PRE_GOMP_parallel_loop_guided_start();
    lib_GOMP_parallel_loop_guided_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_parallel_loop_guided_start();
}

void GOMP_parallel_loop_runtime_start (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_runtime_start, "GOMP_parallel_loop_runtime_start");
    PRE_GOMP_parallel_loop_runtime_start();
    lib_GOMP_parallel_loop_runtime_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_parallel_loop_runtime_start();
}

void GOMP_parallel_loop_static (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, long arg7, unsigned arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_static, "GOMP_parallel_loop_static");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_loop_static();
    lib_GOMP_parallel_loop_static(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_loop_static();
}

void GOMP_parallel_loop_dynamic (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, long arg7, unsigned arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_dynamic, "GOMP_parallel_loop_dynamic");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_loop_dynamic();
    lib_GOMP_parallel_loop_dynamic(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_loop_dynamic();
}

void GOMP_parallel_loop_guided (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, long arg7, unsigned arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_guided, "GOMP_parallel_loop_guided");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_loop_guided();
    lib_GOMP_parallel_loop_guided(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_loop_guided();
}

void GOMP_parallel_loop_runtime (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, unsigned arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_runtime, "GOMP_parallel_loop_runtime");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_loop_runtime();
    lib_GOMP_parallel_loop_runtime(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_loop_runtime();
}

void GOMP_parallel_loop_nonmonotonic_dynamic (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, long arg7, unsigned arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_nonmonotonic_dynamic, "GOMP_parallel_loop_nonmonotonic_dynamic");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_loop_nonmonotonic_dynamic();
    lib_GOMP_parallel_loop_nonmonotonic_dynamic(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_loop_nonmonotonic_dynamic();
}

void GOMP_parallel_loop_nonmonotonic_guided (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, long arg7, unsigned arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_nonmonotonic_guided, "GOMP_parallel_loop_nonmonotonic_guided");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_loop_nonmonotonic_guided();
    lib_GOMP_parallel_loop_nonmonotonic_guided(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_loop_nonmonotonic_guided();
}

void GOMP_parallel_loop_nonmonotonic_runtime (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, unsigned arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_nonmonotonic_runtime, "GOMP_parallel_loop_nonmonotonic_runtime");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_loop_nonmonotonic_runtime();
    lib_GOMP_parallel_loop_nonmonotonic_runtime(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_loop_nonmonotonic_runtime();
}

void GOMP_parallel_loop_maybe_nonmonotonic_runtime (void (*arg1)(void *), void * arg2, unsigned arg3, long arg4, long arg5, long arg6, unsigned arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_loop_maybe_nonmonotonic_runtime, "GOMP_parallel_loop_maybe_nonmonotonic_runtime");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_loop_maybe_nonmonotonic_runtime();
    lib_GOMP_parallel_loop_maybe_nonmonotonic_runtime(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_loop_maybe_nonmonotonic_runtime();
}

void GOMP_loop_end () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_end, "GOMP_loop_end");
    PRE_GOMP_loop_end();
    lib_GOMP_loop_end();
    POST_GOMP_loop_end();
}

void GOMP_loop_end_nowait () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_end_nowait, "GOMP_loop_end_nowait");
    PRE_GOMP_loop_end_nowait();
    lib_GOMP_loop_end_nowait();
    POST_GOMP_loop_end_nowait();
}

bool GOMP_loop_end_cancel () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_end_cancel, "GOMP_loop_end_cancel");
    PRE_GOMP_loop_end_cancel();
    bool res = lib_GOMP_loop_end_cancel();
    POST_GOMP_loop_end_cancel();
    return res;
}

bool GOMP_loop_ull_static_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long * arg6, unsigned long long * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_static_start, "GOMP_loop_ull_static_start");
    PRE_GOMP_loop_ull_static_start();
    bool res = lib_GOMP_loop_ull_static_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_loop_ull_static_start();
    return res;
}

bool GOMP_loop_ull_dynamic_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long * arg6, unsigned long long * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_dynamic_start, "GOMP_loop_ull_dynamic_start");
    PRE_GOMP_loop_ull_dynamic_start();
    bool res = lib_GOMP_loop_ull_dynamic_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_loop_ull_dynamic_start();
    return res;
}

bool GOMP_loop_ull_guided_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long * arg6, unsigned long long * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_guided_start, "GOMP_loop_ull_guided_start");
    PRE_GOMP_loop_ull_guided_start();
    bool res = lib_GOMP_loop_ull_guided_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_loop_ull_guided_start();
    return res;
}

bool GOMP_loop_ull_runtime_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long * arg5, unsigned long long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_runtime_start, "GOMP_loop_ull_runtime_start");
    PRE_GOMP_loop_ull_runtime_start();
    bool res = lib_GOMP_loop_ull_runtime_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_ull_runtime_start();
    return res;
}

bool GOMP_loop_ull_nonmonotonic_dynamic_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long * arg6, unsigned long long * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_nonmonotonic_dynamic_start, "GOMP_loop_ull_nonmonotonic_dynamic_start");
    PRE_GOMP_loop_ull_nonmonotonic_dynamic_start();
    bool res = lib_GOMP_loop_ull_nonmonotonic_dynamic_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_loop_ull_nonmonotonic_dynamic_start();
    return res;
}

bool GOMP_loop_ull_nonmonotonic_guided_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long * arg6, unsigned long long * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_nonmonotonic_guided_start, "GOMP_loop_ull_nonmonotonic_guided_start");
    PRE_GOMP_loop_ull_nonmonotonic_guided_start();
    bool res = lib_GOMP_loop_ull_nonmonotonic_guided_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_loop_ull_nonmonotonic_guided_start();
    return res;
}

bool GOMP_loop_ull_nonmonotonic_runtime_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long * arg5, unsigned long long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_nonmonotonic_runtime_start, "GOMP_loop_ull_nonmonotonic_runtime_start");
    PRE_GOMP_loop_ull_nonmonotonic_runtime_start();
    bool res = lib_GOMP_loop_ull_nonmonotonic_runtime_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_ull_nonmonotonic_runtime_start();
    return res;
}

bool GOMP_loop_ull_maybe_nonmonotonic_runtime_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long * arg5, unsigned long long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_maybe_nonmonotonic_runtime_start, "GOMP_loop_ull_maybe_nonmonotonic_runtime_start");
    PRE_GOMP_loop_ull_maybe_nonmonotonic_runtime_start();
    bool res = lib_GOMP_loop_ull_maybe_nonmonotonic_runtime_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_ull_maybe_nonmonotonic_runtime_start();
    return res;
}

bool GOMP_loop_ull_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, long arg5, unsigned long long arg6, unsigned long long * arg7, unsigned long long * arg8, uintptr_t * arg9, void ** arg10) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_start, "GOMP_loop_ull_start");
    PRE_GOMP_loop_ull_start();
    bool res = lib_GOMP_loop_ull_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    POST_GOMP_loop_ull_start();
    return res;
}

bool GOMP_loop_ull_ordered_static_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long * arg6, unsigned long long * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_static_start, "GOMP_loop_ull_ordered_static_start");
    PRE_GOMP_loop_ull_ordered_static_start();
    bool res = lib_GOMP_loop_ull_ordered_static_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_loop_ull_ordered_static_start();
    return res;
}

bool GOMP_loop_ull_ordered_dynamic_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long * arg6, unsigned long long * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_dynamic_start, "GOMP_loop_ull_ordered_dynamic_start");
    PRE_GOMP_loop_ull_ordered_dynamic_start();
    bool res = lib_GOMP_loop_ull_ordered_dynamic_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_loop_ull_ordered_dynamic_start();
    return res;
}

bool GOMP_loop_ull_ordered_guided_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long * arg6, unsigned long long * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_guided_start, "GOMP_loop_ull_ordered_guided_start");
    PRE_GOMP_loop_ull_ordered_guided_start();
    bool res = lib_GOMP_loop_ull_ordered_guided_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_loop_ull_ordered_guided_start();
    return res;
}

bool GOMP_loop_ull_ordered_runtime_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long * arg5, unsigned long long * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_runtime_start, "GOMP_loop_ull_ordered_runtime_start");
    PRE_GOMP_loop_ull_ordered_runtime_start();
    bool res = lib_GOMP_loop_ull_ordered_runtime_start(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_loop_ull_ordered_runtime_start();
    return res;
}

bool GOMP_loop_ull_ordered_start (bool arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, long arg5, unsigned long long arg6, unsigned long long * arg7, unsigned long long * arg8, uintptr_t * arg9, void ** arg10) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_start, "GOMP_loop_ull_ordered_start");
    PRE_GOMP_loop_ull_ordered_start();
    bool res = lib_GOMP_loop_ull_ordered_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    POST_GOMP_loop_ull_ordered_start();
    return res;
}

bool GOMP_loop_ull_static_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_static_next, "GOMP_loop_ull_static_next");
    PRE_GOMP_loop_ull_static_next();
    bool res = lib_GOMP_loop_ull_static_next(arg1, arg2);
    POST_GOMP_loop_ull_static_next();
    return res;
}

bool GOMP_loop_ull_dynamic_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_dynamic_next, "GOMP_loop_ull_dynamic_next");
    PRE_GOMP_loop_ull_dynamic_next();
    bool res = lib_GOMP_loop_ull_dynamic_next(arg1, arg2);
    POST_GOMP_loop_ull_dynamic_next();
    return res;
}

bool GOMP_loop_ull_guided_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_guided_next, "GOMP_loop_ull_guided_next");
    PRE_GOMP_loop_ull_guided_next();
    bool res = lib_GOMP_loop_ull_guided_next(arg1, arg2);
    POST_GOMP_loop_ull_guided_next();
    return res;
}

bool GOMP_loop_ull_runtime_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_runtime_next, "GOMP_loop_ull_runtime_next");
    PRE_GOMP_loop_ull_runtime_next();
    bool res = lib_GOMP_loop_ull_runtime_next(arg1, arg2);
    POST_GOMP_loop_ull_runtime_next();
    return res;
}

bool GOMP_loop_ull_nonmonotonic_dynamic_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_nonmonotonic_dynamic_next, "GOMP_loop_ull_nonmonotonic_dynamic_next");
    PRE_GOMP_loop_ull_nonmonotonic_dynamic_next();
    bool res = lib_GOMP_loop_ull_nonmonotonic_dynamic_next(arg1, arg2);
    POST_GOMP_loop_ull_nonmonotonic_dynamic_next();
    return res;
}

bool GOMP_loop_ull_nonmonotonic_guided_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_nonmonotonic_guided_next, "GOMP_loop_ull_nonmonotonic_guided_next");
    PRE_GOMP_loop_ull_nonmonotonic_guided_next();
    bool res = lib_GOMP_loop_ull_nonmonotonic_guided_next(arg1, arg2);
    POST_GOMP_loop_ull_nonmonotonic_guided_next();
    return res;
}

bool GOMP_loop_ull_nonmonotonic_runtime_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_nonmonotonic_runtime_next, "GOMP_loop_ull_nonmonotonic_runtime_next");
    PRE_GOMP_loop_ull_nonmonotonic_runtime_next();
    bool res = lib_GOMP_loop_ull_nonmonotonic_runtime_next(arg1, arg2);
    POST_GOMP_loop_ull_nonmonotonic_runtime_next();
    return res;
}

bool GOMP_loop_ull_maybe_nonmonotonic_runtime_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_maybe_nonmonotonic_runtime_next, "GOMP_loop_ull_maybe_nonmonotonic_runtime_next");
    PRE_GOMP_loop_ull_maybe_nonmonotonic_runtime_next();
    bool res = lib_GOMP_loop_ull_maybe_nonmonotonic_runtime_next(arg1, arg2);
    POST_GOMP_loop_ull_maybe_nonmonotonic_runtime_next();
    return res;
}

bool GOMP_loop_ull_ordered_static_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_static_next, "GOMP_loop_ull_ordered_static_next");
    PRE_GOMP_loop_ull_ordered_static_next();
    bool res = lib_GOMP_loop_ull_ordered_static_next(arg1, arg2);
    POST_GOMP_loop_ull_ordered_static_next();
    return res;
}

bool GOMP_loop_ull_ordered_dynamic_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_dynamic_next, "GOMP_loop_ull_ordered_dynamic_next");
    PRE_GOMP_loop_ull_ordered_dynamic_next();
    bool res = lib_GOMP_loop_ull_ordered_dynamic_next(arg1, arg2);
    POST_GOMP_loop_ull_ordered_dynamic_next();
    return res;
}

bool GOMP_loop_ull_ordered_guided_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_guided_next, "GOMP_loop_ull_ordered_guided_next");
    PRE_GOMP_loop_ull_ordered_guided_next();
    bool res = lib_GOMP_loop_ull_ordered_guided_next(arg1, arg2);
    POST_GOMP_loop_ull_ordered_guided_next();
    return res;
}

bool GOMP_loop_ull_ordered_runtime_next (unsigned long long * arg1, unsigned long long * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_ordered_runtime_next, "GOMP_loop_ull_ordered_runtime_next");
    PRE_GOMP_loop_ull_ordered_runtime_next();
    bool res = lib_GOMP_loop_ull_ordered_runtime_next(arg1, arg2);
    POST_GOMP_loop_ull_ordered_runtime_next();
    return res;
}

bool GOMP_loop_ull_doacross_static_start (unsigned arg1, unsigned long long * arg2, unsigned long long arg3, unsigned long long * arg4, unsigned long long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_doacross_static_start, "GOMP_loop_ull_doacross_static_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_ull_doacross_static_start();
    bool res = lib_GOMP_loop_ull_doacross_static_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_ull_doacross_static_start();
    return res;
}

bool GOMP_loop_ull_doacross_dynamic_start (unsigned arg1, unsigned long long * arg2, unsigned long long arg3, unsigned long long * arg4, unsigned long long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_doacross_dynamic_start, "GOMP_loop_ull_doacross_dynamic_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_ull_doacross_dynamic_start();
    bool res = lib_GOMP_loop_ull_doacross_dynamic_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_ull_doacross_dynamic_start();
    return res;
}

bool GOMP_loop_ull_doacross_guided_start (unsigned arg1, unsigned long long * arg2, unsigned long long arg3, unsigned long long * arg4, unsigned long long * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_doacross_guided_start, "GOMP_loop_ull_doacross_guided_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_ull_doacross_guided_start();
    bool res = lib_GOMP_loop_ull_doacross_guided_start(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_loop_ull_doacross_guided_start();
    return res;
}

bool GOMP_loop_ull_doacross_runtime_start (unsigned arg1, unsigned long long * arg2, unsigned long long * arg3, unsigned long long * arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_doacross_runtime_start, "GOMP_loop_ull_doacross_runtime_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_ull_doacross_runtime_start();
    bool res = lib_GOMP_loop_ull_doacross_runtime_start(arg1, arg2, arg3, arg4);
    POST_GOMP_loop_ull_doacross_runtime_start();
    return res;
}

bool GOMP_loop_ull_doacross_start (unsigned arg1, unsigned long long * arg2, long arg3, unsigned long long arg4, unsigned long long * arg5, unsigned long long * arg6, uintptr_t * arg7, void ** arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_loop_ull_doacross_start, "GOMP_loop_ull_doacross_start");
    hook_gomp_doacross_ncounts = arg1;
    PRE_GOMP_loop_ull_doacross_start();
    bool res = lib_GOMP_loop_ull_doacross_start(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_GOMP_loop_ull_doacross_start();
    return res;
}

void GOMP_ordered_start () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_ordered_start, "GOMP_ordered_start");
    PRE_GOMP_ordered_start();
    lib_GOMP_ordered_start();
    POST_GOMP_ordered_start();
}

void GOMP_ordered_end () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_ordered_end, "GOMP_ordered_end");
    PRE_GOMP_ordered_end();
    lib_GOMP_ordered_end();
    POST_GOMP_ordered_end();
}

void GOMP_doacross_post (long * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_doacross_post, "GOMP_doacross_post");
    PRE_GOMP_doacross_post();
    lib_GOMP_doacross_post(arg1);
    POST_GOMP_doacross_post();
}

void GOMP_doacross_wait (long arg1, ...) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_doacross_wait, "GOMP_doacross_wait");
    unsigned n = hook_gomp_doacross_ncounts;
    if (n == 0) {
        fprintf(stderr, "hookgomp: GOMP_doacross_wait fora de um laço doacross conhecido.\n");
        abort();
    }
    long a[n];
    a[0] = arg1;
    va_list ap;
    va_start(ap, arg1);
    for (unsigned i = 1; i < n; i++) a[i] = va_arg(ap, long);
    va_end(ap);
    PRE_GOMP_doacross_wait();
    switch (n) {
      case 1: lib_GOMP_doacross_wait(a[0]); break;
      case 2: lib_GOMP_doacross_wait(a[0], a[1]); break;
      case 3: lib_GOMP_doacross_wait(a[0], a[1], a[2]); break;
      case 4: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3]); break;
      case 5: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4]); break;
      case 6: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5]); break;
      case 7: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6]); break;
      case 8: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]); break;
      case 9: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]); break;
      case 10: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]); break;
      case 11: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10]); break;
      case 12: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11]); break;
      case 13: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12]); break;
      case 14: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13]); break;
      case 15: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14]); break;
      case 16: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15]); break;
      case 17: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16]); break;
      case 18: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17]); break;
      case 19: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18]); break;
      case 20: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19]); break;
      case 21: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20]); break;
      case 22: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21]); break;
      case 23: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22]); break;
      case 24: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23]); break;
      case 25: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24]); break;
      case 26: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25]); break;
      case 27: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26]); break;
      case 28: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27]); break;
      case 29: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28]); break;
      case 30: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29]); break;
      case 31: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30]); break;
      case 32: lib_GOMP_doacross_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30], a[31]); break;
      default: hook_gomp_forward_variadic("GOMP_doacross_wait", (void (*)(void)) lib_GOMP_doacross_wait, "long", sizeof(a[0]), a, n); break;
    }
    POST_GOMP_doacross_wait();
}

void GOMP_doacross_ull_post (unsigned long long * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_doacross_ull_post, "GOMP_doacross_ull_post");
    PRE_GOMP_doacross_ull_post();
    lib_GOMP_doacross_ull_post(arg1);
    POST_GOMP_doacross_ull_post();
}

void GOMP_doacross_ull_wait (unsigned long long arg1, ...) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_doacross_ull_wait, "GOMP_doacross_ull_wait");
    unsigned n = hook_gomp_doacross_ncounts;
    if (n == 0) {
        fprintf(stderr, "hookgomp: GOMP_doacross_ull_wait fora de um laço doacross conhecido.\n");
        abort();
    }
    unsigned long long a[n];
    a[0] = arg1;
    va_list ap;
    va_start(ap, arg1);
    for (unsigned i = 1; i < n; i++) a[i] = va_arg(ap, unsigned long long);
    va_end(ap);
    PRE_GOMP_doacross_ull_wait();
    switch (n) {
      case 1: lib_GOMP_doacross_ull_wait(a[0]); break;
      case 2: lib_GOMP_doacross_ull_wait(a[0], a[1]); break;
      case 3: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2]); break;
      case 4: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3]); break;
      case 5: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4]); break;
      case 6: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5]); break;
      case 7: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6]); break;
      case 8: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]); break;
      case 9: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]); break;
      case 10: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]); break;
      case 11: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10]); break;
      case 12: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11]); break;
      case 13: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12]); break;
      case 14: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13]); break;
      case 15: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14]); break;
      case 16: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15]); break;
      case 17: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16]); break;
      case 18: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17]); break;
      case 19: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18]); break;
      case 20: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19]); break;
      case 21: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20]); break;
      case 22: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21]); break;
      case 23: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22]); break;
      case 24: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23]); break;
      case 25: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24]); break;
      case 26: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25]); break;
      case 27: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26]); break;
      case 28: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27]); break;
      case 29: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28]); break;
      case 30: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29]); break;
      case 31: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30]); break;
      case 32: lib_GOMP_doacross_ull_wait(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30], a[31]); break;
      default: hook_gomp_forward_variadic("GOMP_doacross_ull_wait", (void (*)(void)) lib_GOMP_doacross_ull_wait, "unsigned long long", sizeof(a[0]), a, n); break;
    }
    POST_GOMP_doacross_ull_wait();
}

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

void GOMP_parallel (void (*arg1) (void *), void * arg2, unsigned arg3, unsigned arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel, "GOMP_parallel");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel();
    lib_GOMP_parallel(arg1, arg2, arg3, arg4);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel();
}

unsigned GOMP_parallel_reductions (void (*arg1) (void *), void * arg2, unsigned arg3, unsigned arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_reductions, "GOMP_parallel_reductions");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_reductions();
    unsigned res = lib_GOMP_parallel_reductions(arg1, arg2, arg3, arg4);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_reductions();
    return res;
}

bool GOMP_cancel (int arg1, bool arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_cancel, "GOMP_cancel");
    PRE_GOMP_cancel();
    bool res = lib_GOMP_cancel(arg1, arg2);
    POST_GOMP_cancel();
    return res;
}

bool GOMP_cancellation_point (int arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_cancellation_point, "GOMP_cancellation_point");
    PRE_GOMP_cancellation_point();
    bool res = lib_GOMP_cancellation_point(arg1);
    POST_GOMP_cancellation_point();
    return res;
}

void GOMP_task (void (*arg1) (void *), void * arg2, void (*arg3) (void *, void *), long arg4, long arg5, bool arg6, unsigned arg7, void ** arg8, int arg9, void * arg10) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_task, "GOMP_task");
    PRE_GOMP_task();
    lib_GOMP_task(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    POST_GOMP_task();
}

void GOMP_taskloop (void (*arg1) (void *), void * arg2, void (*arg3) (void *, void *), long arg4, long arg5, unsigned arg6, unsigned long arg7, int arg8, long arg9, long arg10, long arg11) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskloop, "GOMP_taskloop");
    PRE_GOMP_taskloop();
    lib_GOMP_taskloop(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    POST_GOMP_taskloop();
}

void GOMP_taskloop_ull (void (*arg1) (void *), void * arg2, void (*arg3) (void *, void *), long arg4, long arg5, unsigned arg6, unsigned long arg7, int arg8, unsigned long long arg9, unsigned long long arg10, unsigned long long arg11) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskloop_ull, "GOMP_taskloop_ull");
    PRE_GOMP_taskloop_ull();
    lib_GOMP_taskloop_ull(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    POST_GOMP_taskloop_ull();
}

void GOMP_taskwait () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskwait, "GOMP_taskwait");
    PRE_GOMP_taskwait();
    lib_GOMP_taskwait();
    POST_GOMP_taskwait();
}

void GOMP_taskwait_depend (void ** arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskwait_depend, "GOMP_taskwait_depend");
    PRE_GOMP_taskwait_depend();
    lib_GOMP_taskwait_depend(arg1);
    POST_GOMP_taskwait_depend();
}

void GOMP_taskwait_depend_nowait (void ** arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskwait_depend_nowait, "GOMP_taskwait_depend_nowait");
    PRE_GOMP_taskwait_depend_nowait();
    lib_GOMP_taskwait_depend_nowait(arg1);
    POST_GOMP_taskwait_depend_nowait();
}

void GOMP_taskyield () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskyield, "GOMP_taskyield");
    PRE_GOMP_taskyield();
    lib_GOMP_taskyield();
    POST_GOMP_taskyield();
}

void GOMP_taskgroup_start () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskgroup_start, "GOMP_taskgroup_start");
    PRE_GOMP_taskgroup_start();
    lib_GOMP_taskgroup_start();
    POST_GOMP_taskgroup_start();
}

void GOMP_taskgroup_end () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskgroup_end, "GOMP_taskgroup_end");
    PRE_GOMP_taskgroup_end();
    lib_GOMP_taskgroup_end();
    POST_GOMP_taskgroup_end();
}

void GOMP_taskgroup_reduction_register (uintptr_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskgroup_reduction_register, "GOMP_taskgroup_reduction_register");
    PRE_GOMP_taskgroup_reduction_register();
    lib_GOMP_taskgroup_reduction_register(arg1);
    POST_GOMP_taskgroup_reduction_register();
}

void GOMP_taskgroup_reduction_unregister (uintptr_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_taskgroup_reduction_unregister, "GOMP_taskgroup_reduction_unregister");
    PRE_GOMP_taskgroup_reduction_unregister();
    lib_GOMP_taskgroup_reduction_unregister(arg1);
    POST_GOMP_taskgroup_reduction_unregister();
}

void GOMP_task_reduction_remap (size_t arg1, size_t arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_task_reduction_remap, "GOMP_task_reduction_remap");
    PRE_GOMP_task_reduction_remap();
    lib_GOMP_task_reduction_remap(arg1, arg2, arg3);
    POST_GOMP_task_reduction_remap();
}

void GOMP_workshare_task_reduction_unregister (bool arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_workshare_task_reduction_unregister, "GOMP_workshare_task_reduction_unregister");
    PRE_GOMP_workshare_task_reduction_unregister();
    lib_GOMP_workshare_task_reduction_unregister(arg1);
    POST_GOMP_workshare_task_reduction_unregister();
}

unsigned GOMP_sections_start (unsigned arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_sections_start, "GOMP_sections_start");
    PRE_GOMP_sections_start();
    unsigned res = lib_GOMP_sections_start(arg1);
    POST_GOMP_sections_start();
    return res;
}

unsigned GOMP_sections2_start (unsigned arg1, uintptr_t * arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_sections2_start, "GOMP_sections2_start");
    PRE_GOMP_sections2_start();
    unsigned res = lib_GOMP_sections2_start(arg1, arg2, arg3);
    POST_GOMP_sections2_start();
    return res;
}

unsigned GOMP_sections_next () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_sections_next, "GOMP_sections_next");
    PRE_GOMP_sections_next();
    unsigned res = lib_GOMP_sections_next();
    POST_GOMP_sections_next();
    return res;
}

void GOMP_parallel_sections_start (void (*arg1) (void *), void * arg2, unsigned arg3, unsigned arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_sections_start, "GOMP_parallel_sections_start");
    PRE_GOMP_parallel_sections_start();
    lib_GOMP_parallel_sections_start(arg1, arg2, arg3, arg4);
    POST_GOMP_parallel_sections_start();
}

void GOMP_parallel_sections (void (*arg1) (void *), void * arg2, unsigned arg3, unsigned arg4, unsigned arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_parallel_sections, "GOMP_parallel_sections");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_parallel_sections();
    lib_GOMP_parallel_sections(arg1, arg2, arg3, arg4, arg5);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_parallel_sections();
}

void GOMP_sections_end () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_sections_end, "GOMP_sections_end");
    PRE_GOMP_sections_end();
    lib_GOMP_sections_end();
    POST_GOMP_sections_end();
}

void GOMP_sections_end_nowait () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_sections_end_nowait, "GOMP_sections_end_nowait");
    PRE_GOMP_sections_end_nowait();
    lib_GOMP_sections_end_nowait();
    POST_GOMP_sections_end_nowait();
}

bool GOMP_sections_end_cancel () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_sections_end_cancel, "GOMP_sections_end_cancel");
    PRE_GOMP_sections_end_cancel();
    bool res = lib_GOMP_sections_end_cancel();
    POST_GOMP_sections_end_cancel();
    return res;
}

bool GOMP_single_start () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_single_start, "GOMP_single_start");
    PRE_GOMP_single_start();
    bool res = lib_GOMP_single_start();
    POST_GOMP_single_start();
    return res;
}

void GOMP_single_copy_end (void * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_single_copy_end, "GOMP_single_copy_end");
    PRE_GOMP_single_copy_end();
    lib_GOMP_single_copy_end(arg1);
    POST_GOMP_single_copy_end();
}

void GOMP_scope_start (uintptr_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_scope_start, "GOMP_scope_start");
    PRE_GOMP_scope_start();
    lib_GOMP_scope_start(arg1);
    POST_GOMP_scope_start();
}

void GOMP_target (int arg1, void (*arg2) (void *), const void * arg3, size_t arg4, void ** arg5, size_t * arg6, unsigned char * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_target, "GOMP_target");
    PRE_GOMP_target();
    lib_GOMP_target(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_target();
}

void GOMP_target_ext (int arg1, void (*arg2) (void *), size_t arg3, void ** arg4, size_t * arg5, unsigned short * arg6, unsigned int arg7, void ** arg8, void ** arg9) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_target_ext, "GOMP_target_ext");
    PRE_GOMP_target_ext();
    lib_GOMP_target_ext(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    POST_GOMP_target_ext();
}

void GOMP_target_data (int arg1, const void * arg2, size_t arg3, void ** arg4, size_t * arg5, unsigned char * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_target_data, "GOMP_target_data");
    PRE_GOMP_target_data();
    lib_GOMP_target_data(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_target_data();
}

void GOMP_target_data_ext (int arg1, size_t arg2, void ** arg3, size_t * arg4, unsigned short * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_target_data_ext, "GOMP_target_data_ext");
    PRE_GOMP_target_data_ext();
    lib_GOMP_target_data_ext(arg1, arg2, arg3, arg4, arg5);
    POST_GOMP_target_data_ext();
}

void GOMP_target_end_data () {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_target_end_data, "GOMP_target_end_data");
    PRE_GOMP_target_end_data();
    lib_GOMP_target_end_data();
    POST_GOMP_target_end_data();
}

void GOMP_target_update (int arg1, const void * arg2, size_t arg3, void ** arg4, size_t * arg5, unsigned char * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_target_update, "GOMP_target_update");
    PRE_GOMP_target_update();
    lib_GOMP_target_update(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_GOMP_target_update();
}

void GOMP_target_update_ext (int arg1, size_t arg2, void ** arg3, size_t * arg4, unsigned short * arg5, unsigned int arg6, void ** arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_target_update_ext, "GOMP_target_update_ext");
    PRE_GOMP_target_update_ext();
    lib_GOMP_target_update_ext(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_target_update_ext();
}

void GOMP_target_enter_exit_data (int arg1, size_t arg2, void ** arg3, size_t * arg4, unsigned short * arg5, unsigned int arg6, void ** arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_target_enter_exit_data, "GOMP_target_enter_exit_data");
    PRE_GOMP_target_enter_exit_data();
    lib_GOMP_target_enter_exit_data(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_GOMP_target_enter_exit_data();
}

void GOMP_teams (unsigned int arg1, unsigned int arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_teams, "GOMP_teams");
    PRE_GOMP_teams();
    lib_GOMP_teams(arg1, arg2);
    POST_GOMP_teams();
}

bool GOMP_teams4 (unsigned int arg1, unsigned int arg2, unsigned int arg3, bool arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_teams4, "GOMP_teams4");
    PRE_GOMP_teams4();
    bool res = lib_GOMP_teams4(arg1, arg2, arg3, arg4);
    POST_GOMP_teams4();
    return res;
}

void GOMP_interop (int arg1, int arg2, struct interop_obj_t *** arg3, const int * arg4, const char ** arg5, int arg6, struct interop_obj_t ** arg7, int arg8, struct interop_obj_t *** arg9, unsigned arg10, void ** arg11) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_interop, "GOMP_interop");
    PRE_GOMP_interop();
    lib_GOMP_interop(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    POST_GOMP_interop();
}

void GOMP_teams_reg (void (*arg1) (void *), void * arg2, unsigned arg3, unsigned arg4, unsigned arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_teams_reg, "GOMP_teams_reg");
    unsigned hook_saved_ncounts = hook_gomp_doacross_ncounts;
    PRE_GOMP_teams_reg();
    lib_GOMP_teams_reg(arg1, arg2, arg3, arg4, arg5);
    hook_gomp_doacross_ncounts = hook_saved_ncounts;
    POST_GOMP_teams_reg();
}

void GOMP_add_alloc (void * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_add_alloc, "GOMP_add_alloc");
    PRE_GOMP_add_alloc();
    lib_GOMP_add_alloc(arg1);
    POST_GOMP_add_alloc();
}

bool GOMP_is_alloc (void * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_is_alloc, "GOMP_is_alloc");
    PRE_GOMP_is_alloc();
    bool res = lib_GOMP_is_alloc(arg1);
    POST_GOMP_is_alloc();
    return res;
}

void GOMP_free (void * arg1, uintptr_t arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_free, "GOMP_free");
    PRE_GOMP_free();
    lib_GOMP_free(arg1, arg2);
    POST_GOMP_free();
}

void GOMP_warning (const char * arg1, size_t arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_warning, "GOMP_warning");
    PRE_GOMP_warning();
    lib_GOMP_warning(arg1, arg2);
    POST_GOMP_warning();
}

void GOMP_error (const char * arg1, size_t arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib_GOMP_error, "GOMP_error");
    PRE_GOMP_error();
    lib_GOMP_error(arg1, arg2);
    POST_GOMP_error();
}

#ifdef __cplusplus
}
#endif
