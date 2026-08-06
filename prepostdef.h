#ifndef PREPOSTDEF_H
#define PREPOSTDEF_H

#ifdef __cplusplus
extern "C" {
#endif

void PRE_GOMP_barrier(void);
void POST_GOMP_barrier(void);

void PRE_GOMP_barrier_cancel(void);
void POST_GOMP_barrier_cancel(void);

void PRE_GOMP_critical_start(void);
void POST_GOMP_critical_start(void);

void PRE_GOMP_critical_end(void);
void POST_GOMP_critical_end(void);

void PRE_GOMP_critical_name_start(void);
void POST_GOMP_critical_name_start(void);

void PRE_GOMP_critical_name_end(void);
void POST_GOMP_critical_name_end(void);

void PRE_GOMP_atomic_start(void);
void POST_GOMP_atomic_start(void);

void PRE_GOMP_atomic_end(void);
void POST_GOMP_atomic_end(void);

void PRE_GOMP_loop_static_start(void);
void POST_GOMP_loop_static_start(void);

void PRE_GOMP_loop_dynamic_start(void);
void POST_GOMP_loop_dynamic_start(void);

void PRE_GOMP_loop_guided_start(void);
void POST_GOMP_loop_guided_start(void);

void PRE_GOMP_loop_runtime_start(void);
void POST_GOMP_loop_runtime_start(void);

void PRE_GOMP_loop_nonmonotonic_dynamic_start(void);
void POST_GOMP_loop_nonmonotonic_dynamic_start(void);

void PRE_GOMP_loop_nonmonotonic_guided_start(void);
void POST_GOMP_loop_nonmonotonic_guided_start(void);

void PRE_GOMP_loop_nonmonotonic_runtime_start(void);
void POST_GOMP_loop_nonmonotonic_runtime_start(void);

void PRE_GOMP_loop_maybe_nonmonotonic_runtime_start(void);
void POST_GOMP_loop_maybe_nonmonotonic_runtime_start(void);

void PRE_GOMP_loop_start(void);
void POST_GOMP_loop_start(void);

void PRE_GOMP_loop_ordered_static_start(void);
void POST_GOMP_loop_ordered_static_start(void);

void PRE_GOMP_loop_ordered_dynamic_start(void);
void POST_GOMP_loop_ordered_dynamic_start(void);

void PRE_GOMP_loop_ordered_guided_start(void);
void POST_GOMP_loop_ordered_guided_start(void);

void PRE_GOMP_loop_ordered_runtime_start(void);
void POST_GOMP_loop_ordered_runtime_start(void);

void PRE_GOMP_loop_ordered_start(void);
void POST_GOMP_loop_ordered_start(void);

void PRE_GOMP_loop_static_next(void);
void POST_GOMP_loop_static_next(void);

void PRE_GOMP_loop_dynamic_next(void);
void POST_GOMP_loop_dynamic_next(void);

void PRE_GOMP_loop_guided_next(void);
void POST_GOMP_loop_guided_next(void);

void PRE_GOMP_loop_runtime_next(void);
void POST_GOMP_loop_runtime_next(void);

void PRE_GOMP_loop_nonmonotonic_dynamic_next(void);
void POST_GOMP_loop_nonmonotonic_dynamic_next(void);

void PRE_GOMP_loop_nonmonotonic_guided_next(void);
void POST_GOMP_loop_nonmonotonic_guided_next(void);

void PRE_GOMP_loop_nonmonotonic_runtime_next(void);
void POST_GOMP_loop_nonmonotonic_runtime_next(void);

void PRE_GOMP_loop_maybe_nonmonotonic_runtime_next(void);
void POST_GOMP_loop_maybe_nonmonotonic_runtime_next(void);

void PRE_GOMP_loop_ordered_static_next(void);
void POST_GOMP_loop_ordered_static_next(void);

void PRE_GOMP_loop_ordered_dynamic_next(void);
void POST_GOMP_loop_ordered_dynamic_next(void);

void PRE_GOMP_loop_ordered_guided_next(void);
void POST_GOMP_loop_ordered_guided_next(void);

void PRE_GOMP_loop_ordered_runtime_next(void);
void POST_GOMP_loop_ordered_runtime_next(void);

void PRE_GOMP_loop_doacross_static_start(void);
void POST_GOMP_loop_doacross_static_start(void);

void PRE_GOMP_loop_doacross_dynamic_start(void);
void POST_GOMP_loop_doacross_dynamic_start(void);

void PRE_GOMP_loop_doacross_guided_start(void);
void POST_GOMP_loop_doacross_guided_start(void);

void PRE_GOMP_loop_doacross_runtime_start(void);
void POST_GOMP_loop_doacross_runtime_start(void);

void PRE_GOMP_loop_doacross_start(void);
void POST_GOMP_loop_doacross_start(void);

void PRE_GOMP_parallel_loop_static_start(void);
void POST_GOMP_parallel_loop_static_start(void);

void PRE_GOMP_parallel_loop_dynamic_start(void);
void POST_GOMP_parallel_loop_dynamic_start(void);

void PRE_GOMP_parallel_loop_guided_start(void);
void POST_GOMP_parallel_loop_guided_start(void);

void PRE_GOMP_parallel_loop_runtime_start(void);
void POST_GOMP_parallel_loop_runtime_start(void);

void PRE_GOMP_parallel_loop_static(void);
void POST_GOMP_parallel_loop_static(void);

void PRE_GOMP_parallel_loop_dynamic(void);
void POST_GOMP_parallel_loop_dynamic(void);

void PRE_GOMP_parallel_loop_guided(void);
void POST_GOMP_parallel_loop_guided(void);

void PRE_GOMP_parallel_loop_runtime(void);
void POST_GOMP_parallel_loop_runtime(void);

void PRE_GOMP_parallel_loop_nonmonotonic_dynamic(void);
void POST_GOMP_parallel_loop_nonmonotonic_dynamic(void);

void PRE_GOMP_parallel_loop_nonmonotonic_guided(void);
void POST_GOMP_parallel_loop_nonmonotonic_guided(void);

void PRE_GOMP_parallel_loop_nonmonotonic_runtime(void);
void POST_GOMP_parallel_loop_nonmonotonic_runtime(void);

void PRE_GOMP_parallel_loop_maybe_nonmonotonic_runtime(void);
void POST_GOMP_parallel_loop_maybe_nonmonotonic_runtime(void);

void PRE_GOMP_loop_end(void);
void POST_GOMP_loop_end(void);

void PRE_GOMP_loop_end_nowait(void);
void POST_GOMP_loop_end_nowait(void);

void PRE_GOMP_loop_end_cancel(void);
void POST_GOMP_loop_end_cancel(void);

void PRE_GOMP_loop_ull_static_start(void);
void POST_GOMP_loop_ull_static_start(void);

void PRE_GOMP_loop_ull_dynamic_start(void);
void POST_GOMP_loop_ull_dynamic_start(void);

void PRE_GOMP_loop_ull_guided_start(void);
void POST_GOMP_loop_ull_guided_start(void);

void PRE_GOMP_loop_ull_runtime_start(void);
void POST_GOMP_loop_ull_runtime_start(void);

void PRE_GOMP_loop_ull_nonmonotonic_dynamic_start(void);
void POST_GOMP_loop_ull_nonmonotonic_dynamic_start(void);

void PRE_GOMP_loop_ull_nonmonotonic_guided_start(void);
void POST_GOMP_loop_ull_nonmonotonic_guided_start(void);

void PRE_GOMP_loop_ull_nonmonotonic_runtime_start(void);
void POST_GOMP_loop_ull_nonmonotonic_runtime_start(void);

void PRE_GOMP_loop_ull_maybe_nonmonotonic_runtime_start(void);
void POST_GOMP_loop_ull_maybe_nonmonotonic_runtime_start(void);

void PRE_GOMP_loop_ull_start(void);
void POST_GOMP_loop_ull_start(void);

void PRE_GOMP_loop_ull_ordered_static_start(void);
void POST_GOMP_loop_ull_ordered_static_start(void);

void PRE_GOMP_loop_ull_ordered_dynamic_start(void);
void POST_GOMP_loop_ull_ordered_dynamic_start(void);

void PRE_GOMP_loop_ull_ordered_guided_start(void);
void POST_GOMP_loop_ull_ordered_guided_start(void);

void PRE_GOMP_loop_ull_ordered_runtime_start(void);
void POST_GOMP_loop_ull_ordered_runtime_start(void);

void PRE_GOMP_loop_ull_ordered_start(void);
void POST_GOMP_loop_ull_ordered_start(void);

void PRE_GOMP_loop_ull_static_next(void);
void POST_GOMP_loop_ull_static_next(void);

void PRE_GOMP_loop_ull_dynamic_next(void);
void POST_GOMP_loop_ull_dynamic_next(void);

void PRE_GOMP_loop_ull_guided_next(void);
void POST_GOMP_loop_ull_guided_next(void);

void PRE_GOMP_loop_ull_runtime_next(void);
void POST_GOMP_loop_ull_runtime_next(void);

void PRE_GOMP_loop_ull_nonmonotonic_dynamic_next(void);
void POST_GOMP_loop_ull_nonmonotonic_dynamic_next(void);

void PRE_GOMP_loop_ull_nonmonotonic_guided_next(void);
void POST_GOMP_loop_ull_nonmonotonic_guided_next(void);

void PRE_GOMP_loop_ull_nonmonotonic_runtime_next(void);
void POST_GOMP_loop_ull_nonmonotonic_runtime_next(void);

void PRE_GOMP_loop_ull_maybe_nonmonotonic_runtime_next(void);
void POST_GOMP_loop_ull_maybe_nonmonotonic_runtime_next(void);

void PRE_GOMP_loop_ull_ordered_static_next(void);
void POST_GOMP_loop_ull_ordered_static_next(void);

void PRE_GOMP_loop_ull_ordered_dynamic_next(void);
void POST_GOMP_loop_ull_ordered_dynamic_next(void);

void PRE_GOMP_loop_ull_ordered_guided_next(void);
void POST_GOMP_loop_ull_ordered_guided_next(void);

void PRE_GOMP_loop_ull_ordered_runtime_next(void);
void POST_GOMP_loop_ull_ordered_runtime_next(void);

void PRE_GOMP_loop_ull_doacross_static_start(void);
void POST_GOMP_loop_ull_doacross_static_start(void);

void PRE_GOMP_loop_ull_doacross_dynamic_start(void);
void POST_GOMP_loop_ull_doacross_dynamic_start(void);

void PRE_GOMP_loop_ull_doacross_guided_start(void);
void POST_GOMP_loop_ull_doacross_guided_start(void);

void PRE_GOMP_loop_ull_doacross_runtime_start(void);
void POST_GOMP_loop_ull_doacross_runtime_start(void);

void PRE_GOMP_loop_ull_doacross_start(void);
void POST_GOMP_loop_ull_doacross_start(void);

void PRE_GOMP_ordered_start(void);
void POST_GOMP_ordered_start(void);

void PRE_GOMP_ordered_end(void);
void POST_GOMP_ordered_end(void);

void PRE_GOMP_doacross_post(void);
void POST_GOMP_doacross_post(void);

void PRE_GOMP_doacross_wait(void);
void POST_GOMP_doacross_wait(void);

void PRE_GOMP_doacross_ull_post(void);
void POST_GOMP_doacross_ull_post(void);

void PRE_GOMP_doacross_ull_wait(void);
void POST_GOMP_doacross_ull_wait(void);

void PRE_GOMP_parallel_start(void);
void POST_GOMP_parallel_start(void);

void PRE_GOMP_parallel_end(void);
void POST_GOMP_parallel_end(void);

void PRE_GOMP_parallel(void);
void POST_GOMP_parallel(void);

void PRE_GOMP_parallel_reductions(void);
void POST_GOMP_parallel_reductions(void);

void PRE_GOMP_cancel(void);
void POST_GOMP_cancel(void);

void PRE_GOMP_cancellation_point(void);
void POST_GOMP_cancellation_point(void);

void PRE_GOMP_task(void);
void POST_GOMP_task(void);

void PRE_GOMP_taskloop(void);
void POST_GOMP_taskloop(void);

void PRE_GOMP_taskloop_ull(void);
void POST_GOMP_taskloop_ull(void);

void PRE_GOMP_taskwait(void);
void POST_GOMP_taskwait(void);

void PRE_GOMP_taskwait_depend(void);
void POST_GOMP_taskwait_depend(void);

void PRE_GOMP_taskyield(void);
void POST_GOMP_taskyield(void);

void PRE_GOMP_taskgroup_start(void);
void POST_GOMP_taskgroup_start(void);

void PRE_GOMP_taskgroup_end(void);
void POST_GOMP_taskgroup_end(void);

void PRE_GOMP_taskgroup_reduction_register(void);
void POST_GOMP_taskgroup_reduction_register(void);

void PRE_GOMP_taskgroup_reduction_unregister(void);
void POST_GOMP_taskgroup_reduction_unregister(void);

void PRE_GOMP_task_reduction_remap(void);
void POST_GOMP_task_reduction_remap(void);

void PRE_GOMP_workshare_task_reduction_unregister(void);
void POST_GOMP_workshare_task_reduction_unregister(void);

void PRE_GOMP_sections_start(void);
void POST_GOMP_sections_start(void);

void PRE_GOMP_sections2_start(void);
void POST_GOMP_sections2_start(void);

void PRE_GOMP_sections_next(void);
void POST_GOMP_sections_next(void);

void PRE_GOMP_parallel_sections_start(void);
void POST_GOMP_parallel_sections_start(void);

void PRE_GOMP_parallel_sections(void);
void POST_GOMP_parallel_sections(void);

void PRE_GOMP_sections_end(void);
void POST_GOMP_sections_end(void);

void PRE_GOMP_sections_end_nowait(void);
void POST_GOMP_sections_end_nowait(void);

void PRE_GOMP_sections_end_cancel(void);
void POST_GOMP_sections_end_cancel(void);

void PRE_GOMP_single_start(void);
void POST_GOMP_single_start(void);

void PRE_GOMP_single_copy_end(void);
void POST_GOMP_single_copy_end(void);

void PRE_GOMP_scope_start(void);
void POST_GOMP_scope_start(void);

void PRE_GOMP_target(void);
void POST_GOMP_target(void);

void PRE_GOMP_target_ext(void);
void POST_GOMP_target_ext(void);

void PRE_GOMP_target_data(void);
void POST_GOMP_target_data(void);

void PRE_GOMP_target_data_ext(void);
void POST_GOMP_target_data_ext(void);

void PRE_GOMP_target_end_data(void);
void POST_GOMP_target_end_data(void);

void PRE_GOMP_target_update(void);
void POST_GOMP_target_update(void);

void PRE_GOMP_target_update_ext(void);
void POST_GOMP_target_update_ext(void);

void PRE_GOMP_target_enter_exit_data(void);
void POST_GOMP_target_enter_exit_data(void);

void PRE_GOMP_teams(void);
void POST_GOMP_teams(void);

void PRE_GOMP_teams4(void);
void POST_GOMP_teams4(void);

void PRE_GOMP_teams_reg(void);
void POST_GOMP_teams_reg(void);

void PRE_GOMP_free(void);
void POST_GOMP_free(void);

void PRE_GOMP_warning(void);
void POST_GOMP_warning(void);

void PRE_GOMP_error(void);
void POST_GOMP_error(void);

#ifdef __cplusplus
}
#endif

#endif /* PREPOSTDEF_H */