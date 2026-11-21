/* Gerado por update_hookomp.py a partir do LLVM llvmorg-23.1.6. Não edite à mão. */

#ifndef PREPOSTDEF_KMPC_H
#define PREPOSTDEF_KMPC_H

#ifdef __cplusplus
extern "C" {
#endif

void PRE_kmpc_init_allocator(void);
void POST_kmpc_init_allocator(void);

void PRE_kmpc_destroy_allocator(void);
void POST_kmpc_destroy_allocator(void);

void PRE_kmpc_set_default_allocator(void);
void POST_kmpc_set_default_allocator(void);

void PRE_kmpc_get_default_allocator(void);
void POST_kmpc_get_default_allocator(void);

void PRE_kmpc_alloc(void);
void POST_kmpc_alloc(void);

void PRE_kmpc_aligned_alloc(void);
void POST_kmpc_aligned_alloc(void);

void PRE_kmpc_calloc(void);
void POST_kmpc_calloc(void);

void PRE_kmpc_realloc(void);
void POST_kmpc_realloc(void);

void PRE_kmpc_free(void);
void POST_kmpc_free(void);

void PRE_kmpc_dispatch_init_4(void);
void POST_kmpc_dispatch_init_4(void);

void PRE_kmpc_dispatch_init_4u(void);
void POST_kmpc_dispatch_init_4u(void);

void PRE_kmpc_dispatch_init_8(void);
void POST_kmpc_dispatch_init_8(void);

void PRE_kmpc_dispatch_init_8u(void);
void POST_kmpc_dispatch_init_8u(void);

void PRE_kmpc_dispatch_next_4(void);
void POST_kmpc_dispatch_next_4(void);

void PRE_kmpc_dispatch_next_4u(void);
void POST_kmpc_dispatch_next_4u(void);

void PRE_kmpc_dispatch_next_8(void);
void POST_kmpc_dispatch_next_8(void);

void PRE_kmpc_dispatch_next_8u(void);
void POST_kmpc_dispatch_next_8u(void);

void PRE_kmpc_dispatch_fini_4(void);
void POST_kmpc_dispatch_fini_4(void);

void PRE_kmpc_dispatch_fini_8(void);
void POST_kmpc_dispatch_fini_8(void);

void PRE_kmpc_dispatch_fini_4u(void);
void POST_kmpc_dispatch_fini_4u(void);

void PRE_kmpc_dispatch_fini_8u(void);
void POST_kmpc_dispatch_fini_8u(void);

void PRE_kmpc_dispatch_deinit(void);
void POST_kmpc_dispatch_deinit(void);

void PRE_kmpc_invoke_task_func(void);
void POST_kmpc_invoke_task_func(void);

void PRE_kmpc_task_allow_completion_event(void);
void POST_kmpc_task_allow_completion_event(void);

void PRE_kmpc_begin(void);
void POST_kmpc_begin(void);

void PRE_kmpc_end(void);
void POST_kmpc_end(void);

void PRE_kmpc_threadprivate_register_vec(void);
void POST_kmpc_threadprivate_register_vec(void);

void PRE_kmpc_threadprivate_register(void);
void POST_kmpc_threadprivate_register(void);

void PRE_kmpc_threadprivate(void);
void POST_kmpc_threadprivate(void);

void PRE_kmpc_global_thread_num(void);
void POST_kmpc_global_thread_num(void);

void PRE_kmpc_global_num_threads(void);
void POST_kmpc_global_num_threads(void);

void PRE_kmpc_bound_thread_num(void);
void POST_kmpc_bound_thread_num(void);

void PRE_kmpc_bound_num_threads(void);
void POST_kmpc_bound_num_threads(void);

void PRE_kmpc_ok_to_fork(void);
void POST_kmpc_ok_to_fork(void);

void PRE_kmpc_fork_call(void);
void POST_kmpc_fork_call(void);

void PRE_kmpc_fork_call_if(void);
void POST_kmpc_fork_call_if(void);

void PRE_kmpc_serialized_parallel(void);
void POST_kmpc_serialized_parallel(void);

void PRE_kmpc_end_serialized_parallel(void);
void POST_kmpc_end_serialized_parallel(void);

void PRE_kmpc_flush(void);
void POST_kmpc_flush(void);

void PRE_kmpc_barrier(void);
void POST_kmpc_barrier(void);

void PRE_kmpc_master(void);
void POST_kmpc_master(void);

void PRE_kmpc_end_master(void);
void POST_kmpc_end_master(void);

void PRE_kmpc_masked(void);
void POST_kmpc_masked(void);

void PRE_kmpc_end_masked(void);
void POST_kmpc_end_masked(void);

void PRE_kmpc_ordered(void);
void POST_kmpc_ordered(void);

void PRE_kmpc_end_ordered(void);
void POST_kmpc_end_ordered(void);

void PRE_kmpc_critical(void);
void POST_kmpc_critical(void);

void PRE_kmpc_end_critical(void);
void POST_kmpc_end_critical(void);

void PRE_kmpc_critical_with_hint(void);
void POST_kmpc_critical_with_hint(void);

void PRE_kmpc_barrier_master(void);
void POST_kmpc_barrier_master(void);

void PRE_kmpc_end_barrier_master(void);
void POST_kmpc_end_barrier_master(void);

void PRE_kmpc_barrier_master_nowait(void);
void POST_kmpc_barrier_master_nowait(void);

void PRE_kmpc_single(void);
void POST_kmpc_single(void);

void PRE_kmpc_end_single(void);
void POST_kmpc_end_single(void);

void PRE_kmpc_sections_init(void);
void POST_kmpc_sections_init(void);

void PRE_kmpc_next_section(void);
void POST_kmpc_next_section(void);

void PRE_kmpc_end_sections(void);
void POST_kmpc_end_sections(void);

void PRE_kmpc_for_static_fini(void);
void POST_kmpc_for_static_fini(void);

void PRE_kmpc_copyprivate(void);
void POST_kmpc_copyprivate(void);

void PRE_kmpc_copyprivate_light(void);
void POST_kmpc_copyprivate_light(void);

void PRE_kmpc_omp_task(void);
void POST_kmpc_omp_task(void);

void PRE_kmpc_omp_task_alloc(void);
void POST_kmpc_omp_task_alloc(void);

void PRE_kmpc_omp_target_task_alloc(void);
void POST_kmpc_omp_target_task_alloc(void);

void PRE_kmpc_omp_task_begin_if0(void);
void POST_kmpc_omp_task_begin_if0(void);

void PRE_kmpc_omp_task_complete_if0(void);
void POST_kmpc_omp_task_complete_if0(void);

void PRE_kmpc_omp_task_parts(void);
void POST_kmpc_omp_task_parts(void);

void PRE_kmpc_omp_taskwait(void);
void POST_kmpc_omp_taskwait(void);

void PRE_kmpc_omp_taskyield(void);
void POST_kmpc_omp_taskyield(void);

void PRE_kmpc_omp_task_begin(void);
void POST_kmpc_omp_task_begin(void);

void PRE_kmpc_omp_task_complete(void);
void POST_kmpc_omp_task_complete(void);

void PRE_kmpc_taskgroup(void);
void POST_kmpc_taskgroup(void);

void PRE_kmpc_end_taskgroup(void);
void POST_kmpc_end_taskgroup(void);

void PRE_kmpc_omp_task_with_deps(void);
void POST_kmpc_omp_task_with_deps(void);

void PRE_kmpc_task_get_depnode(void);
void POST_kmpc_task_get_depnode(void);

void PRE_kmpc_task_get_successors(void);
void POST_kmpc_task_get_successors(void);

void PRE_kmpc_omp_wait_deps(void);
void POST_kmpc_omp_wait_deps(void);

void PRE_kmpc_omp_taskwait_deps_51(void);
void POST_kmpc_omp_taskwait_deps_51(void);

void PRE_kmpc_cancel(void);
void POST_kmpc_cancel(void);

void PRE_kmpc_cancellationpoint(void);
void POST_kmpc_cancellationpoint(void);

void PRE_kmpc_cancel_barrier(void);
void POST_kmpc_cancel_barrier(void);

void PRE_kmpc_proxy_task_completed(void);
void POST_kmpc_proxy_task_completed(void);

void PRE_kmpc_proxy_task_completed_ooo(void);
void POST_kmpc_proxy_task_completed_ooo(void);

void PRE_kmpc_taskloop(void);
void POST_kmpc_taskloop(void);

void PRE_kmpc_taskloop_5(void);
void POST_kmpc_taskloop_5(void);

void PRE_kmpc_task_reduction_init(void);
void POST_kmpc_task_reduction_init(void);

void PRE_kmpc_taskred_init(void);
void POST_kmpc_taskred_init(void);

void PRE_kmpc_task_reduction_get_th_data(void);
void POST_kmpc_task_reduction_get_th_data(void);

void PRE_kmpc_task_reduction_modifier_init(void);
void POST_kmpc_task_reduction_modifier_init(void);

void PRE_kmpc_taskred_modifier_init(void);
void POST_kmpc_taskred_modifier_init(void);

void PRE_kmpc_task_reduction_modifier_fini(void);
void POST_kmpc_task_reduction_modifier_fini(void);

void PRE_kmpc_omp_reg_task_with_affinity(void);
void POST_kmpc_omp_reg_task_with_affinity(void);

void PRE_kmpc_omp_get_target_async_handle_ptr(void);
void POST_kmpc_omp_get_target_async_handle_ptr(void);

void PRE_kmpc_omp_has_task_team(void);
void POST_kmpc_omp_has_task_team(void);

void PRE_kmpc_init_lock(void);
void POST_kmpc_init_lock(void);

void PRE_kmpc_init_nest_lock(void);
void POST_kmpc_init_nest_lock(void);

void PRE_kmpc_destroy_lock(void);
void POST_kmpc_destroy_lock(void);

void PRE_kmpc_destroy_nest_lock(void);
void POST_kmpc_destroy_nest_lock(void);

void PRE_kmpc_set_lock(void);
void POST_kmpc_set_lock(void);

void PRE_kmpc_set_nest_lock(void);
void POST_kmpc_set_nest_lock(void);

void PRE_kmpc_unset_lock(void);
void POST_kmpc_unset_lock(void);

void PRE_kmpc_unset_nest_lock(void);
void POST_kmpc_unset_nest_lock(void);

void PRE_kmpc_test_lock(void);
void POST_kmpc_test_lock(void);

void PRE_kmpc_test_nest_lock(void);
void POST_kmpc_test_nest_lock(void);

void PRE_kmpc_init_lock_with_hint(void);
void POST_kmpc_init_lock_with_hint(void);

void PRE_kmpc_init_nest_lock_with_hint(void);
void POST_kmpc_init_nest_lock_with_hint(void);

void PRE_kmpc_start_record_task(void);
void POST_kmpc_start_record_task(void);

void PRE_kmpc_end_record_task(void);
void POST_kmpc_end_record_task(void);

void PRE_kmpc_reduce_nowait(void);
void POST_kmpc_reduce_nowait(void);

void PRE_kmpc_end_reduce_nowait(void);
void POST_kmpc_end_reduce_nowait(void);

void PRE_kmpc_reduce(void);
void POST_kmpc_reduce(void);

void PRE_kmpc_end_reduce(void);
void POST_kmpc_end_reduce(void);

void PRE_kmpc_get_taskid(void);
void POST_kmpc_get_taskid(void);

void PRE_kmpc_get_parent_taskid(void);
void POST_kmpc_get_parent_taskid(void);

void PRE_kmpc_in_parallel(void);
void POST_kmpc_in_parallel(void);

void PRE_kmpc_pop_num_threads(void);
void POST_kmpc_pop_num_threads(void);

void PRE_kmpc_push_num_threads(void);
void POST_kmpc_push_num_threads(void);

void PRE_kmpc_push_num_threads_strict(void);
void POST_kmpc_push_num_threads_strict(void);

void PRE_kmpc_push_num_threads_list(void);
void POST_kmpc_push_num_threads_list(void);

void PRE_kmpc_push_num_threads_list_strict(void);
void POST_kmpc_push_num_threads_list_strict(void);

void PRE_kmpc_push_proc_bind(void);
void POST_kmpc_push_proc_bind(void);

void PRE_kmpc_push_num_teams(void);
void POST_kmpc_push_num_teams(void);

void PRE_kmpc_set_thread_limit(void);
void POST_kmpc_set_thread_limit(void);

void PRE_kmpc_push_num_teams_51(void);
void POST_kmpc_push_num_teams_51(void);

void PRE_kmpc_fork_teams(void);
void POST_kmpc_fork_teams(void);

void PRE_kmpc_doacross_init(void);
void POST_kmpc_doacross_init(void);

void PRE_kmpc_doacross_wait(void);
void POST_kmpc_doacross_wait(void);

void PRE_kmpc_doacross_post(void);
void POST_kmpc_doacross_post(void);

void PRE_kmpc_doacross_fini(void);
void POST_kmpc_doacross_fini(void);

void PRE_kmpc_threadprivate_cached(void);
void POST_kmpc_threadprivate_cached(void);

void PRE_kmpc_get_target_offload(void);
void POST_kmpc_get_target_offload(void);

void PRE_kmpc_pause_resource(void);
void POST_kmpc_pause_resource(void);

void PRE_kmpc_error(void);
void POST_kmpc_error(void);

void PRE_kmpc_scope(void);
void POST_kmpc_scope(void);

void PRE_kmpc_end_scope(void);
void POST_kmpc_end_scope(void);

void PRE_kmpc_process_loop_nest_rectang(void);
void POST_kmpc_process_loop_nest_rectang(void);

void PRE_kmpc_calc_original_ivs_rectang(void);
void POST_kmpc_calc_original_ivs_rectang(void);

void PRE_kmpc_for_collapsed_init(void);
void POST_kmpc_for_collapsed_init(void);

void PRE_kmpc_atomic_fixed1_add(void);
void POST_kmpc_atomic_fixed1_add(void);

void PRE_kmpc_atomic_fixed1_andb(void);
void POST_kmpc_atomic_fixed1_andb(void);

void PRE_kmpc_atomic_fixed1_div(void);
void POST_kmpc_atomic_fixed1_div(void);

void PRE_kmpc_atomic_fixed1u_div(void);
void POST_kmpc_atomic_fixed1u_div(void);

void PRE_kmpc_atomic_fixed1_mul(void);
void POST_kmpc_atomic_fixed1_mul(void);

void PRE_kmpc_atomic_fixed1_orb(void);
void POST_kmpc_atomic_fixed1_orb(void);

void PRE_kmpc_atomic_fixed1_shl(void);
void POST_kmpc_atomic_fixed1_shl(void);

void PRE_kmpc_atomic_fixed1_shr(void);
void POST_kmpc_atomic_fixed1_shr(void);

void PRE_kmpc_atomic_fixed1u_shr(void);
void POST_kmpc_atomic_fixed1u_shr(void);

void PRE_kmpc_atomic_fixed1_sub(void);
void POST_kmpc_atomic_fixed1_sub(void);

void PRE_kmpc_atomic_fixed1_xor(void);
void POST_kmpc_atomic_fixed1_xor(void);

void PRE_kmpc_atomic_fixed2_add(void);
void POST_kmpc_atomic_fixed2_add(void);

void PRE_kmpc_atomic_fixed2_andb(void);
void POST_kmpc_atomic_fixed2_andb(void);

void PRE_kmpc_atomic_fixed2_div(void);
void POST_kmpc_atomic_fixed2_div(void);

void PRE_kmpc_atomic_fixed2u_div(void);
void POST_kmpc_atomic_fixed2u_div(void);

void PRE_kmpc_atomic_fixed2_mul(void);
void POST_kmpc_atomic_fixed2_mul(void);

void PRE_kmpc_atomic_fixed2_orb(void);
void POST_kmpc_atomic_fixed2_orb(void);

void PRE_kmpc_atomic_fixed2_shl(void);
void POST_kmpc_atomic_fixed2_shl(void);

void PRE_kmpc_atomic_fixed2_shr(void);
void POST_kmpc_atomic_fixed2_shr(void);

void PRE_kmpc_atomic_fixed2u_shr(void);
void POST_kmpc_atomic_fixed2u_shr(void);

void PRE_kmpc_atomic_fixed2_sub(void);
void POST_kmpc_atomic_fixed2_sub(void);

void PRE_kmpc_atomic_fixed2_xor(void);
void POST_kmpc_atomic_fixed2_xor(void);

void PRE_kmpc_atomic_fixed4_add(void);
void POST_kmpc_atomic_fixed4_add(void);

void PRE_kmpc_atomic_fixed4_sub(void);
void POST_kmpc_atomic_fixed4_sub(void);

void PRE_kmpc_atomic_float4_add(void);
void POST_kmpc_atomic_float4_add(void);

void PRE_kmpc_atomic_float4_sub(void);
void POST_kmpc_atomic_float4_sub(void);

void PRE_kmpc_atomic_fixed8_add(void);
void POST_kmpc_atomic_fixed8_add(void);

void PRE_kmpc_atomic_fixed8_sub(void);
void POST_kmpc_atomic_fixed8_sub(void);

void PRE_kmpc_atomic_float8_add(void);
void POST_kmpc_atomic_float8_add(void);

void PRE_kmpc_atomic_float8_sub(void);
void POST_kmpc_atomic_float8_sub(void);

void PRE_kmpc_atomic_fixed4_andb(void);
void POST_kmpc_atomic_fixed4_andb(void);

void PRE_kmpc_atomic_fixed4_div(void);
void POST_kmpc_atomic_fixed4_div(void);

void PRE_kmpc_atomic_fixed4u_div(void);
void POST_kmpc_atomic_fixed4u_div(void);

void PRE_kmpc_atomic_fixed4_mul(void);
void POST_kmpc_atomic_fixed4_mul(void);

void PRE_kmpc_atomic_fixed4_orb(void);
void POST_kmpc_atomic_fixed4_orb(void);

void PRE_kmpc_atomic_fixed4_shl(void);
void POST_kmpc_atomic_fixed4_shl(void);

void PRE_kmpc_atomic_fixed4_shr(void);
void POST_kmpc_atomic_fixed4_shr(void);

void PRE_kmpc_atomic_fixed4u_shr(void);
void POST_kmpc_atomic_fixed4u_shr(void);

void PRE_kmpc_atomic_fixed4_xor(void);
void POST_kmpc_atomic_fixed4_xor(void);

void PRE_kmpc_atomic_fixed8_andb(void);
void POST_kmpc_atomic_fixed8_andb(void);

void PRE_kmpc_atomic_fixed8_div(void);
void POST_kmpc_atomic_fixed8_div(void);

void PRE_kmpc_atomic_fixed8u_div(void);
void POST_kmpc_atomic_fixed8u_div(void);

void PRE_kmpc_atomic_fixed8_mul(void);
void POST_kmpc_atomic_fixed8_mul(void);

void PRE_kmpc_atomic_fixed8_orb(void);
void POST_kmpc_atomic_fixed8_orb(void);

void PRE_kmpc_atomic_fixed8_shl(void);
void POST_kmpc_atomic_fixed8_shl(void);

void PRE_kmpc_atomic_fixed8_shr(void);
void POST_kmpc_atomic_fixed8_shr(void);

void PRE_kmpc_atomic_fixed8u_shr(void);
void POST_kmpc_atomic_fixed8u_shr(void);

void PRE_kmpc_atomic_fixed8_xor(void);
void POST_kmpc_atomic_fixed8_xor(void);

void PRE_kmpc_atomic_float4_div(void);
void POST_kmpc_atomic_float4_div(void);

void PRE_kmpc_atomic_float4_mul(void);
void POST_kmpc_atomic_float4_mul(void);

void PRE_kmpc_atomic_float8_div(void);
void POST_kmpc_atomic_float8_div(void);

void PRE_kmpc_atomic_float8_mul(void);
void POST_kmpc_atomic_float8_mul(void);

void PRE_kmpc_atomic_fixed1_andl(void);
void POST_kmpc_atomic_fixed1_andl(void);

void PRE_kmpc_atomic_fixed1_orl(void);
void POST_kmpc_atomic_fixed1_orl(void);

void PRE_kmpc_atomic_fixed2_andl(void);
void POST_kmpc_atomic_fixed2_andl(void);

void PRE_kmpc_atomic_fixed2_orl(void);
void POST_kmpc_atomic_fixed2_orl(void);

void PRE_kmpc_atomic_fixed4_andl(void);
void POST_kmpc_atomic_fixed4_andl(void);

void PRE_kmpc_atomic_fixed4_orl(void);
void POST_kmpc_atomic_fixed4_orl(void);

void PRE_kmpc_atomic_fixed8_andl(void);
void POST_kmpc_atomic_fixed8_andl(void);

void PRE_kmpc_atomic_fixed8_orl(void);
void POST_kmpc_atomic_fixed8_orl(void);

void PRE_kmpc_atomic_fixed1_max(void);
void POST_kmpc_atomic_fixed1_max(void);

void PRE_kmpc_atomic_fixed1_min(void);
void POST_kmpc_atomic_fixed1_min(void);

void PRE_kmpc_atomic_fixed2_max(void);
void POST_kmpc_atomic_fixed2_max(void);

void PRE_kmpc_atomic_fixed2_min(void);
void POST_kmpc_atomic_fixed2_min(void);

void PRE_kmpc_atomic_fixed4_max(void);
void POST_kmpc_atomic_fixed4_max(void);

void PRE_kmpc_atomic_fixed4_min(void);
void POST_kmpc_atomic_fixed4_min(void);

void PRE_kmpc_atomic_fixed8_max(void);
void POST_kmpc_atomic_fixed8_max(void);

void PRE_kmpc_atomic_fixed8_min(void);
void POST_kmpc_atomic_fixed8_min(void);

void PRE_kmpc_atomic_float4_max(void);
void POST_kmpc_atomic_float4_max(void);

void PRE_kmpc_atomic_float4_min(void);
void POST_kmpc_atomic_float4_min(void);

void PRE_kmpc_atomic_float8_max(void);
void POST_kmpc_atomic_float8_max(void);

void PRE_kmpc_atomic_float8_min(void);
void POST_kmpc_atomic_float8_min(void);

void PRE_kmpc_atomic_float10_max(void);
void POST_kmpc_atomic_float10_max(void);

void PRE_kmpc_atomic_float10_min(void);
void POST_kmpc_atomic_float10_min(void);

void PRE_kmpc_atomic_fixed1_neqv(void);
void POST_kmpc_atomic_fixed1_neqv(void);

void PRE_kmpc_atomic_fixed2_neqv(void);
void POST_kmpc_atomic_fixed2_neqv(void);

void PRE_kmpc_atomic_fixed4_neqv(void);
void POST_kmpc_atomic_fixed4_neqv(void);

void PRE_kmpc_atomic_fixed8_neqv(void);
void POST_kmpc_atomic_fixed8_neqv(void);

void PRE_kmpc_atomic_fixed1_eqv(void);
void POST_kmpc_atomic_fixed1_eqv(void);

void PRE_kmpc_atomic_fixed2_eqv(void);
void POST_kmpc_atomic_fixed2_eqv(void);

void PRE_kmpc_atomic_fixed4_eqv(void);
void POST_kmpc_atomic_fixed4_eqv(void);

void PRE_kmpc_atomic_fixed8_eqv(void);
void POST_kmpc_atomic_fixed8_eqv(void);

void PRE_kmpc_atomic_float10_add(void);
void POST_kmpc_atomic_float10_add(void);

void PRE_kmpc_atomic_float10_sub(void);
void POST_kmpc_atomic_float10_sub(void);

void PRE_kmpc_atomic_float10_mul(void);
void POST_kmpc_atomic_float10_mul(void);

void PRE_kmpc_atomic_float10_div(void);
void POST_kmpc_atomic_float10_div(void);

void PRE_kmpc_atomic_cmplx4_add(void);
void POST_kmpc_atomic_cmplx4_add(void);

void PRE_kmpc_atomic_cmplx4_sub(void);
void POST_kmpc_atomic_cmplx4_sub(void);

void PRE_kmpc_atomic_cmplx4_mul(void);
void POST_kmpc_atomic_cmplx4_mul(void);

void PRE_kmpc_atomic_cmplx4_div(void);
void POST_kmpc_atomic_cmplx4_div(void);

void PRE_kmpc_atomic_cmplx8_add(void);
void POST_kmpc_atomic_cmplx8_add(void);

void PRE_kmpc_atomic_cmplx8_sub(void);
void POST_kmpc_atomic_cmplx8_sub(void);

void PRE_kmpc_atomic_cmplx8_mul(void);
void POST_kmpc_atomic_cmplx8_mul(void);

void PRE_kmpc_atomic_cmplx8_div(void);
void POST_kmpc_atomic_cmplx8_div(void);

void PRE_kmpc_atomic_cmplx10_add(void);
void POST_kmpc_atomic_cmplx10_add(void);

void PRE_kmpc_atomic_cmplx10_sub(void);
void POST_kmpc_atomic_cmplx10_sub(void);

void PRE_kmpc_atomic_cmplx10_mul(void);
void POST_kmpc_atomic_cmplx10_mul(void);

void PRE_kmpc_atomic_cmplx10_div(void);
void POST_kmpc_atomic_cmplx10_div(void);

void PRE_kmpc_atomic_fixed1_sub_rev(void);
void POST_kmpc_atomic_fixed1_sub_rev(void);

void PRE_kmpc_atomic_fixed1_div_rev(void);
void POST_kmpc_atomic_fixed1_div_rev(void);

void PRE_kmpc_atomic_fixed1u_div_rev(void);
void POST_kmpc_atomic_fixed1u_div_rev(void);

void PRE_kmpc_atomic_fixed1_shl_rev(void);
void POST_kmpc_atomic_fixed1_shl_rev(void);

void PRE_kmpc_atomic_fixed1_shr_rev(void);
void POST_kmpc_atomic_fixed1_shr_rev(void);

void PRE_kmpc_atomic_fixed1u_shr_rev(void);
void POST_kmpc_atomic_fixed1u_shr_rev(void);

void PRE_kmpc_atomic_fixed2_sub_rev(void);
void POST_kmpc_atomic_fixed2_sub_rev(void);

void PRE_kmpc_atomic_fixed2_div_rev(void);
void POST_kmpc_atomic_fixed2_div_rev(void);

void PRE_kmpc_atomic_fixed2u_div_rev(void);
void POST_kmpc_atomic_fixed2u_div_rev(void);

void PRE_kmpc_atomic_fixed2_shl_rev(void);
void POST_kmpc_atomic_fixed2_shl_rev(void);

void PRE_kmpc_atomic_fixed2_shr_rev(void);
void POST_kmpc_atomic_fixed2_shr_rev(void);

void PRE_kmpc_atomic_fixed2u_shr_rev(void);
void POST_kmpc_atomic_fixed2u_shr_rev(void);

void PRE_kmpc_atomic_fixed4_sub_rev(void);
void POST_kmpc_atomic_fixed4_sub_rev(void);

void PRE_kmpc_atomic_fixed4_div_rev(void);
void POST_kmpc_atomic_fixed4_div_rev(void);

void PRE_kmpc_atomic_fixed4u_div_rev(void);
void POST_kmpc_atomic_fixed4u_div_rev(void);

void PRE_kmpc_atomic_fixed4_shl_rev(void);
void POST_kmpc_atomic_fixed4_shl_rev(void);

void PRE_kmpc_atomic_fixed4_shr_rev(void);
void POST_kmpc_atomic_fixed4_shr_rev(void);

void PRE_kmpc_atomic_fixed4u_shr_rev(void);
void POST_kmpc_atomic_fixed4u_shr_rev(void);

void PRE_kmpc_atomic_fixed8_sub_rev(void);
void POST_kmpc_atomic_fixed8_sub_rev(void);

void PRE_kmpc_atomic_fixed8_div_rev(void);
void POST_kmpc_atomic_fixed8_div_rev(void);

void PRE_kmpc_atomic_fixed8u_div_rev(void);
void POST_kmpc_atomic_fixed8u_div_rev(void);

void PRE_kmpc_atomic_fixed8_shl_rev(void);
void POST_kmpc_atomic_fixed8_shl_rev(void);

void PRE_kmpc_atomic_fixed8_shr_rev(void);
void POST_kmpc_atomic_fixed8_shr_rev(void);

void PRE_kmpc_atomic_fixed8u_shr_rev(void);
void POST_kmpc_atomic_fixed8u_shr_rev(void);

void PRE_kmpc_atomic_float4_sub_rev(void);
void POST_kmpc_atomic_float4_sub_rev(void);

void PRE_kmpc_atomic_float4_div_rev(void);
void POST_kmpc_atomic_float4_div_rev(void);

void PRE_kmpc_atomic_float8_sub_rev(void);
void POST_kmpc_atomic_float8_sub_rev(void);

void PRE_kmpc_atomic_float8_div_rev(void);
void POST_kmpc_atomic_float8_div_rev(void);

void PRE_kmpc_atomic_float10_sub_rev(void);
void POST_kmpc_atomic_float10_sub_rev(void);

void PRE_kmpc_atomic_float10_div_rev(void);
void POST_kmpc_atomic_float10_div_rev(void);

void PRE_kmpc_atomic_cmplx4_sub_rev(void);
void POST_kmpc_atomic_cmplx4_sub_rev(void);

void PRE_kmpc_atomic_cmplx4_div_rev(void);
void POST_kmpc_atomic_cmplx4_div_rev(void);

void PRE_kmpc_atomic_cmplx8_sub_rev(void);
void POST_kmpc_atomic_cmplx8_sub_rev(void);

void PRE_kmpc_atomic_cmplx8_div_rev(void);
void POST_kmpc_atomic_cmplx8_div_rev(void);

void PRE_kmpc_atomic_cmplx10_sub_rev(void);
void POST_kmpc_atomic_cmplx10_sub_rev(void);

void PRE_kmpc_atomic_cmplx10_div_rev(void);
void POST_kmpc_atomic_cmplx10_div_rev(void);

void PRE_kmpc_atomic_fixed1_mul_float8(void);
void POST_kmpc_atomic_fixed1_mul_float8(void);

void PRE_kmpc_atomic_fixed1_div_float8(void);
void POST_kmpc_atomic_fixed1_div_float8(void);

void PRE_kmpc_atomic_fixed2_mul_float8(void);
void POST_kmpc_atomic_fixed2_mul_float8(void);

void PRE_kmpc_atomic_fixed2_div_float8(void);
void POST_kmpc_atomic_fixed2_div_float8(void);

void PRE_kmpc_atomic_fixed4_mul_float8(void);
void POST_kmpc_atomic_fixed4_mul_float8(void);

void PRE_kmpc_atomic_fixed4_div_float8(void);
void POST_kmpc_atomic_fixed4_div_float8(void);

void PRE_kmpc_atomic_fixed8_mul_float8(void);
void POST_kmpc_atomic_fixed8_mul_float8(void);

void PRE_kmpc_atomic_fixed8_div_float8(void);
void POST_kmpc_atomic_fixed8_div_float8(void);

void PRE_kmpc_atomic_float4_add_float8(void);
void POST_kmpc_atomic_float4_add_float8(void);

void PRE_kmpc_atomic_float4_sub_float8(void);
void POST_kmpc_atomic_float4_sub_float8(void);

void PRE_kmpc_atomic_float4_mul_float8(void);
void POST_kmpc_atomic_float4_mul_float8(void);

void PRE_kmpc_atomic_float4_div_float8(void);
void POST_kmpc_atomic_float4_div_float8(void);

void PRE_kmpc_atomic_cmplx4_add_cmplx8(void);
void POST_kmpc_atomic_cmplx4_add_cmplx8(void);

void PRE_kmpc_atomic_cmplx4_sub_cmplx8(void);
void POST_kmpc_atomic_cmplx4_sub_cmplx8(void);

void PRE_kmpc_atomic_cmplx4_mul_cmplx8(void);
void POST_kmpc_atomic_cmplx4_mul_cmplx8(void);

void PRE_kmpc_atomic_cmplx4_div_cmplx8(void);
void POST_kmpc_atomic_cmplx4_div_cmplx8(void);

void PRE_kmpc_atomic_1(void);
void POST_kmpc_atomic_1(void);

void PRE_kmpc_atomic_2(void);
void POST_kmpc_atomic_2(void);

void PRE_kmpc_atomic_4(void);
void POST_kmpc_atomic_4(void);

void PRE_kmpc_atomic_8(void);
void POST_kmpc_atomic_8(void);

void PRE_kmpc_atomic_10(void);
void POST_kmpc_atomic_10(void);

void PRE_kmpc_atomic_16(void);
void POST_kmpc_atomic_16(void);

void PRE_kmpc_atomic_20(void);
void POST_kmpc_atomic_20(void);

void PRE_kmpc_atomic_32(void);
void POST_kmpc_atomic_32(void);

void PRE_kmpc_atomic_fixed1_rd(void);
void POST_kmpc_atomic_fixed1_rd(void);

void PRE_kmpc_atomic_fixed2_rd(void);
void POST_kmpc_atomic_fixed2_rd(void);

void PRE_kmpc_atomic_fixed4_rd(void);
void POST_kmpc_atomic_fixed4_rd(void);

void PRE_kmpc_atomic_fixed8_rd(void);
void POST_kmpc_atomic_fixed8_rd(void);

void PRE_kmpc_atomic_float4_rd(void);
void POST_kmpc_atomic_float4_rd(void);

void PRE_kmpc_atomic_float8_rd(void);
void POST_kmpc_atomic_float8_rd(void);

void PRE_kmpc_atomic_float10_rd(void);
void POST_kmpc_atomic_float10_rd(void);

void PRE_kmpc_atomic_cmplx4_rd(void);
void POST_kmpc_atomic_cmplx4_rd(void);

void PRE_kmpc_atomic_cmplx8_rd(void);
void POST_kmpc_atomic_cmplx8_rd(void);

void PRE_kmpc_atomic_cmplx10_rd(void);
void POST_kmpc_atomic_cmplx10_rd(void);

void PRE_kmpc_atomic_fixed1_wr(void);
void POST_kmpc_atomic_fixed1_wr(void);

void PRE_kmpc_atomic_fixed2_wr(void);
void POST_kmpc_atomic_fixed2_wr(void);

void PRE_kmpc_atomic_fixed4_wr(void);
void POST_kmpc_atomic_fixed4_wr(void);

void PRE_kmpc_atomic_fixed8_wr(void);
void POST_kmpc_atomic_fixed8_wr(void);

void PRE_kmpc_atomic_float4_wr(void);
void POST_kmpc_atomic_float4_wr(void);

void PRE_kmpc_atomic_float8_wr(void);
void POST_kmpc_atomic_float8_wr(void);

void PRE_kmpc_atomic_float10_wr(void);
void POST_kmpc_atomic_float10_wr(void);

void PRE_kmpc_atomic_cmplx4_wr(void);
void POST_kmpc_atomic_cmplx4_wr(void);

void PRE_kmpc_atomic_cmplx8_wr(void);
void POST_kmpc_atomic_cmplx8_wr(void);

void PRE_kmpc_atomic_cmplx10_wr(void);
void POST_kmpc_atomic_cmplx10_wr(void);

void PRE_kmpc_atomic_fixed1_add_cpt(void);
void POST_kmpc_atomic_fixed1_add_cpt(void);

void PRE_kmpc_atomic_fixed1_andb_cpt(void);
void POST_kmpc_atomic_fixed1_andb_cpt(void);

void PRE_kmpc_atomic_fixed1_div_cpt(void);
void POST_kmpc_atomic_fixed1_div_cpt(void);

void PRE_kmpc_atomic_fixed1u_div_cpt(void);
void POST_kmpc_atomic_fixed1u_div_cpt(void);

void PRE_kmpc_atomic_fixed1_mul_cpt(void);
void POST_kmpc_atomic_fixed1_mul_cpt(void);

void PRE_kmpc_atomic_fixed1_orb_cpt(void);
void POST_kmpc_atomic_fixed1_orb_cpt(void);

void PRE_kmpc_atomic_fixed1_shl_cpt(void);
void POST_kmpc_atomic_fixed1_shl_cpt(void);

void PRE_kmpc_atomic_fixed1_shr_cpt(void);
void POST_kmpc_atomic_fixed1_shr_cpt(void);

void PRE_kmpc_atomic_fixed1u_shr_cpt(void);
void POST_kmpc_atomic_fixed1u_shr_cpt(void);

void PRE_kmpc_atomic_fixed1_sub_cpt(void);
void POST_kmpc_atomic_fixed1_sub_cpt(void);

void PRE_kmpc_atomic_fixed1_xor_cpt(void);
void POST_kmpc_atomic_fixed1_xor_cpt(void);

void PRE_kmpc_atomic_fixed2_add_cpt(void);
void POST_kmpc_atomic_fixed2_add_cpt(void);

void PRE_kmpc_atomic_fixed2_andb_cpt(void);
void POST_kmpc_atomic_fixed2_andb_cpt(void);

void PRE_kmpc_atomic_fixed2_div_cpt(void);
void POST_kmpc_atomic_fixed2_div_cpt(void);

void PRE_kmpc_atomic_fixed2u_div_cpt(void);
void POST_kmpc_atomic_fixed2u_div_cpt(void);

void PRE_kmpc_atomic_fixed2_mul_cpt(void);
void POST_kmpc_atomic_fixed2_mul_cpt(void);

void PRE_kmpc_atomic_fixed2_orb_cpt(void);
void POST_kmpc_atomic_fixed2_orb_cpt(void);

void PRE_kmpc_atomic_fixed2_shl_cpt(void);
void POST_kmpc_atomic_fixed2_shl_cpt(void);

void PRE_kmpc_atomic_fixed2_shr_cpt(void);
void POST_kmpc_atomic_fixed2_shr_cpt(void);

void PRE_kmpc_atomic_fixed2u_shr_cpt(void);
void POST_kmpc_atomic_fixed2u_shr_cpt(void);

void PRE_kmpc_atomic_fixed2_sub_cpt(void);
void POST_kmpc_atomic_fixed2_sub_cpt(void);

void PRE_kmpc_atomic_fixed2_xor_cpt(void);
void POST_kmpc_atomic_fixed2_xor_cpt(void);

void PRE_kmpc_atomic_fixed4_add_cpt(void);
void POST_kmpc_atomic_fixed4_add_cpt(void);

void PRE_kmpc_atomic_fixed4_sub_cpt(void);
void POST_kmpc_atomic_fixed4_sub_cpt(void);

void PRE_kmpc_atomic_float4_add_cpt(void);
void POST_kmpc_atomic_float4_add_cpt(void);

void PRE_kmpc_atomic_float4_sub_cpt(void);
void POST_kmpc_atomic_float4_sub_cpt(void);

void PRE_kmpc_atomic_fixed8_add_cpt(void);
void POST_kmpc_atomic_fixed8_add_cpt(void);

void PRE_kmpc_atomic_fixed8_sub_cpt(void);
void POST_kmpc_atomic_fixed8_sub_cpt(void);

void PRE_kmpc_atomic_float8_add_cpt(void);
void POST_kmpc_atomic_float8_add_cpt(void);

void PRE_kmpc_atomic_float8_sub_cpt(void);
void POST_kmpc_atomic_float8_sub_cpt(void);

void PRE_kmpc_atomic_fixed4_andb_cpt(void);
void POST_kmpc_atomic_fixed4_andb_cpt(void);

void PRE_kmpc_atomic_fixed4_div_cpt(void);
void POST_kmpc_atomic_fixed4_div_cpt(void);

void PRE_kmpc_atomic_fixed4u_div_cpt(void);
void POST_kmpc_atomic_fixed4u_div_cpt(void);

void PRE_kmpc_atomic_fixed4_mul_cpt(void);
void POST_kmpc_atomic_fixed4_mul_cpt(void);

void PRE_kmpc_atomic_fixed4_orb_cpt(void);
void POST_kmpc_atomic_fixed4_orb_cpt(void);

void PRE_kmpc_atomic_fixed4_shl_cpt(void);
void POST_kmpc_atomic_fixed4_shl_cpt(void);

void PRE_kmpc_atomic_fixed4_shr_cpt(void);
void POST_kmpc_atomic_fixed4_shr_cpt(void);

void PRE_kmpc_atomic_fixed4u_shr_cpt(void);
void POST_kmpc_atomic_fixed4u_shr_cpt(void);

void PRE_kmpc_atomic_fixed4_xor_cpt(void);
void POST_kmpc_atomic_fixed4_xor_cpt(void);

void PRE_kmpc_atomic_fixed8_andb_cpt(void);
void POST_kmpc_atomic_fixed8_andb_cpt(void);

void PRE_kmpc_atomic_fixed8_div_cpt(void);
void POST_kmpc_atomic_fixed8_div_cpt(void);

void PRE_kmpc_atomic_fixed8u_div_cpt(void);
void POST_kmpc_atomic_fixed8u_div_cpt(void);

void PRE_kmpc_atomic_fixed8_mul_cpt(void);
void POST_kmpc_atomic_fixed8_mul_cpt(void);

void PRE_kmpc_atomic_fixed8_orb_cpt(void);
void POST_kmpc_atomic_fixed8_orb_cpt(void);

void PRE_kmpc_atomic_fixed8_shl_cpt(void);
void POST_kmpc_atomic_fixed8_shl_cpt(void);

void PRE_kmpc_atomic_fixed8_shr_cpt(void);
void POST_kmpc_atomic_fixed8_shr_cpt(void);

void PRE_kmpc_atomic_fixed8u_shr_cpt(void);
void POST_kmpc_atomic_fixed8u_shr_cpt(void);

void PRE_kmpc_atomic_fixed8_xor_cpt(void);
void POST_kmpc_atomic_fixed8_xor_cpt(void);

void PRE_kmpc_atomic_float4_div_cpt(void);
void POST_kmpc_atomic_float4_div_cpt(void);

void PRE_kmpc_atomic_float4_mul_cpt(void);
void POST_kmpc_atomic_float4_mul_cpt(void);

void PRE_kmpc_atomic_float8_div_cpt(void);
void POST_kmpc_atomic_float8_div_cpt(void);

void PRE_kmpc_atomic_float8_mul_cpt(void);
void POST_kmpc_atomic_float8_mul_cpt(void);

void PRE_kmpc_atomic_fixed1_andl_cpt(void);
void POST_kmpc_atomic_fixed1_andl_cpt(void);

void PRE_kmpc_atomic_fixed1_orl_cpt(void);
void POST_kmpc_atomic_fixed1_orl_cpt(void);

void PRE_kmpc_atomic_fixed2_andl_cpt(void);
void POST_kmpc_atomic_fixed2_andl_cpt(void);

void PRE_kmpc_atomic_fixed2_orl_cpt(void);
void POST_kmpc_atomic_fixed2_orl_cpt(void);

void PRE_kmpc_atomic_fixed4_andl_cpt(void);
void POST_kmpc_atomic_fixed4_andl_cpt(void);

void PRE_kmpc_atomic_fixed4_orl_cpt(void);
void POST_kmpc_atomic_fixed4_orl_cpt(void);

void PRE_kmpc_atomic_fixed8_andl_cpt(void);
void POST_kmpc_atomic_fixed8_andl_cpt(void);

void PRE_kmpc_atomic_fixed8_orl_cpt(void);
void POST_kmpc_atomic_fixed8_orl_cpt(void);

void PRE_kmpc_atomic_fixed1_max_cpt(void);
void POST_kmpc_atomic_fixed1_max_cpt(void);

void PRE_kmpc_atomic_fixed1_min_cpt(void);
void POST_kmpc_atomic_fixed1_min_cpt(void);

void PRE_kmpc_atomic_fixed2_max_cpt(void);
void POST_kmpc_atomic_fixed2_max_cpt(void);

void PRE_kmpc_atomic_fixed2_min_cpt(void);
void POST_kmpc_atomic_fixed2_min_cpt(void);

void PRE_kmpc_atomic_fixed4_max_cpt(void);
void POST_kmpc_atomic_fixed4_max_cpt(void);

void PRE_kmpc_atomic_fixed4_min_cpt(void);
void POST_kmpc_atomic_fixed4_min_cpt(void);

void PRE_kmpc_atomic_fixed8_max_cpt(void);
void POST_kmpc_atomic_fixed8_max_cpt(void);

void PRE_kmpc_atomic_fixed8_min_cpt(void);
void POST_kmpc_atomic_fixed8_min_cpt(void);

void PRE_kmpc_atomic_float4_max_cpt(void);
void POST_kmpc_atomic_float4_max_cpt(void);

void PRE_kmpc_atomic_float4_min_cpt(void);
void POST_kmpc_atomic_float4_min_cpt(void);

void PRE_kmpc_atomic_float8_max_cpt(void);
void POST_kmpc_atomic_float8_max_cpt(void);

void PRE_kmpc_atomic_float8_min_cpt(void);
void POST_kmpc_atomic_float8_min_cpt(void);

void PRE_kmpc_atomic_float10_max_cpt(void);
void POST_kmpc_atomic_float10_max_cpt(void);

void PRE_kmpc_atomic_float10_min_cpt(void);
void POST_kmpc_atomic_float10_min_cpt(void);

void PRE_kmpc_atomic_fixed1_neqv_cpt(void);
void POST_kmpc_atomic_fixed1_neqv_cpt(void);

void PRE_kmpc_atomic_fixed2_neqv_cpt(void);
void POST_kmpc_atomic_fixed2_neqv_cpt(void);

void PRE_kmpc_atomic_fixed4_neqv_cpt(void);
void POST_kmpc_atomic_fixed4_neqv_cpt(void);

void PRE_kmpc_atomic_fixed8_neqv_cpt(void);
void POST_kmpc_atomic_fixed8_neqv_cpt(void);

void PRE_kmpc_atomic_fixed1_eqv_cpt(void);
void POST_kmpc_atomic_fixed1_eqv_cpt(void);

void PRE_kmpc_atomic_fixed2_eqv_cpt(void);
void POST_kmpc_atomic_fixed2_eqv_cpt(void);

void PRE_kmpc_atomic_fixed4_eqv_cpt(void);
void POST_kmpc_atomic_fixed4_eqv_cpt(void);

void PRE_kmpc_atomic_fixed8_eqv_cpt(void);
void POST_kmpc_atomic_fixed8_eqv_cpt(void);

void PRE_kmpc_atomic_float10_add_cpt(void);
void POST_kmpc_atomic_float10_add_cpt(void);

void PRE_kmpc_atomic_float10_sub_cpt(void);
void POST_kmpc_atomic_float10_sub_cpt(void);

void PRE_kmpc_atomic_float10_mul_cpt(void);
void POST_kmpc_atomic_float10_mul_cpt(void);

void PRE_kmpc_atomic_float10_div_cpt(void);
void POST_kmpc_atomic_float10_div_cpt(void);

void PRE_kmpc_atomic_cmplx4_add_cpt(void);
void POST_kmpc_atomic_cmplx4_add_cpt(void);

void PRE_kmpc_atomic_cmplx4_sub_cpt(void);
void POST_kmpc_atomic_cmplx4_sub_cpt(void);

void PRE_kmpc_atomic_cmplx4_mul_cpt(void);
void POST_kmpc_atomic_cmplx4_mul_cpt(void);

void PRE_kmpc_atomic_cmplx4_div_cpt(void);
void POST_kmpc_atomic_cmplx4_div_cpt(void);

void PRE_kmpc_atomic_cmplx8_add_cpt(void);
void POST_kmpc_atomic_cmplx8_add_cpt(void);

void PRE_kmpc_atomic_cmplx8_sub_cpt(void);
void POST_kmpc_atomic_cmplx8_sub_cpt(void);

void PRE_kmpc_atomic_cmplx8_mul_cpt(void);
void POST_kmpc_atomic_cmplx8_mul_cpt(void);

void PRE_kmpc_atomic_cmplx8_div_cpt(void);
void POST_kmpc_atomic_cmplx8_div_cpt(void);

void PRE_kmpc_atomic_cmplx10_add_cpt(void);
void POST_kmpc_atomic_cmplx10_add_cpt(void);

void PRE_kmpc_atomic_cmplx10_sub_cpt(void);
void POST_kmpc_atomic_cmplx10_sub_cpt(void);

void PRE_kmpc_atomic_cmplx10_mul_cpt(void);
void POST_kmpc_atomic_cmplx10_mul_cpt(void);

void PRE_kmpc_atomic_cmplx10_div_cpt(void);
void POST_kmpc_atomic_cmplx10_div_cpt(void);

void PRE_kmpc_atomic_start(void);
void POST_kmpc_atomic_start(void);

void PRE_kmpc_atomic_end(void);
void POST_kmpc_atomic_end(void);

void PRE_kmpc_atomic_fixed1_sub_cpt_rev(void);
void POST_kmpc_atomic_fixed1_sub_cpt_rev(void);

void PRE_kmpc_atomic_fixed1_div_cpt_rev(void);
void POST_kmpc_atomic_fixed1_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed1u_div_cpt_rev(void);
void POST_kmpc_atomic_fixed1u_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed1_shl_cpt_rev(void);
void POST_kmpc_atomic_fixed1_shl_cpt_rev(void);

void PRE_kmpc_atomic_fixed1_shr_cpt_rev(void);
void POST_kmpc_atomic_fixed1_shr_cpt_rev(void);

void PRE_kmpc_atomic_fixed1u_shr_cpt_rev(void);
void POST_kmpc_atomic_fixed1u_shr_cpt_rev(void);

void PRE_kmpc_atomic_fixed2_sub_cpt_rev(void);
void POST_kmpc_atomic_fixed2_sub_cpt_rev(void);

void PRE_kmpc_atomic_fixed2_div_cpt_rev(void);
void POST_kmpc_atomic_fixed2_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed2u_div_cpt_rev(void);
void POST_kmpc_atomic_fixed2u_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed2_shl_cpt_rev(void);
void POST_kmpc_atomic_fixed2_shl_cpt_rev(void);

void PRE_kmpc_atomic_fixed2_shr_cpt_rev(void);
void POST_kmpc_atomic_fixed2_shr_cpt_rev(void);

void PRE_kmpc_atomic_fixed2u_shr_cpt_rev(void);
void POST_kmpc_atomic_fixed2u_shr_cpt_rev(void);

void PRE_kmpc_atomic_fixed4_sub_cpt_rev(void);
void POST_kmpc_atomic_fixed4_sub_cpt_rev(void);

void PRE_kmpc_atomic_fixed4_div_cpt_rev(void);
void POST_kmpc_atomic_fixed4_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed4u_div_cpt_rev(void);
void POST_kmpc_atomic_fixed4u_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed4_shl_cpt_rev(void);
void POST_kmpc_atomic_fixed4_shl_cpt_rev(void);

void PRE_kmpc_atomic_fixed4_shr_cpt_rev(void);
void POST_kmpc_atomic_fixed4_shr_cpt_rev(void);

void PRE_kmpc_atomic_fixed4u_shr_cpt_rev(void);
void POST_kmpc_atomic_fixed4u_shr_cpt_rev(void);

void PRE_kmpc_atomic_fixed8_sub_cpt_rev(void);
void POST_kmpc_atomic_fixed8_sub_cpt_rev(void);

void PRE_kmpc_atomic_fixed8_div_cpt_rev(void);
void POST_kmpc_atomic_fixed8_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed8u_div_cpt_rev(void);
void POST_kmpc_atomic_fixed8u_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed8_shl_cpt_rev(void);
void POST_kmpc_atomic_fixed8_shl_cpt_rev(void);

void PRE_kmpc_atomic_fixed8_shr_cpt_rev(void);
void POST_kmpc_atomic_fixed8_shr_cpt_rev(void);

void PRE_kmpc_atomic_fixed8u_shr_cpt_rev(void);
void POST_kmpc_atomic_fixed8u_shr_cpt_rev(void);

void PRE_kmpc_atomic_float4_sub_cpt_rev(void);
void POST_kmpc_atomic_float4_sub_cpt_rev(void);

void PRE_kmpc_atomic_float4_div_cpt_rev(void);
void POST_kmpc_atomic_float4_div_cpt_rev(void);

void PRE_kmpc_atomic_float8_sub_cpt_rev(void);
void POST_kmpc_atomic_float8_sub_cpt_rev(void);

void PRE_kmpc_atomic_float8_div_cpt_rev(void);
void POST_kmpc_atomic_float8_div_cpt_rev(void);

void PRE_kmpc_atomic_float10_sub_cpt_rev(void);
void POST_kmpc_atomic_float10_sub_cpt_rev(void);

void PRE_kmpc_atomic_float10_div_cpt_rev(void);
void POST_kmpc_atomic_float10_div_cpt_rev(void);

void PRE_kmpc_atomic_cmplx4_sub_cpt_rev(void);
void POST_kmpc_atomic_cmplx4_sub_cpt_rev(void);

void PRE_kmpc_atomic_cmplx4_div_cpt_rev(void);
void POST_kmpc_atomic_cmplx4_div_cpt_rev(void);

void PRE_kmpc_atomic_cmplx8_sub_cpt_rev(void);
void POST_kmpc_atomic_cmplx8_sub_cpt_rev(void);

void PRE_kmpc_atomic_cmplx8_div_cpt_rev(void);
void POST_kmpc_atomic_cmplx8_div_cpt_rev(void);

void PRE_kmpc_atomic_cmplx10_sub_cpt_rev(void);
void POST_kmpc_atomic_cmplx10_sub_cpt_rev(void);

void PRE_kmpc_atomic_cmplx10_div_cpt_rev(void);
void POST_kmpc_atomic_cmplx10_div_cpt_rev(void);

void PRE_kmpc_atomic_fixed1_swp(void);
void POST_kmpc_atomic_fixed1_swp(void);

void PRE_kmpc_atomic_fixed2_swp(void);
void POST_kmpc_atomic_fixed2_swp(void);

void PRE_kmpc_atomic_fixed4_swp(void);
void POST_kmpc_atomic_fixed4_swp(void);

void PRE_kmpc_atomic_fixed8_swp(void);
void POST_kmpc_atomic_fixed8_swp(void);

void PRE_kmpc_atomic_float4_swp(void);
void POST_kmpc_atomic_float4_swp(void);

void PRE_kmpc_atomic_float8_swp(void);
void POST_kmpc_atomic_float8_swp(void);

void PRE_kmpc_atomic_float10_swp(void);
void POST_kmpc_atomic_float10_swp(void);

void PRE_kmpc_atomic_cmplx4_swp(void);
void POST_kmpc_atomic_cmplx4_swp(void);

void PRE_kmpc_atomic_cmplx8_swp(void);
void POST_kmpc_atomic_cmplx8_swp(void);

void PRE_kmpc_atomic_cmplx10_swp(void);
void POST_kmpc_atomic_cmplx10_swp(void);

void PRE_kmpc_atomic_bool_1_cas(void);
void POST_kmpc_atomic_bool_1_cas(void);

void PRE_kmpc_atomic_bool_2_cas(void);
void POST_kmpc_atomic_bool_2_cas(void);

void PRE_kmpc_atomic_bool_4_cas(void);
void POST_kmpc_atomic_bool_4_cas(void);

void PRE_kmpc_atomic_bool_8_cas(void);
void POST_kmpc_atomic_bool_8_cas(void);

void PRE_kmpc_atomic_val_1_cas(void);
void POST_kmpc_atomic_val_1_cas(void);

void PRE_kmpc_atomic_val_2_cas(void);
void POST_kmpc_atomic_val_2_cas(void);

void PRE_kmpc_atomic_val_4_cas(void);
void POST_kmpc_atomic_val_4_cas(void);

void PRE_kmpc_atomic_val_8_cas(void);
void POST_kmpc_atomic_val_8_cas(void);

void PRE_kmpc_atomic_bool_1_cas_cpt(void);
void POST_kmpc_atomic_bool_1_cas_cpt(void);

void PRE_kmpc_atomic_bool_2_cas_cpt(void);
void POST_kmpc_atomic_bool_2_cas_cpt(void);

void PRE_kmpc_atomic_bool_4_cas_cpt(void);
void POST_kmpc_atomic_bool_4_cas_cpt(void);

void PRE_kmpc_atomic_bool_8_cas_cpt(void);
void POST_kmpc_atomic_bool_8_cas_cpt(void);

void PRE_kmpc_atomic_val_1_cas_cpt(void);
void POST_kmpc_atomic_val_1_cas_cpt(void);

void PRE_kmpc_atomic_val_2_cas_cpt(void);
void POST_kmpc_atomic_val_2_cas_cpt(void);

void PRE_kmpc_atomic_val_4_cas_cpt(void);
void POST_kmpc_atomic_val_4_cas_cpt(void);

void PRE_kmpc_atomic_val_8_cas_cpt(void);
void POST_kmpc_atomic_val_8_cas_cpt(void);

void PRE_kmpc_for_static_init_4(void);
void POST_kmpc_for_static_init_4(void);

void PRE_kmpc_for_static_init_4u(void);
void POST_kmpc_for_static_init_4u(void);

void PRE_kmpc_for_static_init_8(void);
void POST_kmpc_for_static_init_8(void);

void PRE_kmpc_for_static_init_8u(void);
void POST_kmpc_for_static_init_8u(void);

void PRE_kmpc_dist_for_static_init_4(void);
void POST_kmpc_dist_for_static_init_4(void);

void PRE_kmpc_dist_for_static_init_4u(void);
void POST_kmpc_dist_for_static_init_4u(void);

void PRE_kmpc_dist_for_static_init_8(void);
void POST_kmpc_dist_for_static_init_8(void);

void PRE_kmpc_dist_for_static_init_8u(void);
void POST_kmpc_dist_for_static_init_8u(void);

void PRE_kmpc_team_static_init_4(void);
void POST_kmpc_team_static_init_4(void);

void PRE_kmpc_team_static_init_4u(void);
void POST_kmpc_team_static_init_4u(void);

void PRE_kmpc_team_static_init_8(void);
void POST_kmpc_team_static_init_8(void);

void PRE_kmpc_team_static_init_8u(void);
void POST_kmpc_team_static_init_8u(void);

void PRE_kmpc_dist_dispatch_init_4(void);
void POST_kmpc_dist_dispatch_init_4(void);

void PRE_kmpc_dist_dispatch_init_4u(void);
void POST_kmpc_dist_dispatch_init_4u(void);

void PRE_kmpc_dist_dispatch_init_8(void);
void POST_kmpc_dist_dispatch_init_8(void);

void PRE_kmpc_dist_dispatch_init_8u(void);
void POST_kmpc_dist_dispatch_init_8u(void);

#ifdef __cplusplus
}
#endif

#endif /* PREPOSTDEF_KMPC_H */
