/* Gerado por update_hookomp.py a partir do LLVM llvmorg-23.1.6. Não edite à mão. */

#include "hookkmpc.h"

#ifdef HOOK_USE_LIBFFI
#include <ffi.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

omp_allocator_handle_t (*lib___kmpc_init_allocator) (int arg1, omp_memspace_handle_t arg2, int arg3, omp_alloctrait_t arg4[]) = NULL;
void (*lib___kmpc_destroy_allocator) (int arg1, omp_allocator_handle_t arg2) = NULL;
void (*lib___kmpc_set_default_allocator) (int arg1, omp_allocator_handle_t arg2) = NULL;
omp_allocator_handle_t (*lib___kmpc_get_default_allocator) (int arg1) = NULL;
void * (*lib___kmpc_alloc) (int arg1, size_t arg2, omp_allocator_handle_t arg3) = NULL;
void * (*lib___kmpc_aligned_alloc) (int arg1, size_t arg2, size_t arg3, omp_allocator_handle_t arg4) = NULL;
void * (*lib___kmpc_calloc) (int arg1, size_t arg2, size_t arg3, omp_allocator_handle_t arg4) = NULL;
void * (*lib___kmpc_realloc) (int arg1, void * arg2, size_t arg3, omp_allocator_handle_t arg4, omp_allocator_handle_t arg5) = NULL;
void (*lib___kmpc_free) (int arg1, void * arg2, omp_allocator_handle_t arg3) = NULL;
void (*lib___kmpc_dispatch_init_4) (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 arg4, kmp_int32 arg5, kmp_int32 arg6, kmp_int32 arg7) = NULL;
void (*lib___kmpc_dispatch_init_4u) (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_uint32 arg4, kmp_uint32 arg5, kmp_int32 arg6, kmp_int32 arg7) = NULL;
void (*lib___kmpc_dispatch_init_8) (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int64 arg4, kmp_int64 arg5, kmp_int64 arg6, kmp_int64 arg7) = NULL;
void (*lib___kmpc_dispatch_init_8u) (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_uint64 arg4, kmp_uint64 arg5, kmp_int64 arg6, kmp_int64 arg7) = NULL;
int (*lib___kmpc_dispatch_next_4) (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_int32 * arg4, kmp_int32 * arg5, kmp_int32 * arg6) = NULL;
int (*lib___kmpc_dispatch_next_4u) (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_uint32 * arg4, kmp_uint32 * arg5, kmp_int32 * arg6) = NULL;
int (*lib___kmpc_dispatch_next_8) (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_int64 * arg4, kmp_int64 * arg5, kmp_int64 * arg6) = NULL;
int (*lib___kmpc_dispatch_next_8u) (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_uint64 * arg4, kmp_uint64 * arg5, kmp_int64 * arg6) = NULL;
void (*lib___kmpc_dispatch_fini_4) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_dispatch_fini_8) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_dispatch_fini_4u) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_dispatch_fini_8u) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_dispatch_deinit) (ident_t * arg1, kmp_int32 arg2) = NULL;
int (*lib___kmpc_invoke_task_func) (int arg1) = NULL;
kmp_event_t * (*lib___kmpc_task_allow_completion_event) (ident_t * arg1, int arg2, kmp_task_t * arg3) = NULL;
void (*lib___kmpc_begin) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_end) (ident_t * arg1) = NULL;
void (*lib___kmpc_threadprivate_register_vec) (ident_t * arg1, void * arg2, kmpc_ctor_vec arg3, kmpc_cctor_vec arg4, kmpc_dtor_vec arg5, size_t arg6) = NULL;
void (*lib___kmpc_threadprivate_register) (ident_t * arg1, void * arg2, kmpc_ctor arg3, kmpc_cctor arg4, kmpc_dtor arg5) = NULL;
void * (*lib___kmpc_threadprivate) (ident_t * arg1, kmp_int32 arg2, void * arg3, size_t arg4) = NULL;
kmp_int32 (*lib___kmpc_global_thread_num) (ident_t * arg1) = NULL;
kmp_int32 (*lib___kmpc_global_num_threads) (ident_t * arg1) = NULL;
kmp_int32 (*lib___kmpc_bound_thread_num) (ident_t * arg1) = NULL;
kmp_int32 (*lib___kmpc_bound_num_threads) (ident_t * arg1) = NULL;
kmp_int32 (*lib___kmpc_ok_to_fork) (ident_t * arg1) = NULL;
void (*lib___kmpc_fork_call) (ident_t * arg1, kmp_int32 arg2, kmpc_micro arg3, ...) = NULL;
void (*lib___kmpc_fork_call_if) (ident_t * arg1, kmp_int32 arg2, kmpc_micro arg3, kmp_int32 arg4, void * arg5) = NULL;
void (*lib___kmpc_serialized_parallel) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_end_serialized_parallel) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_flush) (ident_t * arg1) = NULL;
void (*lib___kmpc_barrier) (ident_t * arg1, kmp_int32 arg2) = NULL;
kmp_int32 (*lib___kmpc_master) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_end_master) (ident_t * arg1, kmp_int32 arg2) = NULL;
kmp_int32 (*lib___kmpc_masked) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) = NULL;
void (*lib___kmpc_end_masked) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_ordered) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_end_ordered) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_critical) (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3) = NULL;
void (*lib___kmpc_end_critical) (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3) = NULL;
void (*lib___kmpc_critical_with_hint) (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3, uint32_t arg4) = NULL;
kmp_int32 (*lib___kmpc_barrier_master) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_end_barrier_master) (ident_t * arg1, kmp_int32 arg2) = NULL;
kmp_int32 (*lib___kmpc_barrier_master_nowait) (ident_t * arg1, kmp_int32 arg2) = NULL;
kmp_int32 (*lib___kmpc_single) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_end_single) (ident_t * arg1, kmp_int32 arg2) = NULL;
kmp_int32 (*lib___kmpc_sections_init) (ident_t * arg1, kmp_int32 arg2) = NULL;
kmp_int32 (*lib___kmpc_next_section) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) = NULL;
void (*lib___kmpc_end_sections) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_for_static_fini) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_copyprivate) (ident_t * arg1, kmp_int32 arg2, size_t arg3, void * arg4, void (*arg5)(void *, void *), kmp_int32 arg6) = NULL;
void * (*lib___kmpc_copyprivate_light) (ident_t * arg1, kmp_int32 arg2, void * arg3) = NULL;
kmp_int32 (*lib___kmpc_omp_task) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) = NULL;
kmp_task_t * (*lib___kmpc_omp_task_alloc) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, size_t arg4, size_t arg5, kmp_routine_entry_t arg6) = NULL;
kmp_task_t * (*lib___kmpc_omp_target_task_alloc) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, size_t arg4, size_t arg5, kmp_routine_entry_t arg6, kmp_int64 arg7) = NULL;
void (*lib___kmpc_omp_task_begin_if0) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) = NULL;
void (*lib___kmpc_omp_task_complete_if0) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) = NULL;
kmp_int32 (*lib___kmpc_omp_task_parts) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) = NULL;
kmp_int32 (*lib___kmpc_omp_taskwait) (ident_t * arg1, kmp_int32 arg2) = NULL;
kmp_int32 (*lib___kmpc_omp_taskyield) (ident_t * arg1, kmp_int32 arg2, int arg3) = NULL;
void (*lib___kmpc_omp_task_begin) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) = NULL;
void (*lib___kmpc_omp_task_complete) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) = NULL;
void (*lib___kmpc_taskgroup) (ident_t * arg1, int arg2) = NULL;
void (*lib___kmpc_end_taskgroup) (ident_t * arg1, int arg2) = NULL;
kmp_int32 (*lib___kmpc_omp_task_with_deps) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3, kmp_int32 arg4, kmp_depend_info_t * arg5, kmp_int32 arg6, kmp_depend_info_t * arg7) = NULL;
kmp_base_depnode_t * (*lib___kmpc_task_get_depnode) (kmp_task_t * arg1) = NULL;
kmp_depnode_list_t * (*lib___kmpc_task_get_successors) (kmp_task_t * arg1) = NULL;
void (*lib___kmpc_omp_wait_deps) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_depend_info_t * arg4, kmp_int32 arg5, kmp_depend_info_t * arg6) = NULL;
void (*lib___kmpc_omp_taskwait_deps_51) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_depend_info_t * arg4, kmp_int32 arg5, kmp_depend_info_t * arg6, kmp_int32 arg7) = NULL;
kmp_int32 (*lib___kmpc_cancel) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) = NULL;
kmp_int32 (*lib___kmpc_cancellationpoint) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) = NULL;
kmp_int32 (*lib___kmpc_cancel_barrier) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_proxy_task_completed) (kmp_int32 arg1, kmp_task_t * arg2) = NULL;
void (*lib___kmpc_proxy_task_completed_ooo) (kmp_task_t * arg1) = NULL;
void (*lib___kmpc_taskloop) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3, kmp_int32 arg4, kmp_uint64 * arg5, kmp_uint64 * arg6, kmp_int64 arg7, kmp_int32 arg8, kmp_int32 arg9, kmp_uint64 arg10, void * arg11) = NULL;
void (*lib___kmpc_taskloop_5) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3, kmp_int32 arg4, kmp_uint64 * arg5, kmp_uint64 * arg6, kmp_int64 arg7, kmp_int32 arg8, kmp_int32 arg9, kmp_uint64 arg10, kmp_int32 arg11, void * arg12) = NULL;
void * (*lib___kmpc_task_reduction_init) (int arg1, int arg2, void * arg3) = NULL;
void * (*lib___kmpc_taskred_init) (int arg1, int arg2, void * arg3) = NULL;
void * (*lib___kmpc_task_reduction_get_th_data) (int arg1, void * arg2, void * arg3) = NULL;
void * (*lib___kmpc_task_reduction_modifier_init) (ident_t * arg1, int arg2, int arg3, int arg4, void * arg5) = NULL;
void * (*lib___kmpc_taskred_modifier_init) (ident_t * arg1, int arg2, int arg3, int arg4, void * arg5) = NULL;
void (*lib___kmpc_task_reduction_modifier_fini) (ident_t * arg1, int arg2, int arg3) = NULL;
kmp_int32 (*lib___kmpc_omp_reg_task_with_affinity) (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3, kmp_int32 arg4, kmp_task_affinity_info_t * arg5) = NULL;
void ** (*lib___kmpc_omp_get_target_async_handle_ptr) (kmp_int32 arg1) = NULL;
bool (*lib___kmpc_omp_has_task_team) (kmp_int32 arg1) = NULL;
void (*lib___kmpc_init_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
void (*lib___kmpc_init_nest_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
void (*lib___kmpc_destroy_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
void (*lib___kmpc_destroy_nest_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
void (*lib___kmpc_set_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
void (*lib___kmpc_set_nest_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
void (*lib___kmpc_unset_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
void (*lib___kmpc_unset_nest_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
int (*lib___kmpc_test_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
int (*lib___kmpc_test_nest_lock) (ident_t * arg1, kmp_int32 arg2, void ** arg3) = NULL;
void (*lib___kmpc_init_lock_with_hint) (ident_t * arg1, kmp_int32 arg2, void ** arg3, uintptr_t arg4) = NULL;
void (*lib___kmpc_init_nest_lock_with_hint) (ident_t * arg1, kmp_int32 arg2, void ** arg3, uintptr_t arg4) = NULL;
kmp_int32 (*lib___kmpc_start_record_task) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_end_record_task) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 arg4) = NULL;
kmp_int32 (*lib___kmpc_reduce_nowait) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, size_t arg4, void * arg5, void (*arg6)(void *lhs_data, void *rhs_data), kmp_critical_name * arg7) = NULL;
void (*lib___kmpc_end_reduce_nowait) (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3) = NULL;
kmp_int32 (*lib___kmpc_reduce) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, size_t arg4, void * arg5, void (*arg6)(void *lhs_data, void *rhs_data), kmp_critical_name * arg7) = NULL;
void (*lib___kmpc_end_reduce) (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3) = NULL;
kmp_uint64 (*lib___kmpc_get_taskid) (void) = NULL;
kmp_uint64 (*lib___kmpc_get_parent_taskid) (void) = NULL;
kmp_int32 (*lib___kmpc_in_parallel) (ident_t * arg1) = NULL;
void (*lib___kmpc_pop_num_threads) (ident_t * arg1, kmp_int32 arg2) = NULL;
void (*lib___kmpc_push_num_threads) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) = NULL;
void (*lib___kmpc_push_num_threads_strict) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, int arg4, const char * arg5) = NULL;
void (*lib___kmpc_push_num_threads_list) (ident_t * arg1, kmp_int32 arg2, kmp_uint32 arg3, kmp_int32 * arg4) = NULL;
void (*lib___kmpc_push_num_threads_list_strict) (ident_t * arg1, kmp_int32 arg2, kmp_uint32 arg3, kmp_int32 * arg4, int arg5, const char * arg6) = NULL;
void (*lib___kmpc_push_proc_bind) (ident_t * arg1, kmp_int32 arg2, int arg3) = NULL;
void (*lib___kmpc_push_num_teams) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_set_thread_limit) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) = NULL;
void (*lib___kmpc_push_num_teams_51) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 arg4, kmp_int32 arg5) = NULL;
void (*lib___kmpc_fork_teams) (ident_t * arg1, kmp_int32 arg2, kmpc_micro arg3, ...) = NULL;
void (*lib___kmpc_doacross_init) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, const struct kmp_dim * arg4) = NULL;
void (*lib___kmpc_doacross_wait) (ident_t * arg1, kmp_int32 arg2, const kmp_int64 * arg3) = NULL;
void (*lib___kmpc_doacross_post) (ident_t * arg1, kmp_int32 arg2, const kmp_int64 * arg3) = NULL;
void (*lib___kmpc_doacross_fini) (ident_t * arg1, kmp_int32 arg2) = NULL;
void * (*lib___kmpc_threadprivate_cached) (ident_t * arg1, kmp_int32 arg2, void * arg3, size_t arg4, void *** arg5) = NULL;
int (*lib___kmpc_get_target_offload) (void) = NULL;
int (*lib___kmpc_pause_resource) (kmp_pause_status_t arg1) = NULL;
void (*lib___kmpc_error) (ident_t * arg1, int arg2, const char * arg3) = NULL;
void (*lib___kmpc_scope) (ident_t * arg1, kmp_int32 arg2, void * arg3) = NULL;
void (*lib___kmpc_end_scope) (ident_t * arg1, kmp_int32 arg2, void * arg3) = NULL;
kmp_loop_nest_iv_t (*lib___kmpc_process_loop_nest_rectang) (ident_t * arg1, kmp_int32 arg2, bounds_info_t * arg3, kmp_index_t arg4) = NULL;
void (*lib___kmpc_calc_original_ivs_rectang) (ident_t * arg1, kmp_loop_nest_iv_t arg2, const bounds_info_t * arg3, kmp_uint64 * arg4, kmp_index_t arg5) = NULL;
kmp_int32 (*lib___kmpc_for_collapsed_init) (ident_t * arg1, kmp_int32 arg2, bounds_info_t * arg3, bounds_info_t * arg4, kmp_index_t arg5, kmp_int32 * arg6) = NULL;
void (*lib___kmpc_atomic_fixed1_add) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_andb) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_div) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1u_div) (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_mul) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_orb) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_shl) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_shr) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1u_shr) (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_sub) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_xor) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_add) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_andb) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_div) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2u_div) (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_mul) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_orb) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_shl) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_shr) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2u_shr) (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_sub) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_xor) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_add) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_sub) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_float4_add) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) = NULL;
void (*lib___kmpc_atomic_float4_sub) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_add) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_sub) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_float8_add) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float8_sub) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_andb) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_div) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4u_div) (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_mul) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_orb) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_shl) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_shr) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4u_shr) (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_xor) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_andb) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_div) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8u_div) (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_mul) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_orb) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_shl) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_shr) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8u_shr) (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_xor) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_float4_div) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) = NULL;
void (*lib___kmpc_atomic_float4_mul) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) = NULL;
void (*lib___kmpc_atomic_float8_div) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float8_mul) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_andl) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_orl) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_andl) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_orl) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_andl) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_orl) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_andl) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_orl) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_max) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_min) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_max) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_min) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_max) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_min) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_max) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_min) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_float4_max) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) = NULL;
void (*lib___kmpc_atomic_float4_min) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) = NULL;
void (*lib___kmpc_atomic_float8_max) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float8_min) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float10_max) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_float10_min) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_neqv) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_neqv) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_neqv) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_neqv) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_eqv) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_eqv) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_eqv) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_eqv) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_float10_add) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_float10_sub) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_float10_mul) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_float10_div) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_add) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_sub) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_mul) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_div) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx8_add) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx8_sub) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx8_mul) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx8_div) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx10_add) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx10_sub) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx10_mul) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx10_div) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_sub_rev) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_div_rev) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1u_div_rev) (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_shl_rev) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_shr_rev) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed1u_shr_rev) (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_sub_rev) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_div_rev) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2u_div_rev) (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_shl_rev) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_shr_rev) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed2u_shr_rev) (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_sub_rev) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_div_rev) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4u_div_rev) (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_shl_rev) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_shr_rev) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4u_shr_rev) (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_sub_rev) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_div_rev) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8u_div_rev) (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_shl_rev) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_shr_rev) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8u_shr_rev) (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4) = NULL;
void (*lib___kmpc_atomic_float4_sub_rev) (ident_t * arg1, int arg2, float * arg3, float arg4) = NULL;
void (*lib___kmpc_atomic_float4_div_rev) (ident_t * arg1, int arg2, float * arg3, float arg4) = NULL;
void (*lib___kmpc_atomic_float8_sub_rev) (ident_t * arg1, int arg2, double * arg3, double arg4) = NULL;
void (*lib___kmpc_atomic_float8_div_rev) (ident_t * arg1, int arg2, double * arg3, double arg4) = NULL;
void (*lib___kmpc_atomic_float10_sub_rev) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_float10_div_rev) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_sub_rev) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_div_rev) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx8_sub_rev) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx8_div_rev) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx10_sub_rev) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx10_div_rev) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_mul_float8) (ident_t * arg1, int arg2, char * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed1_div_float8) (ident_t * arg1, int arg2, char * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_mul_float8) (ident_t * arg1, int arg2, short * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_div_float8) (ident_t * arg1, int arg2, short * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_mul_float8) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_div_float8) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_mul_float8) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_div_float8) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float4_add_float8) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float4_sub_float8) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float4_mul_float8) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float4_div_float8) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_add_cmplx8) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_sub_cmplx8) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_mul_cmplx8) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_div_cmplx8) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_1) (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) = NULL;
void (*lib___kmpc_atomic_2) (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) = NULL;
void (*lib___kmpc_atomic_4) (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) = NULL;
void (*lib___kmpc_atomic_8) (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) = NULL;
void (*lib___kmpc_atomic_10) (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) = NULL;
void (*lib___kmpc_atomic_16) (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) = NULL;
void (*lib___kmpc_atomic_20) (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) = NULL;
void (*lib___kmpc_atomic_32) (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) = NULL;
char (*lib___kmpc_atomic_fixed1_rd) (ident_t * arg1, int arg2, char * arg3) = NULL;
short (*lib___kmpc_atomic_fixed2_rd) (ident_t * arg1, int arg2, short * arg3) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_rd) (ident_t * arg1, int arg2, kmp_int32 * arg3) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_rd) (ident_t * arg1, int arg2, kmp_int64 * arg3) = NULL;
kmp_real32 (*lib___kmpc_atomic_float4_rd) (ident_t * arg1, int arg2, kmp_real32 * arg3) = NULL;
kmp_real64 (*lib___kmpc_atomic_float8_rd) (ident_t * arg1, int arg2, kmp_real64 * arg3) = NULL;
long double (*lib___kmpc_atomic_float10_rd) (ident_t * arg1, int arg2, long double * arg3) = NULL;
kmp_cmplx32 (*lib___kmpc_atomic_cmplx4_rd) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3) = NULL;
kmp_cmplx64 (*lib___kmpc_atomic_cmplx8_rd) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3) = NULL;
kmp_cmplx80 (*lib___kmpc_atomic_cmplx10_rd) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3) = NULL;
void (*lib___kmpc_atomic_fixed1_wr) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
void (*lib___kmpc_atomic_fixed2_wr) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
void (*lib___kmpc_atomic_fixed4_wr) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
void (*lib___kmpc_atomic_fixed8_wr) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
void (*lib___kmpc_atomic_float4_wr) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) = NULL;
void (*lib___kmpc_atomic_float8_wr) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) = NULL;
void (*lib___kmpc_atomic_float10_wr) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_wr) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx8_wr) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) = NULL;
void (*lib___kmpc_atomic_cmplx10_wr) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) = NULL;
char (*lib___kmpc_atomic_fixed1_add_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_andb_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_div_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
unsigned char (*lib___kmpc_atomic_fixed1u_div_cpt) (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_mul_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_orb_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_shl_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_shr_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
unsigned char (*lib___kmpc_atomic_fixed1u_shr_cpt) (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_sub_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_xor_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_add_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_andb_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_div_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
unsigned short (*lib___kmpc_atomic_fixed2u_div_cpt) (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_mul_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_orb_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_shl_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_shr_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
unsigned short (*lib___kmpc_atomic_fixed2u_shr_cpt) (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_sub_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_xor_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_add_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_sub_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_real32 (*lib___kmpc_atomic_float4_add_cpt) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) = NULL;
kmp_real32 (*lib___kmpc_atomic_float4_sub_cpt) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_add_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_sub_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_real64 (*lib___kmpc_atomic_float8_add_cpt) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) = NULL;
kmp_real64 (*lib___kmpc_atomic_float8_sub_cpt) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_andb_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_div_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_uint32 (*lib___kmpc_atomic_fixed4u_div_cpt) (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_mul_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_orb_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_shl_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_shr_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_uint32 (*lib___kmpc_atomic_fixed4u_shr_cpt) (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_xor_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_andb_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_div_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_uint64 (*lib___kmpc_atomic_fixed8u_div_cpt) (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_mul_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_orb_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_shl_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_shr_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_uint64 (*lib___kmpc_atomic_fixed8u_shr_cpt) (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_xor_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_real32 (*lib___kmpc_atomic_float4_div_cpt) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) = NULL;
kmp_real32 (*lib___kmpc_atomic_float4_mul_cpt) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) = NULL;
kmp_real64 (*lib___kmpc_atomic_float8_div_cpt) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) = NULL;
kmp_real64 (*lib___kmpc_atomic_float8_mul_cpt) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_andl_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_orl_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_andl_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_orl_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_andl_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_orl_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_andl_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_orl_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_max_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_min_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_max_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_min_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_max_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_min_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_max_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_min_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_real32 (*lib___kmpc_atomic_float4_max_cpt) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) = NULL;
kmp_real32 (*lib___kmpc_atomic_float4_min_cpt) (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) = NULL;
kmp_real64 (*lib___kmpc_atomic_float8_max_cpt) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) = NULL;
kmp_real64 (*lib___kmpc_atomic_float8_min_cpt) (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) = NULL;
long double (*lib___kmpc_atomic_float10_max_cpt) (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) = NULL;
long double (*lib___kmpc_atomic_float10_min_cpt) (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_neqv_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_neqv_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_neqv_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_neqv_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_eqv_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_eqv_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_eqv_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_eqv_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
long double (*lib___kmpc_atomic_float10_add_cpt) (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) = NULL;
long double (*lib___kmpc_atomic_float10_sub_cpt) (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) = NULL;
long double (*lib___kmpc_atomic_float10_mul_cpt) (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) = NULL;
long double (*lib___kmpc_atomic_float10_div_cpt) (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) = NULL;
void (*lib___kmpc_atomic_cmplx4_add_cpt) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) = NULL;
void (*lib___kmpc_atomic_cmplx4_sub_cpt) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) = NULL;
void (*lib___kmpc_atomic_cmplx4_mul_cpt) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) = NULL;
void (*lib___kmpc_atomic_cmplx4_div_cpt) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) = NULL;
kmp_cmplx64 (*lib___kmpc_atomic_cmplx8_add_cpt) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) = NULL;
kmp_cmplx64 (*lib___kmpc_atomic_cmplx8_sub_cpt) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) = NULL;
kmp_cmplx64 (*lib___kmpc_atomic_cmplx8_mul_cpt) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) = NULL;
kmp_cmplx64 (*lib___kmpc_atomic_cmplx8_div_cpt) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) = NULL;
kmp_cmplx80 (*lib___kmpc_atomic_cmplx10_add_cpt) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) = NULL;
kmp_cmplx80 (*lib___kmpc_atomic_cmplx10_sub_cpt) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) = NULL;
kmp_cmplx80 (*lib___kmpc_atomic_cmplx10_mul_cpt) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) = NULL;
kmp_cmplx80 (*lib___kmpc_atomic_cmplx10_div_cpt) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) = NULL;
void (*lib___kmpc_atomic_start) (void) = NULL;
void (*lib___kmpc_atomic_end) (void) = NULL;
char (*lib___kmpc_atomic_fixed1_sub_cpt_rev) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_div_cpt_rev) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
unsigned char (*lib___kmpc_atomic_fixed1u_div_cpt_rev) (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_shl_cpt_rev) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_shr_cpt_rev) (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) = NULL;
unsigned char (*lib___kmpc_atomic_fixed1u_shr_cpt_rev) (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_sub_cpt_rev) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_div_cpt_rev) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
unsigned short (*lib___kmpc_atomic_fixed2u_div_cpt_rev) (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_shl_cpt_rev) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
short (*lib___kmpc_atomic_fixed2_shr_cpt_rev) (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) = NULL;
unsigned short (*lib___kmpc_atomic_fixed2u_shr_cpt_rev) (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_sub_cpt_rev) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_div_cpt_rev) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_uint32 (*lib___kmpc_atomic_fixed4u_div_cpt_rev) (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_shl_cpt_rev) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_shr_cpt_rev) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) = NULL;
kmp_uint32 (*lib___kmpc_atomic_fixed4u_shr_cpt_rev) (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_sub_cpt_rev) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_div_cpt_rev) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_uint64 (*lib___kmpc_atomic_fixed8u_div_cpt_rev) (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_shl_cpt_rev) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_shr_cpt_rev) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) = NULL;
kmp_uint64 (*lib___kmpc_atomic_fixed8u_shr_cpt_rev) (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4, int arg5) = NULL;
float (*lib___kmpc_atomic_float4_sub_cpt_rev) (ident_t * arg1, int arg2, float * arg3, float arg4, int arg5) = NULL;
float (*lib___kmpc_atomic_float4_div_cpt_rev) (ident_t * arg1, int arg2, float * arg3, float arg4, int arg5) = NULL;
double (*lib___kmpc_atomic_float8_sub_cpt_rev) (ident_t * arg1, int arg2, double * arg3, double arg4, int arg5) = NULL;
double (*lib___kmpc_atomic_float8_div_cpt_rev) (ident_t * arg1, int arg2, double * arg3, double arg4, int arg5) = NULL;
long double (*lib___kmpc_atomic_float10_sub_cpt_rev) (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) = NULL;
long double (*lib___kmpc_atomic_float10_div_cpt_rev) (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) = NULL;
void (*lib___kmpc_atomic_cmplx4_sub_cpt_rev) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) = NULL;
void (*lib___kmpc_atomic_cmplx4_div_cpt_rev) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) = NULL;
kmp_cmplx64 (*lib___kmpc_atomic_cmplx8_sub_cpt_rev) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) = NULL;
kmp_cmplx64 (*lib___kmpc_atomic_cmplx8_div_cpt_rev) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) = NULL;
kmp_cmplx80 (*lib___kmpc_atomic_cmplx10_sub_cpt_rev) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) = NULL;
kmp_cmplx80 (*lib___kmpc_atomic_cmplx10_div_cpt_rev) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) = NULL;
char (*lib___kmpc_atomic_fixed1_swp) (ident_t * arg1, int arg2, char * arg3, char arg4) = NULL;
short (*lib___kmpc_atomic_fixed2_swp) (ident_t * arg1, int arg2, short * arg3, short arg4) = NULL;
kmp_int32 (*lib___kmpc_atomic_fixed4_swp) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) = NULL;
kmp_int64 (*lib___kmpc_atomic_fixed8_swp) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) = NULL;
float (*lib___kmpc_atomic_float4_swp) (ident_t * arg1, int arg2, float * arg3, float arg4) = NULL;
double (*lib___kmpc_atomic_float8_swp) (ident_t * arg1, int arg2, double * arg3, double arg4) = NULL;
long double (*lib___kmpc_atomic_float10_swp) (ident_t * arg1, int arg2, long double * arg3, long double arg4) = NULL;
void (*lib___kmpc_atomic_cmplx4_swp) (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5) = NULL;
kmp_cmplx64 (*lib___kmpc_atomic_cmplx8_swp) (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) = NULL;
kmp_cmplx80 (*lib___kmpc_atomic_cmplx10_swp) (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) = NULL;
bool (*lib___kmpc_atomic_bool_1_cas) (ident_t * arg1, int arg2, char * arg3, char arg4, char arg5) = NULL;
bool (*lib___kmpc_atomic_bool_2_cas) (ident_t * arg1, int arg2, short * arg3, short arg4, short arg5) = NULL;
bool (*lib___kmpc_atomic_bool_4_cas) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, kmp_int32 arg5) = NULL;
bool (*lib___kmpc_atomic_bool_8_cas) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, kmp_int64 arg5) = NULL;
char (*lib___kmpc_atomic_val_1_cas) (ident_t * arg1, int arg2, char * arg3, char arg4, char arg5) = NULL;
short (*lib___kmpc_atomic_val_2_cas) (ident_t * arg1, int arg2, short * arg3, short arg4, short arg5) = NULL;
kmp_int32 (*lib___kmpc_atomic_val_4_cas) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, kmp_int32 arg5) = NULL;
kmp_int64 (*lib___kmpc_atomic_val_8_cas) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, kmp_int64 arg5) = NULL;
bool (*lib___kmpc_atomic_bool_1_cas_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, char arg5, char * arg6) = NULL;
bool (*lib___kmpc_atomic_bool_2_cas_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, short arg5, short * arg6) = NULL;
bool (*lib___kmpc_atomic_bool_4_cas_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, kmp_int32 arg5, kmp_int32 * arg6) = NULL;
bool (*lib___kmpc_atomic_bool_8_cas_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, kmp_int64 arg5, kmp_int64 * arg6) = NULL;
char (*lib___kmpc_atomic_val_1_cas_cpt) (ident_t * arg1, int arg2, char * arg3, char arg4, char arg5, char * arg6) = NULL;
short (*lib___kmpc_atomic_val_2_cas_cpt) (ident_t * arg1, int arg2, short * arg3, short arg4, short arg5, short * arg6) = NULL;
kmp_int32 (*lib___kmpc_atomic_val_4_cas_cpt) (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, kmp_int32 arg5, kmp_int32 * arg6) = NULL;
kmp_int64 (*lib___kmpc_atomic_val_8_cas_cpt) (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, kmp_int64 arg5, kmp_int64 * arg6) = NULL;
void (*lib___kmpc_for_static_init_4) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_int32 * arg5, kmp_int32 * arg6, kmp_int32 * arg7, kmp_int32 arg8, kmp_int32 arg9) = NULL;
void (*lib___kmpc_for_static_init_4u) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_uint32 * arg5, kmp_uint32 * arg6, kmp_int32 * arg7, kmp_int32 arg8, kmp_int32 arg9) = NULL;
void (*lib___kmpc_for_static_init_8) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_int64 * arg5, kmp_int64 * arg6, kmp_int64 * arg7, kmp_int64 arg8, kmp_int64 arg9) = NULL;
void (*lib___kmpc_for_static_init_8u) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_uint64 * arg5, kmp_uint64 * arg6, kmp_int64 * arg7, kmp_int64 arg8, kmp_int64 arg9) = NULL;
void (*lib___kmpc_dist_for_static_init_4) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_int32 * arg5, kmp_int32 * arg6, kmp_int32 * arg7, kmp_int32 * arg8, kmp_int32 arg9, kmp_int32 arg10) = NULL;
void (*lib___kmpc_dist_for_static_init_4u) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_uint32 * arg5, kmp_uint32 * arg6, kmp_uint32 * arg7, kmp_int32 * arg8, kmp_int32 arg9, kmp_int32 arg10) = NULL;
void (*lib___kmpc_dist_for_static_init_8) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_int64 * arg5, kmp_int64 * arg6, kmp_int64 * arg7, kmp_int64 * arg8, kmp_int64 arg9, kmp_int64 arg10) = NULL;
void (*lib___kmpc_dist_for_static_init_8u) (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_uint64 * arg5, kmp_uint64 * arg6, kmp_uint64 * arg7, kmp_int64 * arg8, kmp_int64 arg9, kmp_int64 arg10) = NULL;
void (*lib___kmpc_team_static_init_4) (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_int32 * arg4, kmp_int32 * arg5, kmp_int32 * arg6, kmp_int32 arg7, kmp_int32 arg8) = NULL;
void (*lib___kmpc_team_static_init_4u) (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_uint32 * arg4, kmp_uint32 * arg5, kmp_int32 * arg6, kmp_int32 arg7, kmp_int32 arg8) = NULL;
void (*lib___kmpc_team_static_init_8) (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_int64 * arg4, kmp_int64 * arg5, kmp_int64 * arg6, kmp_int64 arg7, kmp_int64 arg8) = NULL;
void (*lib___kmpc_team_static_init_8u) (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_uint64 * arg4, kmp_uint64 * arg5, kmp_int64 * arg6, kmp_int64 arg7, kmp_int64 arg8) = NULL;
void (*lib___kmpc_dist_dispatch_init_4) (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 * arg4, kmp_int32 arg5, kmp_int32 arg6, kmp_int32 arg7, kmp_int32 arg8) = NULL;
void (*lib___kmpc_dist_dispatch_init_4u) (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 * arg4, kmp_uint32 arg5, kmp_uint32 arg6, kmp_int32 arg7, kmp_int32 arg8) = NULL;
void (*lib___kmpc_dist_dispatch_init_8) (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 * arg4, kmp_int64 arg5, kmp_int64 arg6, kmp_int64 arg7, kmp_int64 arg8) = NULL;
void (*lib___kmpc_dist_dispatch_init_8u) (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 * arg4, kmp_uint64 arg5, kmp_uint64 arg6, kmp_int64 arg7, kmp_int64 arg8) = NULL;

/* Default Weak Callbacks */
void __attribute__((weak)) PRE_kmpc_init_allocator(void) {}
void __attribute__((weak)) POST_kmpc_init_allocator(void) {}
void __attribute__((weak)) PRE_kmpc_destroy_allocator(void) {}
void __attribute__((weak)) POST_kmpc_destroy_allocator(void) {}
void __attribute__((weak)) PRE_kmpc_set_default_allocator(void) {}
void __attribute__((weak)) POST_kmpc_set_default_allocator(void) {}
void __attribute__((weak)) PRE_kmpc_get_default_allocator(void) {}
void __attribute__((weak)) POST_kmpc_get_default_allocator(void) {}
void __attribute__((weak)) PRE_kmpc_alloc(void) {}
void __attribute__((weak)) POST_kmpc_alloc(void) {}
void __attribute__((weak)) PRE_kmpc_aligned_alloc(void) {}
void __attribute__((weak)) POST_kmpc_aligned_alloc(void) {}
void __attribute__((weak)) PRE_kmpc_calloc(void) {}
void __attribute__((weak)) POST_kmpc_calloc(void) {}
void __attribute__((weak)) PRE_kmpc_realloc(void) {}
void __attribute__((weak)) POST_kmpc_realloc(void) {}
void __attribute__((weak)) PRE_kmpc_free(void) {}
void __attribute__((weak)) POST_kmpc_free(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_init_4(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_init_4(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_init_4u(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_init_4u(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_init_8(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_init_8(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_init_8u(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_init_8u(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_next_4(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_next_4(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_next_4u(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_next_4u(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_next_8(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_next_8(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_next_8u(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_next_8u(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_fini_4(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_fini_4(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_fini_8(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_fini_8(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_fini_4u(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_fini_4u(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_fini_8u(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_fini_8u(void) {}
void __attribute__((weak)) PRE_kmpc_dispatch_deinit(void) {}
void __attribute__((weak)) POST_kmpc_dispatch_deinit(void) {}
void __attribute__((weak)) PRE_kmpc_invoke_task_func(void) {}
void __attribute__((weak)) POST_kmpc_invoke_task_func(void) {}
void __attribute__((weak)) PRE_kmpc_task_allow_completion_event(void) {}
void __attribute__((weak)) POST_kmpc_task_allow_completion_event(void) {}
void __attribute__((weak)) PRE_kmpc_begin(void) {}
void __attribute__((weak)) POST_kmpc_begin(void) {}
void __attribute__((weak)) PRE_kmpc_end(void) {}
void __attribute__((weak)) POST_kmpc_end(void) {}
void __attribute__((weak)) PRE_kmpc_threadprivate_register_vec(void) {}
void __attribute__((weak)) POST_kmpc_threadprivate_register_vec(void) {}
void __attribute__((weak)) PRE_kmpc_threadprivate_register(void) {}
void __attribute__((weak)) POST_kmpc_threadprivate_register(void) {}
void __attribute__((weak)) PRE_kmpc_threadprivate(void) {}
void __attribute__((weak)) POST_kmpc_threadprivate(void) {}
void __attribute__((weak)) PRE_kmpc_global_thread_num(void) {}
void __attribute__((weak)) POST_kmpc_global_thread_num(void) {}
void __attribute__((weak)) PRE_kmpc_global_num_threads(void) {}
void __attribute__((weak)) POST_kmpc_global_num_threads(void) {}
void __attribute__((weak)) PRE_kmpc_bound_thread_num(void) {}
void __attribute__((weak)) POST_kmpc_bound_thread_num(void) {}
void __attribute__((weak)) PRE_kmpc_bound_num_threads(void) {}
void __attribute__((weak)) POST_kmpc_bound_num_threads(void) {}
void __attribute__((weak)) PRE_kmpc_ok_to_fork(void) {}
void __attribute__((weak)) POST_kmpc_ok_to_fork(void) {}
void __attribute__((weak)) PRE_kmpc_fork_call(void) {}
void __attribute__((weak)) POST_kmpc_fork_call(void) {}
void __attribute__((weak)) PRE_kmpc_fork_call_if(void) {}
void __attribute__((weak)) POST_kmpc_fork_call_if(void) {}
void __attribute__((weak)) PRE_kmpc_serialized_parallel(void) {}
void __attribute__((weak)) POST_kmpc_serialized_parallel(void) {}
void __attribute__((weak)) PRE_kmpc_end_serialized_parallel(void) {}
void __attribute__((weak)) POST_kmpc_end_serialized_parallel(void) {}
void __attribute__((weak)) PRE_kmpc_flush(void) {}
void __attribute__((weak)) POST_kmpc_flush(void) {}
void __attribute__((weak)) PRE_kmpc_barrier(void) {}
void __attribute__((weak)) POST_kmpc_barrier(void) {}
void __attribute__((weak)) PRE_kmpc_master(void) {}
void __attribute__((weak)) POST_kmpc_master(void) {}
void __attribute__((weak)) PRE_kmpc_end_master(void) {}
void __attribute__((weak)) POST_kmpc_end_master(void) {}
void __attribute__((weak)) PRE_kmpc_masked(void) {}
void __attribute__((weak)) POST_kmpc_masked(void) {}
void __attribute__((weak)) PRE_kmpc_end_masked(void) {}
void __attribute__((weak)) POST_kmpc_end_masked(void) {}
void __attribute__((weak)) PRE_kmpc_ordered(void) {}
void __attribute__((weak)) POST_kmpc_ordered(void) {}
void __attribute__((weak)) PRE_kmpc_end_ordered(void) {}
void __attribute__((weak)) POST_kmpc_end_ordered(void) {}
void __attribute__((weak)) PRE_kmpc_critical(void) {}
void __attribute__((weak)) POST_kmpc_critical(void) {}
void __attribute__((weak)) PRE_kmpc_end_critical(void) {}
void __attribute__((weak)) POST_kmpc_end_critical(void) {}
void __attribute__((weak)) PRE_kmpc_critical_with_hint(void) {}
void __attribute__((weak)) POST_kmpc_critical_with_hint(void) {}
void __attribute__((weak)) PRE_kmpc_barrier_master(void) {}
void __attribute__((weak)) POST_kmpc_barrier_master(void) {}
void __attribute__((weak)) PRE_kmpc_end_barrier_master(void) {}
void __attribute__((weak)) POST_kmpc_end_barrier_master(void) {}
void __attribute__((weak)) PRE_kmpc_barrier_master_nowait(void) {}
void __attribute__((weak)) POST_kmpc_barrier_master_nowait(void) {}
void __attribute__((weak)) PRE_kmpc_single(void) {}
void __attribute__((weak)) POST_kmpc_single(void) {}
void __attribute__((weak)) PRE_kmpc_end_single(void) {}
void __attribute__((weak)) POST_kmpc_end_single(void) {}
void __attribute__((weak)) PRE_kmpc_sections_init(void) {}
void __attribute__((weak)) POST_kmpc_sections_init(void) {}
void __attribute__((weak)) PRE_kmpc_next_section(void) {}
void __attribute__((weak)) POST_kmpc_next_section(void) {}
void __attribute__((weak)) PRE_kmpc_end_sections(void) {}
void __attribute__((weak)) POST_kmpc_end_sections(void) {}
void __attribute__((weak)) PRE_kmpc_for_static_fini(void) {}
void __attribute__((weak)) POST_kmpc_for_static_fini(void) {}
void __attribute__((weak)) PRE_kmpc_copyprivate(void) {}
void __attribute__((weak)) POST_kmpc_copyprivate(void) {}
void __attribute__((weak)) PRE_kmpc_copyprivate_light(void) {}
void __attribute__((weak)) POST_kmpc_copyprivate_light(void) {}
void __attribute__((weak)) PRE_kmpc_omp_task(void) {}
void __attribute__((weak)) POST_kmpc_omp_task(void) {}
void __attribute__((weak)) PRE_kmpc_omp_task_alloc(void) {}
void __attribute__((weak)) POST_kmpc_omp_task_alloc(void) {}
void __attribute__((weak)) PRE_kmpc_omp_target_task_alloc(void) {}
void __attribute__((weak)) POST_kmpc_omp_target_task_alloc(void) {}
void __attribute__((weak)) PRE_kmpc_omp_task_begin_if0(void) {}
void __attribute__((weak)) POST_kmpc_omp_task_begin_if0(void) {}
void __attribute__((weak)) PRE_kmpc_omp_task_complete_if0(void) {}
void __attribute__((weak)) POST_kmpc_omp_task_complete_if0(void) {}
void __attribute__((weak)) PRE_kmpc_omp_task_parts(void) {}
void __attribute__((weak)) POST_kmpc_omp_task_parts(void) {}
void __attribute__((weak)) PRE_kmpc_omp_taskwait(void) {}
void __attribute__((weak)) POST_kmpc_omp_taskwait(void) {}
void __attribute__((weak)) PRE_kmpc_omp_taskyield(void) {}
void __attribute__((weak)) POST_kmpc_omp_taskyield(void) {}
void __attribute__((weak)) PRE_kmpc_omp_task_begin(void) {}
void __attribute__((weak)) POST_kmpc_omp_task_begin(void) {}
void __attribute__((weak)) PRE_kmpc_omp_task_complete(void) {}
void __attribute__((weak)) POST_kmpc_omp_task_complete(void) {}
void __attribute__((weak)) PRE_kmpc_taskgroup(void) {}
void __attribute__((weak)) POST_kmpc_taskgroup(void) {}
void __attribute__((weak)) PRE_kmpc_end_taskgroup(void) {}
void __attribute__((weak)) POST_kmpc_end_taskgroup(void) {}
void __attribute__((weak)) PRE_kmpc_omp_task_with_deps(void) {}
void __attribute__((weak)) POST_kmpc_omp_task_with_deps(void) {}
void __attribute__((weak)) PRE_kmpc_task_get_depnode(void) {}
void __attribute__((weak)) POST_kmpc_task_get_depnode(void) {}
void __attribute__((weak)) PRE_kmpc_task_get_successors(void) {}
void __attribute__((weak)) POST_kmpc_task_get_successors(void) {}
void __attribute__((weak)) PRE_kmpc_omp_wait_deps(void) {}
void __attribute__((weak)) POST_kmpc_omp_wait_deps(void) {}
void __attribute__((weak)) PRE_kmpc_omp_taskwait_deps_51(void) {}
void __attribute__((weak)) POST_kmpc_omp_taskwait_deps_51(void) {}
void __attribute__((weak)) PRE_kmpc_cancel(void) {}
void __attribute__((weak)) POST_kmpc_cancel(void) {}
void __attribute__((weak)) PRE_kmpc_cancellationpoint(void) {}
void __attribute__((weak)) POST_kmpc_cancellationpoint(void) {}
void __attribute__((weak)) PRE_kmpc_cancel_barrier(void) {}
void __attribute__((weak)) POST_kmpc_cancel_barrier(void) {}
void __attribute__((weak)) PRE_kmpc_proxy_task_completed(void) {}
void __attribute__((weak)) POST_kmpc_proxy_task_completed(void) {}
void __attribute__((weak)) PRE_kmpc_proxy_task_completed_ooo(void) {}
void __attribute__((weak)) POST_kmpc_proxy_task_completed_ooo(void) {}
void __attribute__((weak)) PRE_kmpc_taskloop(void) {}
void __attribute__((weak)) POST_kmpc_taskloop(void) {}
void __attribute__((weak)) PRE_kmpc_taskloop_5(void) {}
void __attribute__((weak)) POST_kmpc_taskloop_5(void) {}
void __attribute__((weak)) PRE_kmpc_task_reduction_init(void) {}
void __attribute__((weak)) POST_kmpc_task_reduction_init(void) {}
void __attribute__((weak)) PRE_kmpc_taskred_init(void) {}
void __attribute__((weak)) POST_kmpc_taskred_init(void) {}
void __attribute__((weak)) PRE_kmpc_task_reduction_get_th_data(void) {}
void __attribute__((weak)) POST_kmpc_task_reduction_get_th_data(void) {}
void __attribute__((weak)) PRE_kmpc_task_reduction_modifier_init(void) {}
void __attribute__((weak)) POST_kmpc_task_reduction_modifier_init(void) {}
void __attribute__((weak)) PRE_kmpc_taskred_modifier_init(void) {}
void __attribute__((weak)) POST_kmpc_taskred_modifier_init(void) {}
void __attribute__((weak)) PRE_kmpc_task_reduction_modifier_fini(void) {}
void __attribute__((weak)) POST_kmpc_task_reduction_modifier_fini(void) {}
void __attribute__((weak)) PRE_kmpc_omp_reg_task_with_affinity(void) {}
void __attribute__((weak)) POST_kmpc_omp_reg_task_with_affinity(void) {}
void __attribute__((weak)) PRE_kmpc_omp_get_target_async_handle_ptr(void) {}
void __attribute__((weak)) POST_kmpc_omp_get_target_async_handle_ptr(void) {}
void __attribute__((weak)) PRE_kmpc_omp_has_task_team(void) {}
void __attribute__((weak)) POST_kmpc_omp_has_task_team(void) {}
void __attribute__((weak)) PRE_kmpc_init_lock(void) {}
void __attribute__((weak)) POST_kmpc_init_lock(void) {}
void __attribute__((weak)) PRE_kmpc_init_nest_lock(void) {}
void __attribute__((weak)) POST_kmpc_init_nest_lock(void) {}
void __attribute__((weak)) PRE_kmpc_destroy_lock(void) {}
void __attribute__((weak)) POST_kmpc_destroy_lock(void) {}
void __attribute__((weak)) PRE_kmpc_destroy_nest_lock(void) {}
void __attribute__((weak)) POST_kmpc_destroy_nest_lock(void) {}
void __attribute__((weak)) PRE_kmpc_set_lock(void) {}
void __attribute__((weak)) POST_kmpc_set_lock(void) {}
void __attribute__((weak)) PRE_kmpc_set_nest_lock(void) {}
void __attribute__((weak)) POST_kmpc_set_nest_lock(void) {}
void __attribute__((weak)) PRE_kmpc_unset_lock(void) {}
void __attribute__((weak)) POST_kmpc_unset_lock(void) {}
void __attribute__((weak)) PRE_kmpc_unset_nest_lock(void) {}
void __attribute__((weak)) POST_kmpc_unset_nest_lock(void) {}
void __attribute__((weak)) PRE_kmpc_test_lock(void) {}
void __attribute__((weak)) POST_kmpc_test_lock(void) {}
void __attribute__((weak)) PRE_kmpc_test_nest_lock(void) {}
void __attribute__((weak)) POST_kmpc_test_nest_lock(void) {}
void __attribute__((weak)) PRE_kmpc_init_lock_with_hint(void) {}
void __attribute__((weak)) POST_kmpc_init_lock_with_hint(void) {}
void __attribute__((weak)) PRE_kmpc_init_nest_lock_with_hint(void) {}
void __attribute__((weak)) POST_kmpc_init_nest_lock_with_hint(void) {}
void __attribute__((weak)) PRE_kmpc_start_record_task(void) {}
void __attribute__((weak)) POST_kmpc_start_record_task(void) {}
void __attribute__((weak)) PRE_kmpc_end_record_task(void) {}
void __attribute__((weak)) POST_kmpc_end_record_task(void) {}
void __attribute__((weak)) PRE_kmpc_reduce_nowait(void) {}
void __attribute__((weak)) POST_kmpc_reduce_nowait(void) {}
void __attribute__((weak)) PRE_kmpc_end_reduce_nowait(void) {}
void __attribute__((weak)) POST_kmpc_end_reduce_nowait(void) {}
void __attribute__((weak)) PRE_kmpc_reduce(void) {}
void __attribute__((weak)) POST_kmpc_reduce(void) {}
void __attribute__((weak)) PRE_kmpc_end_reduce(void) {}
void __attribute__((weak)) POST_kmpc_end_reduce(void) {}
void __attribute__((weak)) PRE_kmpc_get_taskid(void) {}
void __attribute__((weak)) POST_kmpc_get_taskid(void) {}
void __attribute__((weak)) PRE_kmpc_get_parent_taskid(void) {}
void __attribute__((weak)) POST_kmpc_get_parent_taskid(void) {}
void __attribute__((weak)) PRE_kmpc_in_parallel(void) {}
void __attribute__((weak)) POST_kmpc_in_parallel(void) {}
void __attribute__((weak)) PRE_kmpc_pop_num_threads(void) {}
void __attribute__((weak)) POST_kmpc_pop_num_threads(void) {}
void __attribute__((weak)) PRE_kmpc_push_num_threads(void) {}
void __attribute__((weak)) POST_kmpc_push_num_threads(void) {}
void __attribute__((weak)) PRE_kmpc_push_num_threads_strict(void) {}
void __attribute__((weak)) POST_kmpc_push_num_threads_strict(void) {}
void __attribute__((weak)) PRE_kmpc_push_num_threads_list(void) {}
void __attribute__((weak)) POST_kmpc_push_num_threads_list(void) {}
void __attribute__((weak)) PRE_kmpc_push_num_threads_list_strict(void) {}
void __attribute__((weak)) POST_kmpc_push_num_threads_list_strict(void) {}
void __attribute__((weak)) PRE_kmpc_push_proc_bind(void) {}
void __attribute__((weak)) POST_kmpc_push_proc_bind(void) {}
void __attribute__((weak)) PRE_kmpc_push_num_teams(void) {}
void __attribute__((weak)) POST_kmpc_push_num_teams(void) {}
void __attribute__((weak)) PRE_kmpc_set_thread_limit(void) {}
void __attribute__((weak)) POST_kmpc_set_thread_limit(void) {}
void __attribute__((weak)) PRE_kmpc_push_num_teams_51(void) {}
void __attribute__((weak)) POST_kmpc_push_num_teams_51(void) {}
void __attribute__((weak)) PRE_kmpc_fork_teams(void) {}
void __attribute__((weak)) POST_kmpc_fork_teams(void) {}
void __attribute__((weak)) PRE_kmpc_doacross_init(void) {}
void __attribute__((weak)) POST_kmpc_doacross_init(void) {}
void __attribute__((weak)) PRE_kmpc_doacross_wait(void) {}
void __attribute__((weak)) POST_kmpc_doacross_wait(void) {}
void __attribute__((weak)) PRE_kmpc_doacross_post(void) {}
void __attribute__((weak)) POST_kmpc_doacross_post(void) {}
void __attribute__((weak)) PRE_kmpc_doacross_fini(void) {}
void __attribute__((weak)) POST_kmpc_doacross_fini(void) {}
void __attribute__((weak)) PRE_kmpc_threadprivate_cached(void) {}
void __attribute__((weak)) POST_kmpc_threadprivate_cached(void) {}
void __attribute__((weak)) PRE_kmpc_get_target_offload(void) {}
void __attribute__((weak)) POST_kmpc_get_target_offload(void) {}
void __attribute__((weak)) PRE_kmpc_pause_resource(void) {}
void __attribute__((weak)) POST_kmpc_pause_resource(void) {}
void __attribute__((weak)) PRE_kmpc_error(void) {}
void __attribute__((weak)) POST_kmpc_error(void) {}
void __attribute__((weak)) PRE_kmpc_scope(void) {}
void __attribute__((weak)) POST_kmpc_scope(void) {}
void __attribute__((weak)) PRE_kmpc_end_scope(void) {}
void __attribute__((weak)) POST_kmpc_end_scope(void) {}
void __attribute__((weak)) PRE_kmpc_process_loop_nest_rectang(void) {}
void __attribute__((weak)) POST_kmpc_process_loop_nest_rectang(void) {}
void __attribute__((weak)) PRE_kmpc_calc_original_ivs_rectang(void) {}
void __attribute__((weak)) POST_kmpc_calc_original_ivs_rectang(void) {}
void __attribute__((weak)) PRE_kmpc_for_collapsed_init(void) {}
void __attribute__((weak)) POST_kmpc_for_collapsed_init(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_andb(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_andb(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1u_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1u_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_orb(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_orb(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_shl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_shl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_shr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_shr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1u_shr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1u_shr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_xor(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_xor(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_andb(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_andb(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2u_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2u_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_orb(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_orb(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_shl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_shl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_shr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_shr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2u_shr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2u_shr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_xor(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_xor(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_andb(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_andb(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4u_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4u_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_orb(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_orb(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_shl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_shl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_shr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_shr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4u_shr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4u_shr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_xor(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_xor(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_andb(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_andb(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8u_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8u_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_orb(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_orb(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_shl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_shl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_shr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_shr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8u_shr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8u_shr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_xor(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_xor(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_andl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_andl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_orl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_orl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_andl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_andl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_orl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_orl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_andl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_andl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_orl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_orl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_andl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_andl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_orl(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_orl(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_max(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_max(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_min(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_min(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_max(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_max(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_min(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_min(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_max(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_max(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_min(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_min(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_max(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_max(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_min(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_min(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_max(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_max(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_min(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_min(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_max(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_max(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_min(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_min(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_max(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_max(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_min(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_min(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_neqv(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_neqv(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_neqv(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_neqv(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_neqv(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_neqv(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_neqv(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_neqv(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_eqv(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_eqv(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_eqv(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_eqv(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_eqv(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_eqv(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_eqv(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_eqv(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_add(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_add(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_sub(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_sub(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_mul(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_mul(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_div(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_div(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1u_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1u_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_shl_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_shl_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_shr_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_shr_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1u_shr_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1u_shr_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2u_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2u_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_shl_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_shl_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_shr_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_shr_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2u_shr_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2u_shr_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4u_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4u_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_shl_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_shl_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_shr_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_shr_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4u_shr_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4u_shr_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8u_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8u_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_shl_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_shl_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_shr_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_shr_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8u_shr_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8u_shr_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_sub_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_sub_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_div_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_div_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_mul_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_mul_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_div_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_div_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_mul_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_mul_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_div_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_div_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_mul_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_mul_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_div_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_div_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_mul_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_mul_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_div_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_div_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_add_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_add_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_sub_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_sub_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_mul_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_mul_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_div_float8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_div_float8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_add_cmplx8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_add_cmplx8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_sub_cmplx8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_sub_cmplx8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_mul_cmplx8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_mul_cmplx8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_div_cmplx8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_div_cmplx8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_1(void) {}
void __attribute__((weak)) POST_kmpc_atomic_1(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_2(void) {}
void __attribute__((weak)) POST_kmpc_atomic_2(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_4(void) {}
void __attribute__((weak)) POST_kmpc_atomic_4(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_8(void) {}
void __attribute__((weak)) POST_kmpc_atomic_8(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_10(void) {}
void __attribute__((weak)) POST_kmpc_atomic_10(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_16(void) {}
void __attribute__((weak)) POST_kmpc_atomic_16(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_20(void) {}
void __attribute__((weak)) POST_kmpc_atomic_20(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_32(void) {}
void __attribute__((weak)) POST_kmpc_atomic_32(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_rd(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_rd(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_wr(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_wr(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_andb_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_andb_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1u_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1u_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_orb_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_orb_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_shl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_shl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_shr_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_shr_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1u_shr_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1u_shr_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_xor_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_xor_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_andb_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_andb_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2u_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2u_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_orb_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_orb_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_shl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_shl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_shr_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_shr_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2u_shr_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2u_shr_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_xor_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_xor_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_andb_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_andb_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4u_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4u_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_orb_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_orb_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_shl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_shl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_shr_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_shr_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4u_shr_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4u_shr_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_xor_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_xor_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_andb_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_andb_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8u_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8u_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_orb_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_orb_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_shl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_shl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_shr_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_shr_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8u_shr_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8u_shr_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_xor_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_xor_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_andl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_andl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_orl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_orl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_andl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_andl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_orl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_orl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_andl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_andl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_orl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_orl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_andl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_andl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_orl_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_orl_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_max_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_max_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_min_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_min_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_max_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_max_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_min_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_min_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_max_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_max_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_min_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_min_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_max_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_max_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_min_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_min_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_max_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_max_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_min_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_min_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_max_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_max_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_min_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_min_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_max_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_max_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_min_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_min_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_neqv_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_neqv_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_neqv_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_neqv_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_neqv_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_neqv_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_neqv_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_neqv_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_eqv_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_eqv_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_eqv_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_eqv_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_eqv_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_eqv_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_eqv_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_eqv_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_add_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_add_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_sub_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_sub_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_mul_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_mul_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_div_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_div_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_start(void) {}
void __attribute__((weak)) POST_kmpc_atomic_start(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_end(void) {}
void __attribute__((weak)) POST_kmpc_atomic_end(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1u_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1u_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_shl_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_shl_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_shr_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_shr_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1u_shr_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1u_shr_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2u_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2u_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_shl_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_shl_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_shr_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_shr_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2u_shr_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2u_shr_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4u_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4u_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_shl_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_shl_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_shr_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_shr_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4u_shr_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4u_shr_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8u_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8u_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_shl_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_shl_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_shr_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_shr_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8u_shr_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8u_shr_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_sub_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_sub_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_div_cpt_rev(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_div_cpt_rev(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed1_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed1_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed2_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed2_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed4_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed4_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_fixed8_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_fixed8_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float4_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float4_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float8_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float8_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_float10_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_float10_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx4_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx4_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx8_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx8_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_cmplx10_swp(void) {}
void __attribute__((weak)) POST_kmpc_atomic_cmplx10_swp(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_bool_1_cas(void) {}
void __attribute__((weak)) POST_kmpc_atomic_bool_1_cas(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_bool_2_cas(void) {}
void __attribute__((weak)) POST_kmpc_atomic_bool_2_cas(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_bool_4_cas(void) {}
void __attribute__((weak)) POST_kmpc_atomic_bool_4_cas(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_bool_8_cas(void) {}
void __attribute__((weak)) POST_kmpc_atomic_bool_8_cas(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_val_1_cas(void) {}
void __attribute__((weak)) POST_kmpc_atomic_val_1_cas(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_val_2_cas(void) {}
void __attribute__((weak)) POST_kmpc_atomic_val_2_cas(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_val_4_cas(void) {}
void __attribute__((weak)) POST_kmpc_atomic_val_4_cas(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_val_8_cas(void) {}
void __attribute__((weak)) POST_kmpc_atomic_val_8_cas(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_bool_1_cas_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_bool_1_cas_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_bool_2_cas_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_bool_2_cas_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_bool_4_cas_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_bool_4_cas_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_bool_8_cas_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_bool_8_cas_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_val_1_cas_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_val_1_cas_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_val_2_cas_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_val_2_cas_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_val_4_cas_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_val_4_cas_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_atomic_val_8_cas_cpt(void) {}
void __attribute__((weak)) POST_kmpc_atomic_val_8_cas_cpt(void) {}
void __attribute__((weak)) PRE_kmpc_for_static_init_4(void) {}
void __attribute__((weak)) POST_kmpc_for_static_init_4(void) {}
void __attribute__((weak)) PRE_kmpc_for_static_init_4u(void) {}
void __attribute__((weak)) POST_kmpc_for_static_init_4u(void) {}
void __attribute__((weak)) PRE_kmpc_for_static_init_8(void) {}
void __attribute__((weak)) POST_kmpc_for_static_init_8(void) {}
void __attribute__((weak)) PRE_kmpc_for_static_init_8u(void) {}
void __attribute__((weak)) POST_kmpc_for_static_init_8u(void) {}
void __attribute__((weak)) PRE_kmpc_dist_for_static_init_4(void) {}
void __attribute__((weak)) POST_kmpc_dist_for_static_init_4(void) {}
void __attribute__((weak)) PRE_kmpc_dist_for_static_init_4u(void) {}
void __attribute__((weak)) POST_kmpc_dist_for_static_init_4u(void) {}
void __attribute__((weak)) PRE_kmpc_dist_for_static_init_8(void) {}
void __attribute__((weak)) POST_kmpc_dist_for_static_init_8(void) {}
void __attribute__((weak)) PRE_kmpc_dist_for_static_init_8u(void) {}
void __attribute__((weak)) POST_kmpc_dist_for_static_init_8u(void) {}
void __attribute__((weak)) PRE_kmpc_team_static_init_4(void) {}
void __attribute__((weak)) POST_kmpc_team_static_init_4(void) {}
void __attribute__((weak)) PRE_kmpc_team_static_init_4u(void) {}
void __attribute__((weak)) POST_kmpc_team_static_init_4u(void) {}
void __attribute__((weak)) PRE_kmpc_team_static_init_8(void) {}
void __attribute__((weak)) POST_kmpc_team_static_init_8(void) {}
void __attribute__((weak)) PRE_kmpc_team_static_init_8u(void) {}
void __attribute__((weak)) POST_kmpc_team_static_init_8u(void) {}
void __attribute__((weak)) PRE_kmpc_dist_dispatch_init_4(void) {}
void __attribute__((weak)) POST_kmpc_dist_dispatch_init_4(void) {}
void __attribute__((weak)) PRE_kmpc_dist_dispatch_init_4u(void) {}
void __attribute__((weak)) POST_kmpc_dist_dispatch_init_4u(void) {}
void __attribute__((weak)) PRE_kmpc_dist_dispatch_init_8(void) {}
void __attribute__((weak)) POST_kmpc_dist_dispatch_init_8(void) {}
void __attribute__((weak)) PRE_kmpc_dist_dispatch_init_8u(void) {}
void __attribute__((weak)) POST_kmpc_dist_dispatch_init_8u(void) {}

/* Encaminha (loc, argc, microtask, shared[0..argc-1]) para uma função variádica
 * da libomp quando argc passa de HOOK_KMPC_SWITCH_MAX_ARGS. */
static void hook_kmpc_forward_variadic(const char *name, void (*fn)(void), ident_t *loc,
                                       kmp_int32 argc, kmpc_micro microtask, void **shared) {
#ifdef HOOK_USE_LIBFFI
    unsigned nfixed = 3, ntotal = nfixed + (unsigned) argc;
    ffi_type *types[ntotal];
    void *values[ntotal];   /* ffi_call recebe ponteiros para cada valor */
    types[0] = &ffi_type_pointer; values[0] = &loc;
    types[1] = &ffi_type_sint32;  values[1] = &argc;
    types[2] = &ffi_type_pointer; values[2] = &microtask;
    for (kmp_int32 i = 0; i < argc; i++) {
        types[nfixed + i] = &ffi_type_pointer;
        values[nfixed + i] = &shared[i];
    }
    ffi_cif cif;
    if (ffi_prep_cif_var(&cif, FFI_DEFAULT_ABI, nfixed, ntotal, &ffi_type_void, types) != FFI_OK) {
        fprintf(stderr, "hookkmpc: ffi_prep_cif_var falhou em %s (argc=%d)\n", name, (int) argc);
        abort();
    }
    ffi_call(&cif, fn, NULL, values);
#else
    (void) fn; (void) loc; (void) microtask; (void) shared;
    fprintf(stderr, "hookkmpc: %s chamada com %d argumentos (máximo sem libffi: %d). "
                    "Recompile com USE_LIBFFI=1.\n", name, (int) argc, HOOK_KMPC_SWITCH_MAX_ARGS);
    abort();
#endif
}

/* Funções de Interceptação */

omp_allocator_handle_t __kmpc_init_allocator (int arg1, omp_memspace_handle_t arg2, int arg3, omp_alloctrait_t arg4[]) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_init_allocator, "__kmpc_init_allocator");
    PRE_kmpc_init_allocator();
    omp_allocator_handle_t res = lib___kmpc_init_allocator(arg1, arg2, arg3, arg4);
    POST_kmpc_init_allocator();
    return res;
}

void __kmpc_destroy_allocator (int arg1, omp_allocator_handle_t arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_destroy_allocator, "__kmpc_destroy_allocator");
    PRE_kmpc_destroy_allocator();
    lib___kmpc_destroy_allocator(arg1, arg2);
    POST_kmpc_destroy_allocator();
}

void __kmpc_set_default_allocator (int arg1, omp_allocator_handle_t arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_set_default_allocator, "__kmpc_set_default_allocator");
    PRE_kmpc_set_default_allocator();
    lib___kmpc_set_default_allocator(arg1, arg2);
    POST_kmpc_set_default_allocator();
}

omp_allocator_handle_t __kmpc_get_default_allocator (int arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_get_default_allocator, "__kmpc_get_default_allocator");
    PRE_kmpc_get_default_allocator();
    omp_allocator_handle_t res = lib___kmpc_get_default_allocator(arg1);
    POST_kmpc_get_default_allocator();
    return res;
}

void * __kmpc_alloc (int arg1, size_t arg2, omp_allocator_handle_t arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_alloc, "__kmpc_alloc");
    PRE_kmpc_alloc();
    void * res = lib___kmpc_alloc(arg1, arg2, arg3);
    POST_kmpc_alloc();
    return res;
}

void * __kmpc_aligned_alloc (int arg1, size_t arg2, size_t arg3, omp_allocator_handle_t arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_aligned_alloc, "__kmpc_aligned_alloc");
    PRE_kmpc_aligned_alloc();
    void * res = lib___kmpc_aligned_alloc(arg1, arg2, arg3, arg4);
    POST_kmpc_aligned_alloc();
    return res;
}

void * __kmpc_calloc (int arg1, size_t arg2, size_t arg3, omp_allocator_handle_t arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_calloc, "__kmpc_calloc");
    PRE_kmpc_calloc();
    void * res = lib___kmpc_calloc(arg1, arg2, arg3, arg4);
    POST_kmpc_calloc();
    return res;
}

void * __kmpc_realloc (int arg1, void * arg2, size_t arg3, omp_allocator_handle_t arg4, omp_allocator_handle_t arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_realloc, "__kmpc_realloc");
    PRE_kmpc_realloc();
    void * res = lib___kmpc_realloc(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_realloc();
    return res;
}

void __kmpc_free (int arg1, void * arg2, omp_allocator_handle_t arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_free, "__kmpc_free");
    PRE_kmpc_free();
    lib___kmpc_free(arg1, arg2, arg3);
    POST_kmpc_free();
}

void __kmpc_dispatch_init_4 (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 arg4, kmp_int32 arg5, kmp_int32 arg6, kmp_int32 arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_init_4, "__kmpc_dispatch_init_4");
    PRE_kmpc_dispatch_init_4();
    lib___kmpc_dispatch_init_4(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_dispatch_init_4();
}

void __kmpc_dispatch_init_4u (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_uint32 arg4, kmp_uint32 arg5, kmp_int32 arg6, kmp_int32 arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_init_4u, "__kmpc_dispatch_init_4u");
    PRE_kmpc_dispatch_init_4u();
    lib___kmpc_dispatch_init_4u(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_dispatch_init_4u();
}

void __kmpc_dispatch_init_8 (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int64 arg4, kmp_int64 arg5, kmp_int64 arg6, kmp_int64 arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_init_8, "__kmpc_dispatch_init_8");
    PRE_kmpc_dispatch_init_8();
    lib___kmpc_dispatch_init_8(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_dispatch_init_8();
}

void __kmpc_dispatch_init_8u (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_uint64 arg4, kmp_uint64 arg5, kmp_int64 arg6, kmp_int64 arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_init_8u, "__kmpc_dispatch_init_8u");
    PRE_kmpc_dispatch_init_8u();
    lib___kmpc_dispatch_init_8u(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_dispatch_init_8u();
}

int __kmpc_dispatch_next_4 (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_int32 * arg4, kmp_int32 * arg5, kmp_int32 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_next_4, "__kmpc_dispatch_next_4");
    PRE_kmpc_dispatch_next_4();
    int res = lib___kmpc_dispatch_next_4(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_dispatch_next_4();
    return res;
}

int __kmpc_dispatch_next_4u (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_uint32 * arg4, kmp_uint32 * arg5, kmp_int32 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_next_4u, "__kmpc_dispatch_next_4u");
    PRE_kmpc_dispatch_next_4u();
    int res = lib___kmpc_dispatch_next_4u(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_dispatch_next_4u();
    return res;
}

int __kmpc_dispatch_next_8 (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_int64 * arg4, kmp_int64 * arg5, kmp_int64 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_next_8, "__kmpc_dispatch_next_8");
    PRE_kmpc_dispatch_next_8();
    int res = lib___kmpc_dispatch_next_8(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_dispatch_next_8();
    return res;
}

int __kmpc_dispatch_next_8u (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_uint64 * arg4, kmp_uint64 * arg5, kmp_int64 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_next_8u, "__kmpc_dispatch_next_8u");
    PRE_kmpc_dispatch_next_8u();
    int res = lib___kmpc_dispatch_next_8u(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_dispatch_next_8u();
    return res;
}

void __kmpc_dispatch_fini_4 (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_fini_4, "__kmpc_dispatch_fini_4");
    PRE_kmpc_dispatch_fini_4();
    lib___kmpc_dispatch_fini_4(arg1, arg2);
    POST_kmpc_dispatch_fini_4();
}

void __kmpc_dispatch_fini_8 (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_fini_8, "__kmpc_dispatch_fini_8");
    PRE_kmpc_dispatch_fini_8();
    lib___kmpc_dispatch_fini_8(arg1, arg2);
    POST_kmpc_dispatch_fini_8();
}

void __kmpc_dispatch_fini_4u (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_fini_4u, "__kmpc_dispatch_fini_4u");
    PRE_kmpc_dispatch_fini_4u();
    lib___kmpc_dispatch_fini_4u(arg1, arg2);
    POST_kmpc_dispatch_fini_4u();
}

void __kmpc_dispatch_fini_8u (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_fini_8u, "__kmpc_dispatch_fini_8u");
    PRE_kmpc_dispatch_fini_8u();
    lib___kmpc_dispatch_fini_8u(arg1, arg2);
    POST_kmpc_dispatch_fini_8u();
}

void __kmpc_dispatch_deinit (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dispatch_deinit, "__kmpc_dispatch_deinit");
    PRE_kmpc_dispatch_deinit();
    lib___kmpc_dispatch_deinit(arg1, arg2);
    POST_kmpc_dispatch_deinit();
}

int __kmpc_invoke_task_func (int arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_invoke_task_func, "__kmpc_invoke_task_func");
    PRE_kmpc_invoke_task_func();
    int res = lib___kmpc_invoke_task_func(arg1);
    POST_kmpc_invoke_task_func();
    return res;
}

kmp_event_t * __kmpc_task_allow_completion_event (ident_t * arg1, int arg2, kmp_task_t * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_task_allow_completion_event, "__kmpc_task_allow_completion_event");
    PRE_kmpc_task_allow_completion_event();
    kmp_event_t * res = lib___kmpc_task_allow_completion_event(arg1, arg2, arg3);
    POST_kmpc_task_allow_completion_event();
    return res;
}

void __kmpc_begin (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_begin, "__kmpc_begin");
    PRE_kmpc_begin();
    lib___kmpc_begin(arg1, arg2);
    POST_kmpc_begin();
}

void __kmpc_end (ident_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end, "__kmpc_end");
    PRE_kmpc_end();
    lib___kmpc_end(arg1);
    POST_kmpc_end();
}

void __kmpc_threadprivate_register_vec (ident_t * arg1, void * arg2, kmpc_ctor_vec arg3, kmpc_cctor_vec arg4, kmpc_dtor_vec arg5, size_t arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_threadprivate_register_vec, "__kmpc_threadprivate_register_vec");
    PRE_kmpc_threadprivate_register_vec();
    lib___kmpc_threadprivate_register_vec(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_threadprivate_register_vec();
}

void __kmpc_threadprivate_register (ident_t * arg1, void * arg2, kmpc_ctor arg3, kmpc_cctor arg4, kmpc_dtor arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_threadprivate_register, "__kmpc_threadprivate_register");
    PRE_kmpc_threadprivate_register();
    lib___kmpc_threadprivate_register(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_threadprivate_register();
}

void * __kmpc_threadprivate (ident_t * arg1, kmp_int32 arg2, void * arg3, size_t arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_threadprivate, "__kmpc_threadprivate");
    PRE_kmpc_threadprivate();
    void * res = lib___kmpc_threadprivate(arg1, arg2, arg3, arg4);
    POST_kmpc_threadprivate();
    return res;
}

kmp_int32 __kmpc_global_thread_num (ident_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_global_thread_num, "__kmpc_global_thread_num");
    PRE_kmpc_global_thread_num();
    kmp_int32 res = lib___kmpc_global_thread_num(arg1);
    POST_kmpc_global_thread_num();
    return res;
}

kmp_int32 __kmpc_global_num_threads (ident_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_global_num_threads, "__kmpc_global_num_threads");
    PRE_kmpc_global_num_threads();
    kmp_int32 res = lib___kmpc_global_num_threads(arg1);
    POST_kmpc_global_num_threads();
    return res;
}

kmp_int32 __kmpc_bound_thread_num (ident_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_bound_thread_num, "__kmpc_bound_thread_num");
    PRE_kmpc_bound_thread_num();
    kmp_int32 res = lib___kmpc_bound_thread_num(arg1);
    POST_kmpc_bound_thread_num();
    return res;
}

kmp_int32 __kmpc_bound_num_threads (ident_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_bound_num_threads, "__kmpc_bound_num_threads");
    PRE_kmpc_bound_num_threads();
    kmp_int32 res = lib___kmpc_bound_num_threads(arg1);
    POST_kmpc_bound_num_threads();
    return res;
}

kmp_int32 __kmpc_ok_to_fork (ident_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_ok_to_fork, "__kmpc_ok_to_fork");
    PRE_kmpc_ok_to_fork();
    kmp_int32 res = lib___kmpc_ok_to_fork(arg1);
    POST_kmpc_ok_to_fork();
    return res;
}

void __kmpc_fork_call (ident_t * arg1, kmp_int32 arg2, kmpc_micro arg3, ...) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_fork_call, "__kmpc_fork_call");
    void *a[arg2 > 0 ? arg2 : 1];
    va_list ap;
    va_start(ap, arg3);
    for (kmp_int32 i = 0; i < arg2; i++) a[i] = va_arg(ap, void *);
    va_end(ap);
    PRE_kmpc_fork_call();
    switch (arg2) {
      case 0: lib___kmpc_fork_call(arg1, arg2, arg3); break;
      case 1: lib___kmpc_fork_call(arg1, arg2, arg3, a[0]); break;
      case 2: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1]); break;
      case 3: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2]); break;
      case 4: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3]); break;
      case 5: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4]); break;
      case 6: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5]); break;
      case 7: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6]); break;
      case 8: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]); break;
      case 9: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]); break;
      case 10: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]); break;
      case 11: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10]); break;
      case 12: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11]); break;
      case 13: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12]); break;
      case 14: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13]); break;
      case 15: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14]); break;
      case 16: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15]); break;
      case 17: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16]); break;
      case 18: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17]); break;
      case 19: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18]); break;
      case 20: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19]); break;
      case 21: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20]); break;
      case 22: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21]); break;
      case 23: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22]); break;
      case 24: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23]); break;
      case 25: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24]); break;
      case 26: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25]); break;
      case 27: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26]); break;
      case 28: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27]); break;
      case 29: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28]); break;
      case 30: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29]); break;
      case 31: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30]); break;
      case 32: lib___kmpc_fork_call(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30], a[31]); break;
      default: hook_kmpc_forward_variadic("__kmpc_fork_call", (void (*)(void)) lib___kmpc_fork_call, arg1, arg2, arg3, a); break;
    }
    POST_kmpc_fork_call();
}

void __kmpc_fork_call_if (ident_t * arg1, kmp_int32 arg2, kmpc_micro arg3, kmp_int32 arg4, void * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_fork_call_if, "__kmpc_fork_call_if");
    PRE_kmpc_fork_call_if();
    lib___kmpc_fork_call_if(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_fork_call_if();
}

void __kmpc_serialized_parallel (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_serialized_parallel, "__kmpc_serialized_parallel");
    PRE_kmpc_serialized_parallel();
    lib___kmpc_serialized_parallel(arg1, arg2);
    POST_kmpc_serialized_parallel();
}

void __kmpc_end_serialized_parallel (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_serialized_parallel, "__kmpc_end_serialized_parallel");
    PRE_kmpc_end_serialized_parallel();
    lib___kmpc_end_serialized_parallel(arg1, arg2);
    POST_kmpc_end_serialized_parallel();
}

void __kmpc_flush (ident_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_flush, "__kmpc_flush");
    PRE_kmpc_flush();
    lib___kmpc_flush(arg1);
    POST_kmpc_flush();
}

void __kmpc_barrier (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_barrier, "__kmpc_barrier");
    PRE_kmpc_barrier();
    lib___kmpc_barrier(arg1, arg2);
    POST_kmpc_barrier();
}

kmp_int32 __kmpc_master (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_master, "__kmpc_master");
    PRE_kmpc_master();
    kmp_int32 res = lib___kmpc_master(arg1, arg2);
    POST_kmpc_master();
    return res;
}

void __kmpc_end_master (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_master, "__kmpc_end_master");
    PRE_kmpc_end_master();
    lib___kmpc_end_master(arg1, arg2);
    POST_kmpc_end_master();
}

kmp_int32 __kmpc_masked (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_masked, "__kmpc_masked");
    PRE_kmpc_masked();
    kmp_int32 res = lib___kmpc_masked(arg1, arg2, arg3);
    POST_kmpc_masked();
    return res;
}

void __kmpc_end_masked (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_masked, "__kmpc_end_masked");
    PRE_kmpc_end_masked();
    lib___kmpc_end_masked(arg1, arg2);
    POST_kmpc_end_masked();
}

void __kmpc_ordered (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_ordered, "__kmpc_ordered");
    PRE_kmpc_ordered();
    lib___kmpc_ordered(arg1, arg2);
    POST_kmpc_ordered();
}

void __kmpc_end_ordered (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_ordered, "__kmpc_end_ordered");
    PRE_kmpc_end_ordered();
    lib___kmpc_end_ordered(arg1, arg2);
    POST_kmpc_end_ordered();
}

void __kmpc_critical (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_critical, "__kmpc_critical");
    PRE_kmpc_critical();
    lib___kmpc_critical(arg1, arg2, arg3);
    POST_kmpc_critical();
}

void __kmpc_end_critical (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_critical, "__kmpc_end_critical");
    PRE_kmpc_end_critical();
    lib___kmpc_end_critical(arg1, arg2, arg3);
    POST_kmpc_end_critical();
}

void __kmpc_critical_with_hint (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3, uint32_t arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_critical_with_hint, "__kmpc_critical_with_hint");
    PRE_kmpc_critical_with_hint();
    lib___kmpc_critical_with_hint(arg1, arg2, arg3, arg4);
    POST_kmpc_critical_with_hint();
}

kmp_int32 __kmpc_barrier_master (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_barrier_master, "__kmpc_barrier_master");
    PRE_kmpc_barrier_master();
    kmp_int32 res = lib___kmpc_barrier_master(arg1, arg2);
    POST_kmpc_barrier_master();
    return res;
}

void __kmpc_end_barrier_master (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_barrier_master, "__kmpc_end_barrier_master");
    PRE_kmpc_end_barrier_master();
    lib___kmpc_end_barrier_master(arg1, arg2);
    POST_kmpc_end_barrier_master();
}

kmp_int32 __kmpc_barrier_master_nowait (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_barrier_master_nowait, "__kmpc_barrier_master_nowait");
    PRE_kmpc_barrier_master_nowait();
    kmp_int32 res = lib___kmpc_barrier_master_nowait(arg1, arg2);
    POST_kmpc_barrier_master_nowait();
    return res;
}

kmp_int32 __kmpc_single (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_single, "__kmpc_single");
    PRE_kmpc_single();
    kmp_int32 res = lib___kmpc_single(arg1, arg2);
    POST_kmpc_single();
    return res;
}

void __kmpc_end_single (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_single, "__kmpc_end_single");
    PRE_kmpc_end_single();
    lib___kmpc_end_single(arg1, arg2);
    POST_kmpc_end_single();
}

kmp_int32 __kmpc_sections_init (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_sections_init, "__kmpc_sections_init");
    PRE_kmpc_sections_init();
    kmp_int32 res = lib___kmpc_sections_init(arg1, arg2);
    POST_kmpc_sections_init();
    return res;
}

kmp_int32 __kmpc_next_section (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_next_section, "__kmpc_next_section");
    PRE_kmpc_next_section();
    kmp_int32 res = lib___kmpc_next_section(arg1, arg2, arg3);
    POST_kmpc_next_section();
    return res;
}

void __kmpc_end_sections (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_sections, "__kmpc_end_sections");
    PRE_kmpc_end_sections();
    lib___kmpc_end_sections(arg1, arg2);
    POST_kmpc_end_sections();
}

void __kmpc_for_static_fini (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_for_static_fini, "__kmpc_for_static_fini");
    PRE_kmpc_for_static_fini();
    lib___kmpc_for_static_fini(arg1, arg2);
    POST_kmpc_for_static_fini();
}

void __kmpc_copyprivate (ident_t * arg1, kmp_int32 arg2, size_t arg3, void * arg4, void (*arg5)(void *, void *), kmp_int32 arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_copyprivate, "__kmpc_copyprivate");
    PRE_kmpc_copyprivate();
    lib___kmpc_copyprivate(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_copyprivate();
}

void * __kmpc_copyprivate_light (ident_t * arg1, kmp_int32 arg2, void * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_copyprivate_light, "__kmpc_copyprivate_light");
    PRE_kmpc_copyprivate_light();
    void * res = lib___kmpc_copyprivate_light(arg1, arg2, arg3);
    POST_kmpc_copyprivate_light();
    return res;
}

kmp_int32 __kmpc_omp_task (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_task, "__kmpc_omp_task");
    PRE_kmpc_omp_task();
    kmp_int32 res = lib___kmpc_omp_task(arg1, arg2, arg3);
    POST_kmpc_omp_task();
    return res;
}

kmp_task_t * __kmpc_omp_task_alloc (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, size_t arg4, size_t arg5, kmp_routine_entry_t arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_task_alloc, "__kmpc_omp_task_alloc");
    PRE_kmpc_omp_task_alloc();
    kmp_task_t * res = lib___kmpc_omp_task_alloc(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_omp_task_alloc();
    return res;
}

kmp_task_t * __kmpc_omp_target_task_alloc (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, size_t arg4, size_t arg5, kmp_routine_entry_t arg6, kmp_int64 arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_target_task_alloc, "__kmpc_omp_target_task_alloc");
    PRE_kmpc_omp_target_task_alloc();
    kmp_task_t * res = lib___kmpc_omp_target_task_alloc(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_omp_target_task_alloc();
    return res;
}

void __kmpc_omp_task_begin_if0 (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_task_begin_if0, "__kmpc_omp_task_begin_if0");
    PRE_kmpc_omp_task_begin_if0();
    lib___kmpc_omp_task_begin_if0(arg1, arg2, arg3);
    POST_kmpc_omp_task_begin_if0();
}

void __kmpc_omp_task_complete_if0 (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_task_complete_if0, "__kmpc_omp_task_complete_if0");
    PRE_kmpc_omp_task_complete_if0();
    lib___kmpc_omp_task_complete_if0(arg1, arg2, arg3);
    POST_kmpc_omp_task_complete_if0();
}

kmp_int32 __kmpc_omp_task_parts (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_task_parts, "__kmpc_omp_task_parts");
    PRE_kmpc_omp_task_parts();
    kmp_int32 res = lib___kmpc_omp_task_parts(arg1, arg2, arg3);
    POST_kmpc_omp_task_parts();
    return res;
}

kmp_int32 __kmpc_omp_taskwait (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_taskwait, "__kmpc_omp_taskwait");
    PRE_kmpc_omp_taskwait();
    kmp_int32 res = lib___kmpc_omp_taskwait(arg1, arg2);
    POST_kmpc_omp_taskwait();
    return res;
}

kmp_int32 __kmpc_omp_taskyield (ident_t * arg1, kmp_int32 arg2, int arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_taskyield, "__kmpc_omp_taskyield");
    PRE_kmpc_omp_taskyield();
    kmp_int32 res = lib___kmpc_omp_taskyield(arg1, arg2, arg3);
    POST_kmpc_omp_taskyield();
    return res;
}

void __kmpc_omp_task_begin (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_task_begin, "__kmpc_omp_task_begin");
    PRE_kmpc_omp_task_begin();
    lib___kmpc_omp_task_begin(arg1, arg2, arg3);
    POST_kmpc_omp_task_begin();
}

void __kmpc_omp_task_complete (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_task_complete, "__kmpc_omp_task_complete");
    PRE_kmpc_omp_task_complete();
    lib___kmpc_omp_task_complete(arg1, arg2, arg3);
    POST_kmpc_omp_task_complete();
}

void __kmpc_taskgroup (ident_t * arg1, int arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_taskgroup, "__kmpc_taskgroup");
    PRE_kmpc_taskgroup();
    lib___kmpc_taskgroup(arg1, arg2);
    POST_kmpc_taskgroup();
}

void __kmpc_end_taskgroup (ident_t * arg1, int arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_taskgroup, "__kmpc_end_taskgroup");
    PRE_kmpc_end_taskgroup();
    lib___kmpc_end_taskgroup(arg1, arg2);
    POST_kmpc_end_taskgroup();
}

kmp_int32 __kmpc_omp_task_with_deps (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3, kmp_int32 arg4, kmp_depend_info_t * arg5, kmp_int32 arg6, kmp_depend_info_t * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_task_with_deps, "__kmpc_omp_task_with_deps");
    PRE_kmpc_omp_task_with_deps();
    kmp_int32 res = lib___kmpc_omp_task_with_deps(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_omp_task_with_deps();
    return res;
}

kmp_base_depnode_t * __kmpc_task_get_depnode (kmp_task_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_task_get_depnode, "__kmpc_task_get_depnode");
    PRE_kmpc_task_get_depnode();
    kmp_base_depnode_t * res = lib___kmpc_task_get_depnode(arg1);
    POST_kmpc_task_get_depnode();
    return res;
}

kmp_depnode_list_t * __kmpc_task_get_successors (kmp_task_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_task_get_successors, "__kmpc_task_get_successors");
    PRE_kmpc_task_get_successors();
    kmp_depnode_list_t * res = lib___kmpc_task_get_successors(arg1);
    POST_kmpc_task_get_successors();
    return res;
}

void __kmpc_omp_wait_deps (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_depend_info_t * arg4, kmp_int32 arg5, kmp_depend_info_t * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_wait_deps, "__kmpc_omp_wait_deps");
    PRE_kmpc_omp_wait_deps();
    lib___kmpc_omp_wait_deps(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_omp_wait_deps();
}

void __kmpc_omp_taskwait_deps_51 (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_depend_info_t * arg4, kmp_int32 arg5, kmp_depend_info_t * arg6, kmp_int32 arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_taskwait_deps_51, "__kmpc_omp_taskwait_deps_51");
    PRE_kmpc_omp_taskwait_deps_51();
    lib___kmpc_omp_taskwait_deps_51(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_omp_taskwait_deps_51();
}

kmp_int32 __kmpc_cancel (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_cancel, "__kmpc_cancel");
    PRE_kmpc_cancel();
    kmp_int32 res = lib___kmpc_cancel(arg1, arg2, arg3);
    POST_kmpc_cancel();
    return res;
}

kmp_int32 __kmpc_cancellationpoint (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_cancellationpoint, "__kmpc_cancellationpoint");
    PRE_kmpc_cancellationpoint();
    kmp_int32 res = lib___kmpc_cancellationpoint(arg1, arg2, arg3);
    POST_kmpc_cancellationpoint();
    return res;
}

kmp_int32 __kmpc_cancel_barrier (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_cancel_barrier, "__kmpc_cancel_barrier");
    PRE_kmpc_cancel_barrier();
    kmp_int32 res = lib___kmpc_cancel_barrier(arg1, arg2);
    POST_kmpc_cancel_barrier();
    return res;
}

void __kmpc_proxy_task_completed (kmp_int32 arg1, kmp_task_t * arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_proxy_task_completed, "__kmpc_proxy_task_completed");
    PRE_kmpc_proxy_task_completed();
    lib___kmpc_proxy_task_completed(arg1, arg2);
    POST_kmpc_proxy_task_completed();
}

void __kmpc_proxy_task_completed_ooo (kmp_task_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_proxy_task_completed_ooo, "__kmpc_proxy_task_completed_ooo");
    PRE_kmpc_proxy_task_completed_ooo();
    lib___kmpc_proxy_task_completed_ooo(arg1);
    POST_kmpc_proxy_task_completed_ooo();
}

void __kmpc_taskloop (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3, kmp_int32 arg4, kmp_uint64 * arg5, kmp_uint64 * arg6, kmp_int64 arg7, kmp_int32 arg8, kmp_int32 arg9, kmp_uint64 arg10, void * arg11) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_taskloop, "__kmpc_taskloop");
    PRE_kmpc_taskloop();
    lib___kmpc_taskloop(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    POST_kmpc_taskloop();
}

void __kmpc_taskloop_5 (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3, kmp_int32 arg4, kmp_uint64 * arg5, kmp_uint64 * arg6, kmp_int64 arg7, kmp_int32 arg8, kmp_int32 arg9, kmp_uint64 arg10, kmp_int32 arg11, void * arg12) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_taskloop_5, "__kmpc_taskloop_5");
    PRE_kmpc_taskloop_5();
    lib___kmpc_taskloop_5(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    POST_kmpc_taskloop_5();
}

void * __kmpc_task_reduction_init (int arg1, int arg2, void * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_task_reduction_init, "__kmpc_task_reduction_init");
    PRE_kmpc_task_reduction_init();
    void * res = lib___kmpc_task_reduction_init(arg1, arg2, arg3);
    POST_kmpc_task_reduction_init();
    return res;
}

void * __kmpc_taskred_init (int arg1, int arg2, void * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_taskred_init, "__kmpc_taskred_init");
    PRE_kmpc_taskred_init();
    void * res = lib___kmpc_taskred_init(arg1, arg2, arg3);
    POST_kmpc_taskred_init();
    return res;
}

void * __kmpc_task_reduction_get_th_data (int arg1, void * arg2, void * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_task_reduction_get_th_data, "__kmpc_task_reduction_get_th_data");
    PRE_kmpc_task_reduction_get_th_data();
    void * res = lib___kmpc_task_reduction_get_th_data(arg1, arg2, arg3);
    POST_kmpc_task_reduction_get_th_data();
    return res;
}

void * __kmpc_task_reduction_modifier_init (ident_t * arg1, int arg2, int arg3, int arg4, void * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_task_reduction_modifier_init, "__kmpc_task_reduction_modifier_init");
    PRE_kmpc_task_reduction_modifier_init();
    void * res = lib___kmpc_task_reduction_modifier_init(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_task_reduction_modifier_init();
    return res;
}

void * __kmpc_taskred_modifier_init (ident_t * arg1, int arg2, int arg3, int arg4, void * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_taskred_modifier_init, "__kmpc_taskred_modifier_init");
    PRE_kmpc_taskred_modifier_init();
    void * res = lib___kmpc_taskred_modifier_init(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_taskred_modifier_init();
    return res;
}

void __kmpc_task_reduction_modifier_fini (ident_t * arg1, int arg2, int arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_task_reduction_modifier_fini, "__kmpc_task_reduction_modifier_fini");
    PRE_kmpc_task_reduction_modifier_fini();
    lib___kmpc_task_reduction_modifier_fini(arg1, arg2, arg3);
    POST_kmpc_task_reduction_modifier_fini();
}

kmp_int32 __kmpc_omp_reg_task_with_affinity (ident_t * arg1, kmp_int32 arg2, kmp_task_t * arg3, kmp_int32 arg4, kmp_task_affinity_info_t * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_reg_task_with_affinity, "__kmpc_omp_reg_task_with_affinity");
    PRE_kmpc_omp_reg_task_with_affinity();
    kmp_int32 res = lib___kmpc_omp_reg_task_with_affinity(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_omp_reg_task_with_affinity();
    return res;
}

void ** __kmpc_omp_get_target_async_handle_ptr (kmp_int32 arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_get_target_async_handle_ptr, "__kmpc_omp_get_target_async_handle_ptr");
    PRE_kmpc_omp_get_target_async_handle_ptr();
    void ** res = lib___kmpc_omp_get_target_async_handle_ptr(arg1);
    POST_kmpc_omp_get_target_async_handle_ptr();
    return res;
}

bool __kmpc_omp_has_task_team (kmp_int32 arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_omp_has_task_team, "__kmpc_omp_has_task_team");
    PRE_kmpc_omp_has_task_team();
    bool res = lib___kmpc_omp_has_task_team(arg1);
    POST_kmpc_omp_has_task_team();
    return res;
}

void __kmpc_init_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_init_lock, "__kmpc_init_lock");
    PRE_kmpc_init_lock();
    lib___kmpc_init_lock(arg1, arg2, arg3);
    POST_kmpc_init_lock();
}

void __kmpc_init_nest_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_init_nest_lock, "__kmpc_init_nest_lock");
    PRE_kmpc_init_nest_lock();
    lib___kmpc_init_nest_lock(arg1, arg2, arg3);
    POST_kmpc_init_nest_lock();
}

void __kmpc_destroy_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_destroy_lock, "__kmpc_destroy_lock");
    PRE_kmpc_destroy_lock();
    lib___kmpc_destroy_lock(arg1, arg2, arg3);
    POST_kmpc_destroy_lock();
}

void __kmpc_destroy_nest_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_destroy_nest_lock, "__kmpc_destroy_nest_lock");
    PRE_kmpc_destroy_nest_lock();
    lib___kmpc_destroy_nest_lock(arg1, arg2, arg3);
    POST_kmpc_destroy_nest_lock();
}

void __kmpc_set_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_set_lock, "__kmpc_set_lock");
    PRE_kmpc_set_lock();
    lib___kmpc_set_lock(arg1, arg2, arg3);
    POST_kmpc_set_lock();
}

void __kmpc_set_nest_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_set_nest_lock, "__kmpc_set_nest_lock");
    PRE_kmpc_set_nest_lock();
    lib___kmpc_set_nest_lock(arg1, arg2, arg3);
    POST_kmpc_set_nest_lock();
}

void __kmpc_unset_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_unset_lock, "__kmpc_unset_lock");
    PRE_kmpc_unset_lock();
    lib___kmpc_unset_lock(arg1, arg2, arg3);
    POST_kmpc_unset_lock();
}

void __kmpc_unset_nest_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_unset_nest_lock, "__kmpc_unset_nest_lock");
    PRE_kmpc_unset_nest_lock();
    lib___kmpc_unset_nest_lock(arg1, arg2, arg3);
    POST_kmpc_unset_nest_lock();
}

int __kmpc_test_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_test_lock, "__kmpc_test_lock");
    PRE_kmpc_test_lock();
    int res = lib___kmpc_test_lock(arg1, arg2, arg3);
    POST_kmpc_test_lock();
    return res;
}

int __kmpc_test_nest_lock (ident_t * arg1, kmp_int32 arg2, void ** arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_test_nest_lock, "__kmpc_test_nest_lock");
    PRE_kmpc_test_nest_lock();
    int res = lib___kmpc_test_nest_lock(arg1, arg2, arg3);
    POST_kmpc_test_nest_lock();
    return res;
}

void __kmpc_init_lock_with_hint (ident_t * arg1, kmp_int32 arg2, void ** arg3, uintptr_t arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_init_lock_with_hint, "__kmpc_init_lock_with_hint");
    PRE_kmpc_init_lock_with_hint();
    lib___kmpc_init_lock_with_hint(arg1, arg2, arg3, arg4);
    POST_kmpc_init_lock_with_hint();
}

void __kmpc_init_nest_lock_with_hint (ident_t * arg1, kmp_int32 arg2, void ** arg3, uintptr_t arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_init_nest_lock_with_hint, "__kmpc_init_nest_lock_with_hint");
    PRE_kmpc_init_nest_lock_with_hint();
    lib___kmpc_init_nest_lock_with_hint(arg1, arg2, arg3, arg4);
    POST_kmpc_init_nest_lock_with_hint();
}

kmp_int32 __kmpc_start_record_task (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_start_record_task, "__kmpc_start_record_task");
    PRE_kmpc_start_record_task();
    kmp_int32 res = lib___kmpc_start_record_task(arg1, arg2, arg3, arg4);
    POST_kmpc_start_record_task();
    return res;
}

void __kmpc_end_record_task (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_record_task, "__kmpc_end_record_task");
    PRE_kmpc_end_record_task();
    lib___kmpc_end_record_task(arg1, arg2, arg3, arg4);
    POST_kmpc_end_record_task();
}

kmp_int32 __kmpc_reduce_nowait (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, size_t arg4, void * arg5, void (*arg6)(void *lhs_data, void *rhs_data), kmp_critical_name * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_reduce_nowait, "__kmpc_reduce_nowait");
    PRE_kmpc_reduce_nowait();
    kmp_int32 res = lib___kmpc_reduce_nowait(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_reduce_nowait();
    return res;
}

void __kmpc_end_reduce_nowait (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_reduce_nowait, "__kmpc_end_reduce_nowait");
    PRE_kmpc_end_reduce_nowait();
    lib___kmpc_end_reduce_nowait(arg1, arg2, arg3);
    POST_kmpc_end_reduce_nowait();
}

kmp_int32 __kmpc_reduce (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, size_t arg4, void * arg5, void (*arg6)(void *lhs_data, void *rhs_data), kmp_critical_name * arg7) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_reduce, "__kmpc_reduce");
    PRE_kmpc_reduce();
    kmp_int32 res = lib___kmpc_reduce(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    POST_kmpc_reduce();
    return res;
}

void __kmpc_end_reduce (ident_t * arg1, kmp_int32 arg2, kmp_critical_name * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_reduce, "__kmpc_end_reduce");
    PRE_kmpc_end_reduce();
    lib___kmpc_end_reduce(arg1, arg2, arg3);
    POST_kmpc_end_reduce();
}

kmp_uint64 __kmpc_get_taskid (void) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_get_taskid, "__kmpc_get_taskid");
    PRE_kmpc_get_taskid();
    kmp_uint64 res = lib___kmpc_get_taskid();
    POST_kmpc_get_taskid();
    return res;
}

kmp_uint64 __kmpc_get_parent_taskid (void) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_get_parent_taskid, "__kmpc_get_parent_taskid");
    PRE_kmpc_get_parent_taskid();
    kmp_uint64 res = lib___kmpc_get_parent_taskid();
    POST_kmpc_get_parent_taskid();
    return res;
}

kmp_int32 __kmpc_in_parallel (ident_t * arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_in_parallel, "__kmpc_in_parallel");
    PRE_kmpc_in_parallel();
    kmp_int32 res = lib___kmpc_in_parallel(arg1);
    POST_kmpc_in_parallel();
    return res;
}

void __kmpc_pop_num_threads (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_pop_num_threads, "__kmpc_pop_num_threads");
    PRE_kmpc_pop_num_threads();
    lib___kmpc_pop_num_threads(arg1, arg2);
    POST_kmpc_pop_num_threads();
}

void __kmpc_push_num_threads (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_push_num_threads, "__kmpc_push_num_threads");
    PRE_kmpc_push_num_threads();
    lib___kmpc_push_num_threads(arg1, arg2, arg3);
    POST_kmpc_push_num_threads();
}

void __kmpc_push_num_threads_strict (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, int arg4, const char * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_push_num_threads_strict, "__kmpc_push_num_threads_strict");
    PRE_kmpc_push_num_threads_strict();
    lib___kmpc_push_num_threads_strict(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_push_num_threads_strict();
}

void __kmpc_push_num_threads_list (ident_t * arg1, kmp_int32 arg2, kmp_uint32 arg3, kmp_int32 * arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_push_num_threads_list, "__kmpc_push_num_threads_list");
    PRE_kmpc_push_num_threads_list();
    lib___kmpc_push_num_threads_list(arg1, arg2, arg3, arg4);
    POST_kmpc_push_num_threads_list();
}

void __kmpc_push_num_threads_list_strict (ident_t * arg1, kmp_int32 arg2, kmp_uint32 arg3, kmp_int32 * arg4, int arg5, const char * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_push_num_threads_list_strict, "__kmpc_push_num_threads_list_strict");
    PRE_kmpc_push_num_threads_list_strict();
    lib___kmpc_push_num_threads_list_strict(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_push_num_threads_list_strict();
}

void __kmpc_push_proc_bind (ident_t * arg1, kmp_int32 arg2, int arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_push_proc_bind, "__kmpc_push_proc_bind");
    PRE_kmpc_push_proc_bind();
    lib___kmpc_push_proc_bind(arg1, arg2, arg3);
    POST_kmpc_push_proc_bind();
}

void __kmpc_push_num_teams (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_push_num_teams, "__kmpc_push_num_teams");
    PRE_kmpc_push_num_teams();
    lib___kmpc_push_num_teams(arg1, arg2, arg3, arg4);
    POST_kmpc_push_num_teams();
}

void __kmpc_set_thread_limit (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_set_thread_limit, "__kmpc_set_thread_limit");
    PRE_kmpc_set_thread_limit();
    lib___kmpc_set_thread_limit(arg1, arg2, arg3);
    POST_kmpc_set_thread_limit();
}

void __kmpc_push_num_teams_51 (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 arg4, kmp_int32 arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_push_num_teams_51, "__kmpc_push_num_teams_51");
    PRE_kmpc_push_num_teams_51();
    lib___kmpc_push_num_teams_51(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_push_num_teams_51();
}

void __kmpc_fork_teams (ident_t * arg1, kmp_int32 arg2, kmpc_micro arg3, ...) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_fork_teams, "__kmpc_fork_teams");
    void *a[arg2 > 0 ? arg2 : 1];
    va_list ap;
    va_start(ap, arg3);
    for (kmp_int32 i = 0; i < arg2; i++) a[i] = va_arg(ap, void *);
    va_end(ap);
    PRE_kmpc_fork_teams();
    switch (arg2) {
      case 0: lib___kmpc_fork_teams(arg1, arg2, arg3); break;
      case 1: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0]); break;
      case 2: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1]); break;
      case 3: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2]); break;
      case 4: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3]); break;
      case 5: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4]); break;
      case 6: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5]); break;
      case 7: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6]); break;
      case 8: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]); break;
      case 9: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]); break;
      case 10: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]); break;
      case 11: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10]); break;
      case 12: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11]); break;
      case 13: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12]); break;
      case 14: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13]); break;
      case 15: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14]); break;
      case 16: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15]); break;
      case 17: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16]); break;
      case 18: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17]); break;
      case 19: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18]); break;
      case 20: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19]); break;
      case 21: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20]); break;
      case 22: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21]); break;
      case 23: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22]); break;
      case 24: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23]); break;
      case 25: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24]); break;
      case 26: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25]); break;
      case 27: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26]); break;
      case 28: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27]); break;
      case 29: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28]); break;
      case 30: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29]); break;
      case 31: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30]); break;
      case 32: lib___kmpc_fork_teams(arg1, arg2, arg3, a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9], a[10], a[11], a[12], a[13], a[14], a[15], a[16], a[17], a[18], a[19], a[20], a[21], a[22], a[23], a[24], a[25], a[26], a[27], a[28], a[29], a[30], a[31]); break;
      default: hook_kmpc_forward_variadic("__kmpc_fork_teams", (void (*)(void)) lib___kmpc_fork_teams, arg1, arg2, arg3, a); break;
    }
    POST_kmpc_fork_teams();
}

void __kmpc_doacross_init (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, const struct kmp_dim * arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_doacross_init, "__kmpc_doacross_init");
    PRE_kmpc_doacross_init();
    lib___kmpc_doacross_init(arg1, arg2, arg3, arg4);
    POST_kmpc_doacross_init();
}

void __kmpc_doacross_wait (ident_t * arg1, kmp_int32 arg2, const kmp_int64 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_doacross_wait, "__kmpc_doacross_wait");
    PRE_kmpc_doacross_wait();
    lib___kmpc_doacross_wait(arg1, arg2, arg3);
    POST_kmpc_doacross_wait();
}

void __kmpc_doacross_post (ident_t * arg1, kmp_int32 arg2, const kmp_int64 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_doacross_post, "__kmpc_doacross_post");
    PRE_kmpc_doacross_post();
    lib___kmpc_doacross_post(arg1, arg2, arg3);
    POST_kmpc_doacross_post();
}

void __kmpc_doacross_fini (ident_t * arg1, kmp_int32 arg2) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_doacross_fini, "__kmpc_doacross_fini");
    PRE_kmpc_doacross_fini();
    lib___kmpc_doacross_fini(arg1, arg2);
    POST_kmpc_doacross_fini();
}

void * __kmpc_threadprivate_cached (ident_t * arg1, kmp_int32 arg2, void * arg3, size_t arg4, void *** arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_threadprivate_cached, "__kmpc_threadprivate_cached");
    PRE_kmpc_threadprivate_cached();
    void * res = lib___kmpc_threadprivate_cached(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_threadprivate_cached();
    return res;
}

int __kmpc_get_target_offload (void) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_get_target_offload, "__kmpc_get_target_offload");
    PRE_kmpc_get_target_offload();
    int res = lib___kmpc_get_target_offload();
    POST_kmpc_get_target_offload();
    return res;
}

int __kmpc_pause_resource (kmp_pause_status_t arg1) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_pause_resource, "__kmpc_pause_resource");
    PRE_kmpc_pause_resource();
    int res = lib___kmpc_pause_resource(arg1);
    POST_kmpc_pause_resource();
    return res;
}

void __kmpc_error (ident_t * arg1, int arg2, const char * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_error, "__kmpc_error");
    PRE_kmpc_error();
    lib___kmpc_error(arg1, arg2, arg3);
    POST_kmpc_error();
}

void __kmpc_scope (ident_t * arg1, kmp_int32 arg2, void * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_scope, "__kmpc_scope");
    PRE_kmpc_scope();
    lib___kmpc_scope(arg1, arg2, arg3);
    POST_kmpc_scope();
}

void __kmpc_end_scope (ident_t * arg1, kmp_int32 arg2, void * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_end_scope, "__kmpc_end_scope");
    PRE_kmpc_end_scope();
    lib___kmpc_end_scope(arg1, arg2, arg3);
    POST_kmpc_end_scope();
}

kmp_loop_nest_iv_t __kmpc_process_loop_nest_rectang (ident_t * arg1, kmp_int32 arg2, bounds_info_t * arg3, kmp_index_t arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_process_loop_nest_rectang, "__kmpc_process_loop_nest_rectang");
    PRE_kmpc_process_loop_nest_rectang();
    kmp_loop_nest_iv_t res = lib___kmpc_process_loop_nest_rectang(arg1, arg2, arg3, arg4);
    POST_kmpc_process_loop_nest_rectang();
    return res;
}

void __kmpc_calc_original_ivs_rectang (ident_t * arg1, kmp_loop_nest_iv_t arg2, const bounds_info_t * arg3, kmp_uint64 * arg4, kmp_index_t arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_calc_original_ivs_rectang, "__kmpc_calc_original_ivs_rectang");
    PRE_kmpc_calc_original_ivs_rectang();
    lib___kmpc_calc_original_ivs_rectang(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_calc_original_ivs_rectang();
}

kmp_int32 __kmpc_for_collapsed_init (ident_t * arg1, kmp_int32 arg2, bounds_info_t * arg3, bounds_info_t * arg4, kmp_index_t arg5, kmp_int32 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_for_collapsed_init, "__kmpc_for_collapsed_init");
    PRE_kmpc_for_collapsed_init();
    kmp_int32 res = lib___kmpc_for_collapsed_init(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_for_collapsed_init();
    return res;
}

void __kmpc_atomic_fixed1_add (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_add, "__kmpc_atomic_fixed1_add");
    PRE_kmpc_atomic_fixed1_add();
    lib___kmpc_atomic_fixed1_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_add();
}

void __kmpc_atomic_fixed1_andb (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_andb, "__kmpc_atomic_fixed1_andb");
    PRE_kmpc_atomic_fixed1_andb();
    lib___kmpc_atomic_fixed1_andb(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_andb();
}

void __kmpc_atomic_fixed1_div (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_div, "__kmpc_atomic_fixed1_div");
    PRE_kmpc_atomic_fixed1_div();
    lib___kmpc_atomic_fixed1_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_div();
}

void __kmpc_atomic_fixed1u_div (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1u_div, "__kmpc_atomic_fixed1u_div");
    PRE_kmpc_atomic_fixed1u_div();
    lib___kmpc_atomic_fixed1u_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1u_div();
}

void __kmpc_atomic_fixed1_mul (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_mul, "__kmpc_atomic_fixed1_mul");
    PRE_kmpc_atomic_fixed1_mul();
    lib___kmpc_atomic_fixed1_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_mul();
}

void __kmpc_atomic_fixed1_orb (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_orb, "__kmpc_atomic_fixed1_orb");
    PRE_kmpc_atomic_fixed1_orb();
    lib___kmpc_atomic_fixed1_orb(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_orb();
}

void __kmpc_atomic_fixed1_shl (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_shl, "__kmpc_atomic_fixed1_shl");
    PRE_kmpc_atomic_fixed1_shl();
    lib___kmpc_atomic_fixed1_shl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_shl();
}

void __kmpc_atomic_fixed1_shr (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_shr, "__kmpc_atomic_fixed1_shr");
    PRE_kmpc_atomic_fixed1_shr();
    lib___kmpc_atomic_fixed1_shr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_shr();
}

void __kmpc_atomic_fixed1u_shr (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1u_shr, "__kmpc_atomic_fixed1u_shr");
    PRE_kmpc_atomic_fixed1u_shr();
    lib___kmpc_atomic_fixed1u_shr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1u_shr();
}

void __kmpc_atomic_fixed1_sub (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_sub, "__kmpc_atomic_fixed1_sub");
    PRE_kmpc_atomic_fixed1_sub();
    lib___kmpc_atomic_fixed1_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_sub();
}

void __kmpc_atomic_fixed1_xor (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_xor, "__kmpc_atomic_fixed1_xor");
    PRE_kmpc_atomic_fixed1_xor();
    lib___kmpc_atomic_fixed1_xor(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_xor();
}

void __kmpc_atomic_fixed2_add (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_add, "__kmpc_atomic_fixed2_add");
    PRE_kmpc_atomic_fixed2_add();
    lib___kmpc_atomic_fixed2_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_add();
}

void __kmpc_atomic_fixed2_andb (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_andb, "__kmpc_atomic_fixed2_andb");
    PRE_kmpc_atomic_fixed2_andb();
    lib___kmpc_atomic_fixed2_andb(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_andb();
}

void __kmpc_atomic_fixed2_div (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_div, "__kmpc_atomic_fixed2_div");
    PRE_kmpc_atomic_fixed2_div();
    lib___kmpc_atomic_fixed2_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_div();
}

void __kmpc_atomic_fixed2u_div (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2u_div, "__kmpc_atomic_fixed2u_div");
    PRE_kmpc_atomic_fixed2u_div();
    lib___kmpc_atomic_fixed2u_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2u_div();
}

void __kmpc_atomic_fixed2_mul (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_mul, "__kmpc_atomic_fixed2_mul");
    PRE_kmpc_atomic_fixed2_mul();
    lib___kmpc_atomic_fixed2_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_mul();
}

void __kmpc_atomic_fixed2_orb (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_orb, "__kmpc_atomic_fixed2_orb");
    PRE_kmpc_atomic_fixed2_orb();
    lib___kmpc_atomic_fixed2_orb(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_orb();
}

void __kmpc_atomic_fixed2_shl (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_shl, "__kmpc_atomic_fixed2_shl");
    PRE_kmpc_atomic_fixed2_shl();
    lib___kmpc_atomic_fixed2_shl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_shl();
}

void __kmpc_atomic_fixed2_shr (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_shr, "__kmpc_atomic_fixed2_shr");
    PRE_kmpc_atomic_fixed2_shr();
    lib___kmpc_atomic_fixed2_shr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_shr();
}

void __kmpc_atomic_fixed2u_shr (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2u_shr, "__kmpc_atomic_fixed2u_shr");
    PRE_kmpc_atomic_fixed2u_shr();
    lib___kmpc_atomic_fixed2u_shr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2u_shr();
}

void __kmpc_atomic_fixed2_sub (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_sub, "__kmpc_atomic_fixed2_sub");
    PRE_kmpc_atomic_fixed2_sub();
    lib___kmpc_atomic_fixed2_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_sub();
}

void __kmpc_atomic_fixed2_xor (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_xor, "__kmpc_atomic_fixed2_xor");
    PRE_kmpc_atomic_fixed2_xor();
    lib___kmpc_atomic_fixed2_xor(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_xor();
}

void __kmpc_atomic_fixed4_add (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_add, "__kmpc_atomic_fixed4_add");
    PRE_kmpc_atomic_fixed4_add();
    lib___kmpc_atomic_fixed4_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_add();
}

void __kmpc_atomic_fixed4_sub (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_sub, "__kmpc_atomic_fixed4_sub");
    PRE_kmpc_atomic_fixed4_sub();
    lib___kmpc_atomic_fixed4_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_sub();
}

void __kmpc_atomic_float4_add (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_add, "__kmpc_atomic_float4_add");
    PRE_kmpc_atomic_float4_add();
    lib___kmpc_atomic_float4_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_add();
}

void __kmpc_atomic_float4_sub (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_sub, "__kmpc_atomic_float4_sub");
    PRE_kmpc_atomic_float4_sub();
    lib___kmpc_atomic_float4_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_sub();
}

void __kmpc_atomic_fixed8_add (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_add, "__kmpc_atomic_fixed8_add");
    PRE_kmpc_atomic_fixed8_add();
    lib___kmpc_atomic_fixed8_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_add();
}

void __kmpc_atomic_fixed8_sub (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_sub, "__kmpc_atomic_fixed8_sub");
    PRE_kmpc_atomic_fixed8_sub();
    lib___kmpc_atomic_fixed8_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_sub();
}

void __kmpc_atomic_float8_add (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_add, "__kmpc_atomic_float8_add");
    PRE_kmpc_atomic_float8_add();
    lib___kmpc_atomic_float8_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_add();
}

void __kmpc_atomic_float8_sub (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_sub, "__kmpc_atomic_float8_sub");
    PRE_kmpc_atomic_float8_sub();
    lib___kmpc_atomic_float8_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_sub();
}

void __kmpc_atomic_fixed4_andb (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_andb, "__kmpc_atomic_fixed4_andb");
    PRE_kmpc_atomic_fixed4_andb();
    lib___kmpc_atomic_fixed4_andb(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_andb();
}

void __kmpc_atomic_fixed4_div (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_div, "__kmpc_atomic_fixed4_div");
    PRE_kmpc_atomic_fixed4_div();
    lib___kmpc_atomic_fixed4_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_div();
}

void __kmpc_atomic_fixed4u_div (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4u_div, "__kmpc_atomic_fixed4u_div");
    PRE_kmpc_atomic_fixed4u_div();
    lib___kmpc_atomic_fixed4u_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4u_div();
}

void __kmpc_atomic_fixed4_mul (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_mul, "__kmpc_atomic_fixed4_mul");
    PRE_kmpc_atomic_fixed4_mul();
    lib___kmpc_atomic_fixed4_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_mul();
}

void __kmpc_atomic_fixed4_orb (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_orb, "__kmpc_atomic_fixed4_orb");
    PRE_kmpc_atomic_fixed4_orb();
    lib___kmpc_atomic_fixed4_orb(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_orb();
}

void __kmpc_atomic_fixed4_shl (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_shl, "__kmpc_atomic_fixed4_shl");
    PRE_kmpc_atomic_fixed4_shl();
    lib___kmpc_atomic_fixed4_shl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_shl();
}

void __kmpc_atomic_fixed4_shr (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_shr, "__kmpc_atomic_fixed4_shr");
    PRE_kmpc_atomic_fixed4_shr();
    lib___kmpc_atomic_fixed4_shr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_shr();
}

void __kmpc_atomic_fixed4u_shr (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4u_shr, "__kmpc_atomic_fixed4u_shr");
    PRE_kmpc_atomic_fixed4u_shr();
    lib___kmpc_atomic_fixed4u_shr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4u_shr();
}

void __kmpc_atomic_fixed4_xor (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_xor, "__kmpc_atomic_fixed4_xor");
    PRE_kmpc_atomic_fixed4_xor();
    lib___kmpc_atomic_fixed4_xor(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_xor();
}

void __kmpc_atomic_fixed8_andb (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_andb, "__kmpc_atomic_fixed8_andb");
    PRE_kmpc_atomic_fixed8_andb();
    lib___kmpc_atomic_fixed8_andb(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_andb();
}

void __kmpc_atomic_fixed8_div (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_div, "__kmpc_atomic_fixed8_div");
    PRE_kmpc_atomic_fixed8_div();
    lib___kmpc_atomic_fixed8_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_div();
}

void __kmpc_atomic_fixed8u_div (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8u_div, "__kmpc_atomic_fixed8u_div");
    PRE_kmpc_atomic_fixed8u_div();
    lib___kmpc_atomic_fixed8u_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8u_div();
}

void __kmpc_atomic_fixed8_mul (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_mul, "__kmpc_atomic_fixed8_mul");
    PRE_kmpc_atomic_fixed8_mul();
    lib___kmpc_atomic_fixed8_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_mul();
}

void __kmpc_atomic_fixed8_orb (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_orb, "__kmpc_atomic_fixed8_orb");
    PRE_kmpc_atomic_fixed8_orb();
    lib___kmpc_atomic_fixed8_orb(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_orb();
}

void __kmpc_atomic_fixed8_shl (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_shl, "__kmpc_atomic_fixed8_shl");
    PRE_kmpc_atomic_fixed8_shl();
    lib___kmpc_atomic_fixed8_shl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_shl();
}

void __kmpc_atomic_fixed8_shr (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_shr, "__kmpc_atomic_fixed8_shr");
    PRE_kmpc_atomic_fixed8_shr();
    lib___kmpc_atomic_fixed8_shr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_shr();
}

void __kmpc_atomic_fixed8u_shr (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8u_shr, "__kmpc_atomic_fixed8u_shr");
    PRE_kmpc_atomic_fixed8u_shr();
    lib___kmpc_atomic_fixed8u_shr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8u_shr();
}

void __kmpc_atomic_fixed8_xor (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_xor, "__kmpc_atomic_fixed8_xor");
    PRE_kmpc_atomic_fixed8_xor();
    lib___kmpc_atomic_fixed8_xor(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_xor();
}

void __kmpc_atomic_float4_div (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_div, "__kmpc_atomic_float4_div");
    PRE_kmpc_atomic_float4_div();
    lib___kmpc_atomic_float4_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_div();
}

void __kmpc_atomic_float4_mul (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_mul, "__kmpc_atomic_float4_mul");
    PRE_kmpc_atomic_float4_mul();
    lib___kmpc_atomic_float4_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_mul();
}

void __kmpc_atomic_float8_div (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_div, "__kmpc_atomic_float8_div");
    PRE_kmpc_atomic_float8_div();
    lib___kmpc_atomic_float8_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_div();
}

void __kmpc_atomic_float8_mul (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_mul, "__kmpc_atomic_float8_mul");
    PRE_kmpc_atomic_float8_mul();
    lib___kmpc_atomic_float8_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_mul();
}

void __kmpc_atomic_fixed1_andl (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_andl, "__kmpc_atomic_fixed1_andl");
    PRE_kmpc_atomic_fixed1_andl();
    lib___kmpc_atomic_fixed1_andl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_andl();
}

void __kmpc_atomic_fixed1_orl (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_orl, "__kmpc_atomic_fixed1_orl");
    PRE_kmpc_atomic_fixed1_orl();
    lib___kmpc_atomic_fixed1_orl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_orl();
}

void __kmpc_atomic_fixed2_andl (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_andl, "__kmpc_atomic_fixed2_andl");
    PRE_kmpc_atomic_fixed2_andl();
    lib___kmpc_atomic_fixed2_andl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_andl();
}

void __kmpc_atomic_fixed2_orl (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_orl, "__kmpc_atomic_fixed2_orl");
    PRE_kmpc_atomic_fixed2_orl();
    lib___kmpc_atomic_fixed2_orl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_orl();
}

void __kmpc_atomic_fixed4_andl (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_andl, "__kmpc_atomic_fixed4_andl");
    PRE_kmpc_atomic_fixed4_andl();
    lib___kmpc_atomic_fixed4_andl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_andl();
}

void __kmpc_atomic_fixed4_orl (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_orl, "__kmpc_atomic_fixed4_orl");
    PRE_kmpc_atomic_fixed4_orl();
    lib___kmpc_atomic_fixed4_orl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_orl();
}

void __kmpc_atomic_fixed8_andl (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_andl, "__kmpc_atomic_fixed8_andl");
    PRE_kmpc_atomic_fixed8_andl();
    lib___kmpc_atomic_fixed8_andl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_andl();
}

void __kmpc_atomic_fixed8_orl (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_orl, "__kmpc_atomic_fixed8_orl");
    PRE_kmpc_atomic_fixed8_orl();
    lib___kmpc_atomic_fixed8_orl(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_orl();
}

void __kmpc_atomic_fixed1_max (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_max, "__kmpc_atomic_fixed1_max");
    PRE_kmpc_atomic_fixed1_max();
    lib___kmpc_atomic_fixed1_max(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_max();
}

void __kmpc_atomic_fixed1_min (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_min, "__kmpc_atomic_fixed1_min");
    PRE_kmpc_atomic_fixed1_min();
    lib___kmpc_atomic_fixed1_min(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_min();
}

void __kmpc_atomic_fixed2_max (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_max, "__kmpc_atomic_fixed2_max");
    PRE_kmpc_atomic_fixed2_max();
    lib___kmpc_atomic_fixed2_max(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_max();
}

void __kmpc_atomic_fixed2_min (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_min, "__kmpc_atomic_fixed2_min");
    PRE_kmpc_atomic_fixed2_min();
    lib___kmpc_atomic_fixed2_min(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_min();
}

void __kmpc_atomic_fixed4_max (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_max, "__kmpc_atomic_fixed4_max");
    PRE_kmpc_atomic_fixed4_max();
    lib___kmpc_atomic_fixed4_max(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_max();
}

void __kmpc_atomic_fixed4_min (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_min, "__kmpc_atomic_fixed4_min");
    PRE_kmpc_atomic_fixed4_min();
    lib___kmpc_atomic_fixed4_min(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_min();
}

void __kmpc_atomic_fixed8_max (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_max, "__kmpc_atomic_fixed8_max");
    PRE_kmpc_atomic_fixed8_max();
    lib___kmpc_atomic_fixed8_max(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_max();
}

void __kmpc_atomic_fixed8_min (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_min, "__kmpc_atomic_fixed8_min");
    PRE_kmpc_atomic_fixed8_min();
    lib___kmpc_atomic_fixed8_min(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_min();
}

void __kmpc_atomic_float4_max (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_max, "__kmpc_atomic_float4_max");
    PRE_kmpc_atomic_float4_max();
    lib___kmpc_atomic_float4_max(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_max();
}

void __kmpc_atomic_float4_min (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_min, "__kmpc_atomic_float4_min");
    PRE_kmpc_atomic_float4_min();
    lib___kmpc_atomic_float4_min(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_min();
}

void __kmpc_atomic_float8_max (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_max, "__kmpc_atomic_float8_max");
    PRE_kmpc_atomic_float8_max();
    lib___kmpc_atomic_float8_max(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_max();
}

void __kmpc_atomic_float8_min (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_min, "__kmpc_atomic_float8_min");
    PRE_kmpc_atomic_float8_min();
    lib___kmpc_atomic_float8_min(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_min();
}

void __kmpc_atomic_float10_max (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_max, "__kmpc_atomic_float10_max");
    PRE_kmpc_atomic_float10_max();
    lib___kmpc_atomic_float10_max(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_max();
}

void __kmpc_atomic_float10_min (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_min, "__kmpc_atomic_float10_min");
    PRE_kmpc_atomic_float10_min();
    lib___kmpc_atomic_float10_min(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_min();
}

void __kmpc_atomic_fixed1_neqv (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_neqv, "__kmpc_atomic_fixed1_neqv");
    PRE_kmpc_atomic_fixed1_neqv();
    lib___kmpc_atomic_fixed1_neqv(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_neqv();
}

void __kmpc_atomic_fixed2_neqv (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_neqv, "__kmpc_atomic_fixed2_neqv");
    PRE_kmpc_atomic_fixed2_neqv();
    lib___kmpc_atomic_fixed2_neqv(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_neqv();
}

void __kmpc_atomic_fixed4_neqv (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_neqv, "__kmpc_atomic_fixed4_neqv");
    PRE_kmpc_atomic_fixed4_neqv();
    lib___kmpc_atomic_fixed4_neqv(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_neqv();
}

void __kmpc_atomic_fixed8_neqv (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_neqv, "__kmpc_atomic_fixed8_neqv");
    PRE_kmpc_atomic_fixed8_neqv();
    lib___kmpc_atomic_fixed8_neqv(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_neqv();
}

void __kmpc_atomic_fixed1_eqv (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_eqv, "__kmpc_atomic_fixed1_eqv");
    PRE_kmpc_atomic_fixed1_eqv();
    lib___kmpc_atomic_fixed1_eqv(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_eqv();
}

void __kmpc_atomic_fixed2_eqv (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_eqv, "__kmpc_atomic_fixed2_eqv");
    PRE_kmpc_atomic_fixed2_eqv();
    lib___kmpc_atomic_fixed2_eqv(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_eqv();
}

void __kmpc_atomic_fixed4_eqv (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_eqv, "__kmpc_atomic_fixed4_eqv");
    PRE_kmpc_atomic_fixed4_eqv();
    lib___kmpc_atomic_fixed4_eqv(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_eqv();
}

void __kmpc_atomic_fixed8_eqv (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_eqv, "__kmpc_atomic_fixed8_eqv");
    PRE_kmpc_atomic_fixed8_eqv();
    lib___kmpc_atomic_fixed8_eqv(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_eqv();
}

void __kmpc_atomic_float10_add (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_add, "__kmpc_atomic_float10_add");
    PRE_kmpc_atomic_float10_add();
    lib___kmpc_atomic_float10_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_add();
}

void __kmpc_atomic_float10_sub (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_sub, "__kmpc_atomic_float10_sub");
    PRE_kmpc_atomic_float10_sub();
    lib___kmpc_atomic_float10_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_sub();
}

void __kmpc_atomic_float10_mul (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_mul, "__kmpc_atomic_float10_mul");
    PRE_kmpc_atomic_float10_mul();
    lib___kmpc_atomic_float10_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_mul();
}

void __kmpc_atomic_float10_div (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_div, "__kmpc_atomic_float10_div");
    PRE_kmpc_atomic_float10_div();
    lib___kmpc_atomic_float10_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_div();
}

void __kmpc_atomic_cmplx4_add (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_add, "__kmpc_atomic_cmplx4_add");
    PRE_kmpc_atomic_cmplx4_add();
    lib___kmpc_atomic_cmplx4_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_add();
}

void __kmpc_atomic_cmplx4_sub (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_sub, "__kmpc_atomic_cmplx4_sub");
    PRE_kmpc_atomic_cmplx4_sub();
    lib___kmpc_atomic_cmplx4_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_sub();
}

void __kmpc_atomic_cmplx4_mul (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_mul, "__kmpc_atomic_cmplx4_mul");
    PRE_kmpc_atomic_cmplx4_mul();
    lib___kmpc_atomic_cmplx4_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_mul();
}

void __kmpc_atomic_cmplx4_div (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_div, "__kmpc_atomic_cmplx4_div");
    PRE_kmpc_atomic_cmplx4_div();
    lib___kmpc_atomic_cmplx4_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_div();
}

void __kmpc_atomic_cmplx8_add (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_add, "__kmpc_atomic_cmplx8_add");
    PRE_kmpc_atomic_cmplx8_add();
    lib___kmpc_atomic_cmplx8_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx8_add();
}

void __kmpc_atomic_cmplx8_sub (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_sub, "__kmpc_atomic_cmplx8_sub");
    PRE_kmpc_atomic_cmplx8_sub();
    lib___kmpc_atomic_cmplx8_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx8_sub();
}

void __kmpc_atomic_cmplx8_mul (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_mul, "__kmpc_atomic_cmplx8_mul");
    PRE_kmpc_atomic_cmplx8_mul();
    lib___kmpc_atomic_cmplx8_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx8_mul();
}

void __kmpc_atomic_cmplx8_div (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_div, "__kmpc_atomic_cmplx8_div");
    PRE_kmpc_atomic_cmplx8_div();
    lib___kmpc_atomic_cmplx8_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx8_div();
}

void __kmpc_atomic_cmplx10_add (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_add, "__kmpc_atomic_cmplx10_add");
    PRE_kmpc_atomic_cmplx10_add();
    lib___kmpc_atomic_cmplx10_add(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx10_add();
}

void __kmpc_atomic_cmplx10_sub (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_sub, "__kmpc_atomic_cmplx10_sub");
    PRE_kmpc_atomic_cmplx10_sub();
    lib___kmpc_atomic_cmplx10_sub(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx10_sub();
}

void __kmpc_atomic_cmplx10_mul (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_mul, "__kmpc_atomic_cmplx10_mul");
    PRE_kmpc_atomic_cmplx10_mul();
    lib___kmpc_atomic_cmplx10_mul(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx10_mul();
}

void __kmpc_atomic_cmplx10_div (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_div, "__kmpc_atomic_cmplx10_div");
    PRE_kmpc_atomic_cmplx10_div();
    lib___kmpc_atomic_cmplx10_div(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx10_div();
}

void __kmpc_atomic_fixed1_sub_rev (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_sub_rev, "__kmpc_atomic_fixed1_sub_rev");
    PRE_kmpc_atomic_fixed1_sub_rev();
    lib___kmpc_atomic_fixed1_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_sub_rev();
}

void __kmpc_atomic_fixed1_div_rev (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_div_rev, "__kmpc_atomic_fixed1_div_rev");
    PRE_kmpc_atomic_fixed1_div_rev();
    lib___kmpc_atomic_fixed1_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_div_rev();
}

void __kmpc_atomic_fixed1u_div_rev (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1u_div_rev, "__kmpc_atomic_fixed1u_div_rev");
    PRE_kmpc_atomic_fixed1u_div_rev();
    lib___kmpc_atomic_fixed1u_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1u_div_rev();
}

void __kmpc_atomic_fixed1_shl_rev (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_shl_rev, "__kmpc_atomic_fixed1_shl_rev");
    PRE_kmpc_atomic_fixed1_shl_rev();
    lib___kmpc_atomic_fixed1_shl_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_shl_rev();
}

void __kmpc_atomic_fixed1_shr_rev (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_shr_rev, "__kmpc_atomic_fixed1_shr_rev");
    PRE_kmpc_atomic_fixed1_shr_rev();
    lib___kmpc_atomic_fixed1_shr_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_shr_rev();
}

void __kmpc_atomic_fixed1u_shr_rev (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1u_shr_rev, "__kmpc_atomic_fixed1u_shr_rev");
    PRE_kmpc_atomic_fixed1u_shr_rev();
    lib___kmpc_atomic_fixed1u_shr_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1u_shr_rev();
}

void __kmpc_atomic_fixed2_sub_rev (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_sub_rev, "__kmpc_atomic_fixed2_sub_rev");
    PRE_kmpc_atomic_fixed2_sub_rev();
    lib___kmpc_atomic_fixed2_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_sub_rev();
}

void __kmpc_atomic_fixed2_div_rev (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_div_rev, "__kmpc_atomic_fixed2_div_rev");
    PRE_kmpc_atomic_fixed2_div_rev();
    lib___kmpc_atomic_fixed2_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_div_rev();
}

void __kmpc_atomic_fixed2u_div_rev (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2u_div_rev, "__kmpc_atomic_fixed2u_div_rev");
    PRE_kmpc_atomic_fixed2u_div_rev();
    lib___kmpc_atomic_fixed2u_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2u_div_rev();
}

void __kmpc_atomic_fixed2_shl_rev (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_shl_rev, "__kmpc_atomic_fixed2_shl_rev");
    PRE_kmpc_atomic_fixed2_shl_rev();
    lib___kmpc_atomic_fixed2_shl_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_shl_rev();
}

void __kmpc_atomic_fixed2_shr_rev (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_shr_rev, "__kmpc_atomic_fixed2_shr_rev");
    PRE_kmpc_atomic_fixed2_shr_rev();
    lib___kmpc_atomic_fixed2_shr_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_shr_rev();
}

void __kmpc_atomic_fixed2u_shr_rev (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2u_shr_rev, "__kmpc_atomic_fixed2u_shr_rev");
    PRE_kmpc_atomic_fixed2u_shr_rev();
    lib___kmpc_atomic_fixed2u_shr_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2u_shr_rev();
}

void __kmpc_atomic_fixed4_sub_rev (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_sub_rev, "__kmpc_atomic_fixed4_sub_rev");
    PRE_kmpc_atomic_fixed4_sub_rev();
    lib___kmpc_atomic_fixed4_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_sub_rev();
}

void __kmpc_atomic_fixed4_div_rev (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_div_rev, "__kmpc_atomic_fixed4_div_rev");
    PRE_kmpc_atomic_fixed4_div_rev();
    lib___kmpc_atomic_fixed4_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_div_rev();
}

void __kmpc_atomic_fixed4u_div_rev (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4u_div_rev, "__kmpc_atomic_fixed4u_div_rev");
    PRE_kmpc_atomic_fixed4u_div_rev();
    lib___kmpc_atomic_fixed4u_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4u_div_rev();
}

void __kmpc_atomic_fixed4_shl_rev (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_shl_rev, "__kmpc_atomic_fixed4_shl_rev");
    PRE_kmpc_atomic_fixed4_shl_rev();
    lib___kmpc_atomic_fixed4_shl_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_shl_rev();
}

void __kmpc_atomic_fixed4_shr_rev (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_shr_rev, "__kmpc_atomic_fixed4_shr_rev");
    PRE_kmpc_atomic_fixed4_shr_rev();
    lib___kmpc_atomic_fixed4_shr_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_shr_rev();
}

void __kmpc_atomic_fixed4u_shr_rev (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4u_shr_rev, "__kmpc_atomic_fixed4u_shr_rev");
    PRE_kmpc_atomic_fixed4u_shr_rev();
    lib___kmpc_atomic_fixed4u_shr_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4u_shr_rev();
}

void __kmpc_atomic_fixed8_sub_rev (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_sub_rev, "__kmpc_atomic_fixed8_sub_rev");
    PRE_kmpc_atomic_fixed8_sub_rev();
    lib___kmpc_atomic_fixed8_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_sub_rev();
}

void __kmpc_atomic_fixed8_div_rev (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_div_rev, "__kmpc_atomic_fixed8_div_rev");
    PRE_kmpc_atomic_fixed8_div_rev();
    lib___kmpc_atomic_fixed8_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_div_rev();
}

void __kmpc_atomic_fixed8u_div_rev (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8u_div_rev, "__kmpc_atomic_fixed8u_div_rev");
    PRE_kmpc_atomic_fixed8u_div_rev();
    lib___kmpc_atomic_fixed8u_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8u_div_rev();
}

void __kmpc_atomic_fixed8_shl_rev (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_shl_rev, "__kmpc_atomic_fixed8_shl_rev");
    PRE_kmpc_atomic_fixed8_shl_rev();
    lib___kmpc_atomic_fixed8_shl_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_shl_rev();
}

void __kmpc_atomic_fixed8_shr_rev (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_shr_rev, "__kmpc_atomic_fixed8_shr_rev");
    PRE_kmpc_atomic_fixed8_shr_rev();
    lib___kmpc_atomic_fixed8_shr_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_shr_rev();
}

void __kmpc_atomic_fixed8u_shr_rev (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8u_shr_rev, "__kmpc_atomic_fixed8u_shr_rev");
    PRE_kmpc_atomic_fixed8u_shr_rev();
    lib___kmpc_atomic_fixed8u_shr_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8u_shr_rev();
}

void __kmpc_atomic_float4_sub_rev (ident_t * arg1, int arg2, float * arg3, float arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_sub_rev, "__kmpc_atomic_float4_sub_rev");
    PRE_kmpc_atomic_float4_sub_rev();
    lib___kmpc_atomic_float4_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_sub_rev();
}

void __kmpc_atomic_float4_div_rev (ident_t * arg1, int arg2, float * arg3, float arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_div_rev, "__kmpc_atomic_float4_div_rev");
    PRE_kmpc_atomic_float4_div_rev();
    lib___kmpc_atomic_float4_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_div_rev();
}

void __kmpc_atomic_float8_sub_rev (ident_t * arg1, int arg2, double * arg3, double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_sub_rev, "__kmpc_atomic_float8_sub_rev");
    PRE_kmpc_atomic_float8_sub_rev();
    lib___kmpc_atomic_float8_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_sub_rev();
}

void __kmpc_atomic_float8_div_rev (ident_t * arg1, int arg2, double * arg3, double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_div_rev, "__kmpc_atomic_float8_div_rev");
    PRE_kmpc_atomic_float8_div_rev();
    lib___kmpc_atomic_float8_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_div_rev();
}

void __kmpc_atomic_float10_sub_rev (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_sub_rev, "__kmpc_atomic_float10_sub_rev");
    PRE_kmpc_atomic_float10_sub_rev();
    lib___kmpc_atomic_float10_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_sub_rev();
}

void __kmpc_atomic_float10_div_rev (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_div_rev, "__kmpc_atomic_float10_div_rev");
    PRE_kmpc_atomic_float10_div_rev();
    lib___kmpc_atomic_float10_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_div_rev();
}

void __kmpc_atomic_cmplx4_sub_rev (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_sub_rev, "__kmpc_atomic_cmplx4_sub_rev");
    PRE_kmpc_atomic_cmplx4_sub_rev();
    lib___kmpc_atomic_cmplx4_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_sub_rev();
}

void __kmpc_atomic_cmplx4_div_rev (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_div_rev, "__kmpc_atomic_cmplx4_div_rev");
    PRE_kmpc_atomic_cmplx4_div_rev();
    lib___kmpc_atomic_cmplx4_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_div_rev();
}

void __kmpc_atomic_cmplx8_sub_rev (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_sub_rev, "__kmpc_atomic_cmplx8_sub_rev");
    PRE_kmpc_atomic_cmplx8_sub_rev();
    lib___kmpc_atomic_cmplx8_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx8_sub_rev();
}

void __kmpc_atomic_cmplx8_div_rev (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_div_rev, "__kmpc_atomic_cmplx8_div_rev");
    PRE_kmpc_atomic_cmplx8_div_rev();
    lib___kmpc_atomic_cmplx8_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx8_div_rev();
}

void __kmpc_atomic_cmplx10_sub_rev (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_sub_rev, "__kmpc_atomic_cmplx10_sub_rev");
    PRE_kmpc_atomic_cmplx10_sub_rev();
    lib___kmpc_atomic_cmplx10_sub_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx10_sub_rev();
}

void __kmpc_atomic_cmplx10_div_rev (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_div_rev, "__kmpc_atomic_cmplx10_div_rev");
    PRE_kmpc_atomic_cmplx10_div_rev();
    lib___kmpc_atomic_cmplx10_div_rev(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx10_div_rev();
}

void __kmpc_atomic_fixed1_mul_float8 (ident_t * arg1, int arg2, char * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_mul_float8, "__kmpc_atomic_fixed1_mul_float8");
    PRE_kmpc_atomic_fixed1_mul_float8();
    lib___kmpc_atomic_fixed1_mul_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_mul_float8();
}

void __kmpc_atomic_fixed1_div_float8 (ident_t * arg1, int arg2, char * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_div_float8, "__kmpc_atomic_fixed1_div_float8");
    PRE_kmpc_atomic_fixed1_div_float8();
    lib___kmpc_atomic_fixed1_div_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_div_float8();
}

void __kmpc_atomic_fixed2_mul_float8 (ident_t * arg1, int arg2, short * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_mul_float8, "__kmpc_atomic_fixed2_mul_float8");
    PRE_kmpc_atomic_fixed2_mul_float8();
    lib___kmpc_atomic_fixed2_mul_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_mul_float8();
}

void __kmpc_atomic_fixed2_div_float8 (ident_t * arg1, int arg2, short * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_div_float8, "__kmpc_atomic_fixed2_div_float8");
    PRE_kmpc_atomic_fixed2_div_float8();
    lib___kmpc_atomic_fixed2_div_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_div_float8();
}

void __kmpc_atomic_fixed4_mul_float8 (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_mul_float8, "__kmpc_atomic_fixed4_mul_float8");
    PRE_kmpc_atomic_fixed4_mul_float8();
    lib___kmpc_atomic_fixed4_mul_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_mul_float8();
}

void __kmpc_atomic_fixed4_div_float8 (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_div_float8, "__kmpc_atomic_fixed4_div_float8");
    PRE_kmpc_atomic_fixed4_div_float8();
    lib___kmpc_atomic_fixed4_div_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_div_float8();
}

void __kmpc_atomic_fixed8_mul_float8 (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_mul_float8, "__kmpc_atomic_fixed8_mul_float8");
    PRE_kmpc_atomic_fixed8_mul_float8();
    lib___kmpc_atomic_fixed8_mul_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_mul_float8();
}

void __kmpc_atomic_fixed8_div_float8 (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_div_float8, "__kmpc_atomic_fixed8_div_float8");
    PRE_kmpc_atomic_fixed8_div_float8();
    lib___kmpc_atomic_fixed8_div_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_div_float8();
}

void __kmpc_atomic_float4_add_float8 (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_add_float8, "__kmpc_atomic_float4_add_float8");
    PRE_kmpc_atomic_float4_add_float8();
    lib___kmpc_atomic_float4_add_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_add_float8();
}

void __kmpc_atomic_float4_sub_float8 (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_sub_float8, "__kmpc_atomic_float4_sub_float8");
    PRE_kmpc_atomic_float4_sub_float8();
    lib___kmpc_atomic_float4_sub_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_sub_float8();
}

void __kmpc_atomic_float4_mul_float8 (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_mul_float8, "__kmpc_atomic_float4_mul_float8");
    PRE_kmpc_atomic_float4_mul_float8();
    lib___kmpc_atomic_float4_mul_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_mul_float8();
}

void __kmpc_atomic_float4_div_float8 (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_div_float8, "__kmpc_atomic_float4_div_float8");
    PRE_kmpc_atomic_float4_div_float8();
    lib___kmpc_atomic_float4_div_float8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_div_float8();
}

void __kmpc_atomic_cmplx4_add_cmplx8 (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_add_cmplx8, "__kmpc_atomic_cmplx4_add_cmplx8");
    PRE_kmpc_atomic_cmplx4_add_cmplx8();
    lib___kmpc_atomic_cmplx4_add_cmplx8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_add_cmplx8();
}

void __kmpc_atomic_cmplx4_sub_cmplx8 (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_sub_cmplx8, "__kmpc_atomic_cmplx4_sub_cmplx8");
    PRE_kmpc_atomic_cmplx4_sub_cmplx8();
    lib___kmpc_atomic_cmplx4_sub_cmplx8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_sub_cmplx8();
}

void __kmpc_atomic_cmplx4_mul_cmplx8 (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_mul_cmplx8, "__kmpc_atomic_cmplx4_mul_cmplx8");
    PRE_kmpc_atomic_cmplx4_mul_cmplx8();
    lib___kmpc_atomic_cmplx4_mul_cmplx8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_mul_cmplx8();
}

void __kmpc_atomic_cmplx4_div_cmplx8 (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_div_cmplx8, "__kmpc_atomic_cmplx4_div_cmplx8");
    PRE_kmpc_atomic_cmplx4_div_cmplx8();
    lib___kmpc_atomic_cmplx4_div_cmplx8(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_div_cmplx8();
}

void __kmpc_atomic_1 (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_1, "__kmpc_atomic_1");
    PRE_kmpc_atomic_1();
    lib___kmpc_atomic_1(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_1();
}

void __kmpc_atomic_2 (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_2, "__kmpc_atomic_2");
    PRE_kmpc_atomic_2();
    lib___kmpc_atomic_2(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_2();
}

void __kmpc_atomic_4 (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_4, "__kmpc_atomic_4");
    PRE_kmpc_atomic_4();
    lib___kmpc_atomic_4(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_4();
}

void __kmpc_atomic_8 (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_8, "__kmpc_atomic_8");
    PRE_kmpc_atomic_8();
    lib___kmpc_atomic_8(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_8();
}

void __kmpc_atomic_10 (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_10, "__kmpc_atomic_10");
    PRE_kmpc_atomic_10();
    lib___kmpc_atomic_10(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_10();
}

void __kmpc_atomic_16 (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_16, "__kmpc_atomic_16");
    PRE_kmpc_atomic_16();
    lib___kmpc_atomic_16(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_16();
}

void __kmpc_atomic_20 (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_20, "__kmpc_atomic_20");
    PRE_kmpc_atomic_20();
    lib___kmpc_atomic_20(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_20();
}

void __kmpc_atomic_32 (ident_t * arg1, int arg2, void * arg3, void * arg4, void (*arg5)(void *, void *, void *)) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_32, "__kmpc_atomic_32");
    PRE_kmpc_atomic_32();
    lib___kmpc_atomic_32(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_32();
}

char __kmpc_atomic_fixed1_rd (ident_t * arg1, int arg2, char * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_rd, "__kmpc_atomic_fixed1_rd");
    PRE_kmpc_atomic_fixed1_rd();
    char res = lib___kmpc_atomic_fixed1_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_fixed1_rd();
    return res;
}

short __kmpc_atomic_fixed2_rd (ident_t * arg1, int arg2, short * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_rd, "__kmpc_atomic_fixed2_rd");
    PRE_kmpc_atomic_fixed2_rd();
    short res = lib___kmpc_atomic_fixed2_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_fixed2_rd();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_rd (ident_t * arg1, int arg2, kmp_int32 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_rd, "__kmpc_atomic_fixed4_rd");
    PRE_kmpc_atomic_fixed4_rd();
    kmp_int32 res = lib___kmpc_atomic_fixed4_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_fixed4_rd();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_rd (ident_t * arg1, int arg2, kmp_int64 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_rd, "__kmpc_atomic_fixed8_rd");
    PRE_kmpc_atomic_fixed8_rd();
    kmp_int64 res = lib___kmpc_atomic_fixed8_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_fixed8_rd();
    return res;
}

kmp_real32 __kmpc_atomic_float4_rd (ident_t * arg1, int arg2, kmp_real32 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_rd, "__kmpc_atomic_float4_rd");
    PRE_kmpc_atomic_float4_rd();
    kmp_real32 res = lib___kmpc_atomic_float4_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_float4_rd();
    return res;
}

kmp_real64 __kmpc_atomic_float8_rd (ident_t * arg1, int arg2, kmp_real64 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_rd, "__kmpc_atomic_float8_rd");
    PRE_kmpc_atomic_float8_rd();
    kmp_real64 res = lib___kmpc_atomic_float8_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_float8_rd();
    return res;
}

long double __kmpc_atomic_float10_rd (ident_t * arg1, int arg2, long double * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_rd, "__kmpc_atomic_float10_rd");
    PRE_kmpc_atomic_float10_rd();
    long double res = lib___kmpc_atomic_float10_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_float10_rd();
    return res;
}

kmp_cmplx32 __kmpc_atomic_cmplx4_rd (ident_t * arg1, int arg2, kmp_cmplx32 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_rd, "__kmpc_atomic_cmplx4_rd");
    PRE_kmpc_atomic_cmplx4_rd();
    kmp_cmplx32 res = lib___kmpc_atomic_cmplx4_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_cmplx4_rd();
    return res;
}

kmp_cmplx64 __kmpc_atomic_cmplx8_rd (ident_t * arg1, int arg2, kmp_cmplx64 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_rd, "__kmpc_atomic_cmplx8_rd");
    PRE_kmpc_atomic_cmplx8_rd();
    kmp_cmplx64 res = lib___kmpc_atomic_cmplx8_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_cmplx8_rd();
    return res;
}

kmp_cmplx80 __kmpc_atomic_cmplx10_rd (ident_t * arg1, int arg2, kmp_cmplx80 * arg3) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_rd, "__kmpc_atomic_cmplx10_rd");
    PRE_kmpc_atomic_cmplx10_rd();
    kmp_cmplx80 res = lib___kmpc_atomic_cmplx10_rd(arg1, arg2, arg3);
    POST_kmpc_atomic_cmplx10_rd();
    return res;
}

void __kmpc_atomic_fixed1_wr (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_wr, "__kmpc_atomic_fixed1_wr");
    PRE_kmpc_atomic_fixed1_wr();
    lib___kmpc_atomic_fixed1_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_wr();
}

void __kmpc_atomic_fixed2_wr (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_wr, "__kmpc_atomic_fixed2_wr");
    PRE_kmpc_atomic_fixed2_wr();
    lib___kmpc_atomic_fixed2_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_wr();
}

void __kmpc_atomic_fixed4_wr (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_wr, "__kmpc_atomic_fixed4_wr");
    PRE_kmpc_atomic_fixed4_wr();
    lib___kmpc_atomic_fixed4_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_wr();
}

void __kmpc_atomic_fixed8_wr (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_wr, "__kmpc_atomic_fixed8_wr");
    PRE_kmpc_atomic_fixed8_wr();
    lib___kmpc_atomic_fixed8_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_wr();
}

void __kmpc_atomic_float4_wr (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_wr, "__kmpc_atomic_float4_wr");
    PRE_kmpc_atomic_float4_wr();
    lib___kmpc_atomic_float4_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_wr();
}

void __kmpc_atomic_float8_wr (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_wr, "__kmpc_atomic_float8_wr");
    PRE_kmpc_atomic_float8_wr();
    lib___kmpc_atomic_float8_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_wr();
}

void __kmpc_atomic_float10_wr (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_wr, "__kmpc_atomic_float10_wr");
    PRE_kmpc_atomic_float10_wr();
    lib___kmpc_atomic_float10_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_wr();
}

void __kmpc_atomic_cmplx4_wr (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_wr, "__kmpc_atomic_cmplx4_wr");
    PRE_kmpc_atomic_cmplx4_wr();
    lib___kmpc_atomic_cmplx4_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx4_wr();
}

void __kmpc_atomic_cmplx8_wr (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_wr, "__kmpc_atomic_cmplx8_wr");
    PRE_kmpc_atomic_cmplx8_wr();
    lib___kmpc_atomic_cmplx8_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx8_wr();
}

void __kmpc_atomic_cmplx10_wr (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_wr, "__kmpc_atomic_cmplx10_wr");
    PRE_kmpc_atomic_cmplx10_wr();
    lib___kmpc_atomic_cmplx10_wr(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx10_wr();
}

char __kmpc_atomic_fixed1_add_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_add_cpt, "__kmpc_atomic_fixed1_add_cpt");
    PRE_kmpc_atomic_fixed1_add_cpt();
    char res = lib___kmpc_atomic_fixed1_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_add_cpt();
    return res;
}

char __kmpc_atomic_fixed1_andb_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_andb_cpt, "__kmpc_atomic_fixed1_andb_cpt");
    PRE_kmpc_atomic_fixed1_andb_cpt();
    char res = lib___kmpc_atomic_fixed1_andb_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_andb_cpt();
    return res;
}

char __kmpc_atomic_fixed1_div_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_div_cpt, "__kmpc_atomic_fixed1_div_cpt");
    PRE_kmpc_atomic_fixed1_div_cpt();
    char res = lib___kmpc_atomic_fixed1_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_div_cpt();
    return res;
}

unsigned char __kmpc_atomic_fixed1u_div_cpt (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1u_div_cpt, "__kmpc_atomic_fixed1u_div_cpt");
    PRE_kmpc_atomic_fixed1u_div_cpt();
    unsigned char res = lib___kmpc_atomic_fixed1u_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1u_div_cpt();
    return res;
}

char __kmpc_atomic_fixed1_mul_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_mul_cpt, "__kmpc_atomic_fixed1_mul_cpt");
    PRE_kmpc_atomic_fixed1_mul_cpt();
    char res = lib___kmpc_atomic_fixed1_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_mul_cpt();
    return res;
}

char __kmpc_atomic_fixed1_orb_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_orb_cpt, "__kmpc_atomic_fixed1_orb_cpt");
    PRE_kmpc_atomic_fixed1_orb_cpt();
    char res = lib___kmpc_atomic_fixed1_orb_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_orb_cpt();
    return res;
}

char __kmpc_atomic_fixed1_shl_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_shl_cpt, "__kmpc_atomic_fixed1_shl_cpt");
    PRE_kmpc_atomic_fixed1_shl_cpt();
    char res = lib___kmpc_atomic_fixed1_shl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_shl_cpt();
    return res;
}

char __kmpc_atomic_fixed1_shr_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_shr_cpt, "__kmpc_atomic_fixed1_shr_cpt");
    PRE_kmpc_atomic_fixed1_shr_cpt();
    char res = lib___kmpc_atomic_fixed1_shr_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_shr_cpt();
    return res;
}

unsigned char __kmpc_atomic_fixed1u_shr_cpt (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1u_shr_cpt, "__kmpc_atomic_fixed1u_shr_cpt");
    PRE_kmpc_atomic_fixed1u_shr_cpt();
    unsigned char res = lib___kmpc_atomic_fixed1u_shr_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1u_shr_cpt();
    return res;
}

char __kmpc_atomic_fixed1_sub_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_sub_cpt, "__kmpc_atomic_fixed1_sub_cpt");
    PRE_kmpc_atomic_fixed1_sub_cpt();
    char res = lib___kmpc_atomic_fixed1_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_sub_cpt();
    return res;
}

char __kmpc_atomic_fixed1_xor_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_xor_cpt, "__kmpc_atomic_fixed1_xor_cpt");
    PRE_kmpc_atomic_fixed1_xor_cpt();
    char res = lib___kmpc_atomic_fixed1_xor_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_xor_cpt();
    return res;
}

short __kmpc_atomic_fixed2_add_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_add_cpt, "__kmpc_atomic_fixed2_add_cpt");
    PRE_kmpc_atomic_fixed2_add_cpt();
    short res = lib___kmpc_atomic_fixed2_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_add_cpt();
    return res;
}

short __kmpc_atomic_fixed2_andb_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_andb_cpt, "__kmpc_atomic_fixed2_andb_cpt");
    PRE_kmpc_atomic_fixed2_andb_cpt();
    short res = lib___kmpc_atomic_fixed2_andb_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_andb_cpt();
    return res;
}

short __kmpc_atomic_fixed2_div_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_div_cpt, "__kmpc_atomic_fixed2_div_cpt");
    PRE_kmpc_atomic_fixed2_div_cpt();
    short res = lib___kmpc_atomic_fixed2_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_div_cpt();
    return res;
}

unsigned short __kmpc_atomic_fixed2u_div_cpt (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2u_div_cpt, "__kmpc_atomic_fixed2u_div_cpt");
    PRE_kmpc_atomic_fixed2u_div_cpt();
    unsigned short res = lib___kmpc_atomic_fixed2u_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2u_div_cpt();
    return res;
}

short __kmpc_atomic_fixed2_mul_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_mul_cpt, "__kmpc_atomic_fixed2_mul_cpt");
    PRE_kmpc_atomic_fixed2_mul_cpt();
    short res = lib___kmpc_atomic_fixed2_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_mul_cpt();
    return res;
}

short __kmpc_atomic_fixed2_orb_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_orb_cpt, "__kmpc_atomic_fixed2_orb_cpt");
    PRE_kmpc_atomic_fixed2_orb_cpt();
    short res = lib___kmpc_atomic_fixed2_orb_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_orb_cpt();
    return res;
}

short __kmpc_atomic_fixed2_shl_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_shl_cpt, "__kmpc_atomic_fixed2_shl_cpt");
    PRE_kmpc_atomic_fixed2_shl_cpt();
    short res = lib___kmpc_atomic_fixed2_shl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_shl_cpt();
    return res;
}

short __kmpc_atomic_fixed2_shr_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_shr_cpt, "__kmpc_atomic_fixed2_shr_cpt");
    PRE_kmpc_atomic_fixed2_shr_cpt();
    short res = lib___kmpc_atomic_fixed2_shr_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_shr_cpt();
    return res;
}

unsigned short __kmpc_atomic_fixed2u_shr_cpt (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2u_shr_cpt, "__kmpc_atomic_fixed2u_shr_cpt");
    PRE_kmpc_atomic_fixed2u_shr_cpt();
    unsigned short res = lib___kmpc_atomic_fixed2u_shr_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2u_shr_cpt();
    return res;
}

short __kmpc_atomic_fixed2_sub_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_sub_cpt, "__kmpc_atomic_fixed2_sub_cpt");
    PRE_kmpc_atomic_fixed2_sub_cpt();
    short res = lib___kmpc_atomic_fixed2_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_sub_cpt();
    return res;
}

short __kmpc_atomic_fixed2_xor_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_xor_cpt, "__kmpc_atomic_fixed2_xor_cpt");
    PRE_kmpc_atomic_fixed2_xor_cpt();
    short res = lib___kmpc_atomic_fixed2_xor_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_xor_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_add_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_add_cpt, "__kmpc_atomic_fixed4_add_cpt");
    PRE_kmpc_atomic_fixed4_add_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_add_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_sub_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_sub_cpt, "__kmpc_atomic_fixed4_sub_cpt");
    PRE_kmpc_atomic_fixed4_sub_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_sub_cpt();
    return res;
}

kmp_real32 __kmpc_atomic_float4_add_cpt (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_add_cpt, "__kmpc_atomic_float4_add_cpt");
    PRE_kmpc_atomic_float4_add_cpt();
    kmp_real32 res = lib___kmpc_atomic_float4_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float4_add_cpt();
    return res;
}

kmp_real32 __kmpc_atomic_float4_sub_cpt (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_sub_cpt, "__kmpc_atomic_float4_sub_cpt");
    PRE_kmpc_atomic_float4_sub_cpt();
    kmp_real32 res = lib___kmpc_atomic_float4_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float4_sub_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_add_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_add_cpt, "__kmpc_atomic_fixed8_add_cpt");
    PRE_kmpc_atomic_fixed8_add_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_add_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_sub_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_sub_cpt, "__kmpc_atomic_fixed8_sub_cpt");
    PRE_kmpc_atomic_fixed8_sub_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_sub_cpt();
    return res;
}

kmp_real64 __kmpc_atomic_float8_add_cpt (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_add_cpt, "__kmpc_atomic_float8_add_cpt");
    PRE_kmpc_atomic_float8_add_cpt();
    kmp_real64 res = lib___kmpc_atomic_float8_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float8_add_cpt();
    return res;
}

kmp_real64 __kmpc_atomic_float8_sub_cpt (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_sub_cpt, "__kmpc_atomic_float8_sub_cpt");
    PRE_kmpc_atomic_float8_sub_cpt();
    kmp_real64 res = lib___kmpc_atomic_float8_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float8_sub_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_andb_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_andb_cpt, "__kmpc_atomic_fixed4_andb_cpt");
    PRE_kmpc_atomic_fixed4_andb_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_andb_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_andb_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_div_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_div_cpt, "__kmpc_atomic_fixed4_div_cpt");
    PRE_kmpc_atomic_fixed4_div_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_div_cpt();
    return res;
}

kmp_uint32 __kmpc_atomic_fixed4u_div_cpt (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4u_div_cpt, "__kmpc_atomic_fixed4u_div_cpt");
    PRE_kmpc_atomic_fixed4u_div_cpt();
    kmp_uint32 res = lib___kmpc_atomic_fixed4u_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4u_div_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_mul_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_mul_cpt, "__kmpc_atomic_fixed4_mul_cpt");
    PRE_kmpc_atomic_fixed4_mul_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_mul_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_orb_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_orb_cpt, "__kmpc_atomic_fixed4_orb_cpt");
    PRE_kmpc_atomic_fixed4_orb_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_orb_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_orb_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_shl_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_shl_cpt, "__kmpc_atomic_fixed4_shl_cpt");
    PRE_kmpc_atomic_fixed4_shl_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_shl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_shl_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_shr_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_shr_cpt, "__kmpc_atomic_fixed4_shr_cpt");
    PRE_kmpc_atomic_fixed4_shr_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_shr_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_shr_cpt();
    return res;
}

kmp_uint32 __kmpc_atomic_fixed4u_shr_cpt (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4u_shr_cpt, "__kmpc_atomic_fixed4u_shr_cpt");
    PRE_kmpc_atomic_fixed4u_shr_cpt();
    kmp_uint32 res = lib___kmpc_atomic_fixed4u_shr_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4u_shr_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_xor_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_xor_cpt, "__kmpc_atomic_fixed4_xor_cpt");
    PRE_kmpc_atomic_fixed4_xor_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_xor_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_xor_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_andb_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_andb_cpt, "__kmpc_atomic_fixed8_andb_cpt");
    PRE_kmpc_atomic_fixed8_andb_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_andb_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_andb_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_div_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_div_cpt, "__kmpc_atomic_fixed8_div_cpt");
    PRE_kmpc_atomic_fixed8_div_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_div_cpt();
    return res;
}

kmp_uint64 __kmpc_atomic_fixed8u_div_cpt (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8u_div_cpt, "__kmpc_atomic_fixed8u_div_cpt");
    PRE_kmpc_atomic_fixed8u_div_cpt();
    kmp_uint64 res = lib___kmpc_atomic_fixed8u_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8u_div_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_mul_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_mul_cpt, "__kmpc_atomic_fixed8_mul_cpt");
    PRE_kmpc_atomic_fixed8_mul_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_mul_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_orb_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_orb_cpt, "__kmpc_atomic_fixed8_orb_cpt");
    PRE_kmpc_atomic_fixed8_orb_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_orb_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_orb_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_shl_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_shl_cpt, "__kmpc_atomic_fixed8_shl_cpt");
    PRE_kmpc_atomic_fixed8_shl_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_shl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_shl_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_shr_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_shr_cpt, "__kmpc_atomic_fixed8_shr_cpt");
    PRE_kmpc_atomic_fixed8_shr_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_shr_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_shr_cpt();
    return res;
}

kmp_uint64 __kmpc_atomic_fixed8u_shr_cpt (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8u_shr_cpt, "__kmpc_atomic_fixed8u_shr_cpt");
    PRE_kmpc_atomic_fixed8u_shr_cpt();
    kmp_uint64 res = lib___kmpc_atomic_fixed8u_shr_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8u_shr_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_xor_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_xor_cpt, "__kmpc_atomic_fixed8_xor_cpt");
    PRE_kmpc_atomic_fixed8_xor_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_xor_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_xor_cpt();
    return res;
}

kmp_real32 __kmpc_atomic_float4_div_cpt (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_div_cpt, "__kmpc_atomic_float4_div_cpt");
    PRE_kmpc_atomic_float4_div_cpt();
    kmp_real32 res = lib___kmpc_atomic_float4_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float4_div_cpt();
    return res;
}

kmp_real32 __kmpc_atomic_float4_mul_cpt (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_mul_cpt, "__kmpc_atomic_float4_mul_cpt");
    PRE_kmpc_atomic_float4_mul_cpt();
    kmp_real32 res = lib___kmpc_atomic_float4_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float4_mul_cpt();
    return res;
}

kmp_real64 __kmpc_atomic_float8_div_cpt (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_div_cpt, "__kmpc_atomic_float8_div_cpt");
    PRE_kmpc_atomic_float8_div_cpt();
    kmp_real64 res = lib___kmpc_atomic_float8_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float8_div_cpt();
    return res;
}

kmp_real64 __kmpc_atomic_float8_mul_cpt (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_mul_cpt, "__kmpc_atomic_float8_mul_cpt");
    PRE_kmpc_atomic_float8_mul_cpt();
    kmp_real64 res = lib___kmpc_atomic_float8_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float8_mul_cpt();
    return res;
}

char __kmpc_atomic_fixed1_andl_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_andl_cpt, "__kmpc_atomic_fixed1_andl_cpt");
    PRE_kmpc_atomic_fixed1_andl_cpt();
    char res = lib___kmpc_atomic_fixed1_andl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_andl_cpt();
    return res;
}

char __kmpc_atomic_fixed1_orl_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_orl_cpt, "__kmpc_atomic_fixed1_orl_cpt");
    PRE_kmpc_atomic_fixed1_orl_cpt();
    char res = lib___kmpc_atomic_fixed1_orl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_orl_cpt();
    return res;
}

short __kmpc_atomic_fixed2_andl_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_andl_cpt, "__kmpc_atomic_fixed2_andl_cpt");
    PRE_kmpc_atomic_fixed2_andl_cpt();
    short res = lib___kmpc_atomic_fixed2_andl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_andl_cpt();
    return res;
}

short __kmpc_atomic_fixed2_orl_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_orl_cpt, "__kmpc_atomic_fixed2_orl_cpt");
    PRE_kmpc_atomic_fixed2_orl_cpt();
    short res = lib___kmpc_atomic_fixed2_orl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_orl_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_andl_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_andl_cpt, "__kmpc_atomic_fixed4_andl_cpt");
    PRE_kmpc_atomic_fixed4_andl_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_andl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_andl_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_orl_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_orl_cpt, "__kmpc_atomic_fixed4_orl_cpt");
    PRE_kmpc_atomic_fixed4_orl_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_orl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_orl_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_andl_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_andl_cpt, "__kmpc_atomic_fixed8_andl_cpt");
    PRE_kmpc_atomic_fixed8_andl_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_andl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_andl_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_orl_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_orl_cpt, "__kmpc_atomic_fixed8_orl_cpt");
    PRE_kmpc_atomic_fixed8_orl_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_orl_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_orl_cpt();
    return res;
}

char __kmpc_atomic_fixed1_max_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_max_cpt, "__kmpc_atomic_fixed1_max_cpt");
    PRE_kmpc_atomic_fixed1_max_cpt();
    char res = lib___kmpc_atomic_fixed1_max_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_max_cpt();
    return res;
}

char __kmpc_atomic_fixed1_min_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_min_cpt, "__kmpc_atomic_fixed1_min_cpt");
    PRE_kmpc_atomic_fixed1_min_cpt();
    char res = lib___kmpc_atomic_fixed1_min_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_min_cpt();
    return res;
}

short __kmpc_atomic_fixed2_max_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_max_cpt, "__kmpc_atomic_fixed2_max_cpt");
    PRE_kmpc_atomic_fixed2_max_cpt();
    short res = lib___kmpc_atomic_fixed2_max_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_max_cpt();
    return res;
}

short __kmpc_atomic_fixed2_min_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_min_cpt, "__kmpc_atomic_fixed2_min_cpt");
    PRE_kmpc_atomic_fixed2_min_cpt();
    short res = lib___kmpc_atomic_fixed2_min_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_min_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_max_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_max_cpt, "__kmpc_atomic_fixed4_max_cpt");
    PRE_kmpc_atomic_fixed4_max_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_max_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_max_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_min_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_min_cpt, "__kmpc_atomic_fixed4_min_cpt");
    PRE_kmpc_atomic_fixed4_min_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_min_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_min_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_max_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_max_cpt, "__kmpc_atomic_fixed8_max_cpt");
    PRE_kmpc_atomic_fixed8_max_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_max_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_max_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_min_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_min_cpt, "__kmpc_atomic_fixed8_min_cpt");
    PRE_kmpc_atomic_fixed8_min_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_min_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_min_cpt();
    return res;
}

kmp_real32 __kmpc_atomic_float4_max_cpt (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_max_cpt, "__kmpc_atomic_float4_max_cpt");
    PRE_kmpc_atomic_float4_max_cpt();
    kmp_real32 res = lib___kmpc_atomic_float4_max_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float4_max_cpt();
    return res;
}

kmp_real32 __kmpc_atomic_float4_min_cpt (ident_t * arg1, int arg2, kmp_real32 * arg3, kmp_real32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_min_cpt, "__kmpc_atomic_float4_min_cpt");
    PRE_kmpc_atomic_float4_min_cpt();
    kmp_real32 res = lib___kmpc_atomic_float4_min_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float4_min_cpt();
    return res;
}

kmp_real64 __kmpc_atomic_float8_max_cpt (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_max_cpt, "__kmpc_atomic_float8_max_cpt");
    PRE_kmpc_atomic_float8_max_cpt();
    kmp_real64 res = lib___kmpc_atomic_float8_max_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float8_max_cpt();
    return res;
}

kmp_real64 __kmpc_atomic_float8_min_cpt (ident_t * arg1, int arg2, kmp_real64 * arg3, kmp_real64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_min_cpt, "__kmpc_atomic_float8_min_cpt");
    PRE_kmpc_atomic_float8_min_cpt();
    kmp_real64 res = lib___kmpc_atomic_float8_min_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float8_min_cpt();
    return res;
}

long double __kmpc_atomic_float10_max_cpt (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_max_cpt, "__kmpc_atomic_float10_max_cpt");
    PRE_kmpc_atomic_float10_max_cpt();
    long double res = lib___kmpc_atomic_float10_max_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float10_max_cpt();
    return res;
}

long double __kmpc_atomic_float10_min_cpt (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_min_cpt, "__kmpc_atomic_float10_min_cpt");
    PRE_kmpc_atomic_float10_min_cpt();
    long double res = lib___kmpc_atomic_float10_min_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float10_min_cpt();
    return res;
}

char __kmpc_atomic_fixed1_neqv_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_neqv_cpt, "__kmpc_atomic_fixed1_neqv_cpt");
    PRE_kmpc_atomic_fixed1_neqv_cpt();
    char res = lib___kmpc_atomic_fixed1_neqv_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_neqv_cpt();
    return res;
}

short __kmpc_atomic_fixed2_neqv_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_neqv_cpt, "__kmpc_atomic_fixed2_neqv_cpt");
    PRE_kmpc_atomic_fixed2_neqv_cpt();
    short res = lib___kmpc_atomic_fixed2_neqv_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_neqv_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_neqv_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_neqv_cpt, "__kmpc_atomic_fixed4_neqv_cpt");
    PRE_kmpc_atomic_fixed4_neqv_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_neqv_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_neqv_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_neqv_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_neqv_cpt, "__kmpc_atomic_fixed8_neqv_cpt");
    PRE_kmpc_atomic_fixed8_neqv_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_neqv_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_neqv_cpt();
    return res;
}

char __kmpc_atomic_fixed1_eqv_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_eqv_cpt, "__kmpc_atomic_fixed1_eqv_cpt");
    PRE_kmpc_atomic_fixed1_eqv_cpt();
    char res = lib___kmpc_atomic_fixed1_eqv_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_eqv_cpt();
    return res;
}

short __kmpc_atomic_fixed2_eqv_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_eqv_cpt, "__kmpc_atomic_fixed2_eqv_cpt");
    PRE_kmpc_atomic_fixed2_eqv_cpt();
    short res = lib___kmpc_atomic_fixed2_eqv_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_eqv_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_eqv_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_eqv_cpt, "__kmpc_atomic_fixed4_eqv_cpt");
    PRE_kmpc_atomic_fixed4_eqv_cpt();
    kmp_int32 res = lib___kmpc_atomic_fixed4_eqv_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_eqv_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_eqv_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_eqv_cpt, "__kmpc_atomic_fixed8_eqv_cpt");
    PRE_kmpc_atomic_fixed8_eqv_cpt();
    kmp_int64 res = lib___kmpc_atomic_fixed8_eqv_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_eqv_cpt();
    return res;
}

long double __kmpc_atomic_float10_add_cpt (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_add_cpt, "__kmpc_atomic_float10_add_cpt");
    PRE_kmpc_atomic_float10_add_cpt();
    long double res = lib___kmpc_atomic_float10_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float10_add_cpt();
    return res;
}

long double __kmpc_atomic_float10_sub_cpt (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_sub_cpt, "__kmpc_atomic_float10_sub_cpt");
    PRE_kmpc_atomic_float10_sub_cpt();
    long double res = lib___kmpc_atomic_float10_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float10_sub_cpt();
    return res;
}

long double __kmpc_atomic_float10_mul_cpt (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_mul_cpt, "__kmpc_atomic_float10_mul_cpt");
    PRE_kmpc_atomic_float10_mul_cpt();
    long double res = lib___kmpc_atomic_float10_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float10_mul_cpt();
    return res;
}

long double __kmpc_atomic_float10_div_cpt (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_div_cpt, "__kmpc_atomic_float10_div_cpt");
    PRE_kmpc_atomic_float10_div_cpt();
    long double res = lib___kmpc_atomic_float10_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float10_div_cpt();
    return res;
}

void __kmpc_atomic_cmplx4_add_cpt (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_add_cpt, "__kmpc_atomic_cmplx4_add_cpt");
    PRE_kmpc_atomic_cmplx4_add_cpt();
    lib___kmpc_atomic_cmplx4_add_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_cmplx4_add_cpt();
}

void __kmpc_atomic_cmplx4_sub_cpt (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_sub_cpt, "__kmpc_atomic_cmplx4_sub_cpt");
    PRE_kmpc_atomic_cmplx4_sub_cpt();
    lib___kmpc_atomic_cmplx4_sub_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_cmplx4_sub_cpt();
}

void __kmpc_atomic_cmplx4_mul_cpt (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_mul_cpt, "__kmpc_atomic_cmplx4_mul_cpt");
    PRE_kmpc_atomic_cmplx4_mul_cpt();
    lib___kmpc_atomic_cmplx4_mul_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_cmplx4_mul_cpt();
}

void __kmpc_atomic_cmplx4_div_cpt (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_div_cpt, "__kmpc_atomic_cmplx4_div_cpt");
    PRE_kmpc_atomic_cmplx4_div_cpt();
    lib___kmpc_atomic_cmplx4_div_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_cmplx4_div_cpt();
}

kmp_cmplx64 __kmpc_atomic_cmplx8_add_cpt (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_add_cpt, "__kmpc_atomic_cmplx8_add_cpt");
    PRE_kmpc_atomic_cmplx8_add_cpt();
    kmp_cmplx64 res = lib___kmpc_atomic_cmplx8_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx8_add_cpt();
    return res;
}

kmp_cmplx64 __kmpc_atomic_cmplx8_sub_cpt (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_sub_cpt, "__kmpc_atomic_cmplx8_sub_cpt");
    PRE_kmpc_atomic_cmplx8_sub_cpt();
    kmp_cmplx64 res = lib___kmpc_atomic_cmplx8_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx8_sub_cpt();
    return res;
}

kmp_cmplx64 __kmpc_atomic_cmplx8_mul_cpt (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_mul_cpt, "__kmpc_atomic_cmplx8_mul_cpt");
    PRE_kmpc_atomic_cmplx8_mul_cpt();
    kmp_cmplx64 res = lib___kmpc_atomic_cmplx8_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx8_mul_cpt();
    return res;
}

kmp_cmplx64 __kmpc_atomic_cmplx8_div_cpt (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_div_cpt, "__kmpc_atomic_cmplx8_div_cpt");
    PRE_kmpc_atomic_cmplx8_div_cpt();
    kmp_cmplx64 res = lib___kmpc_atomic_cmplx8_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx8_div_cpt();
    return res;
}

kmp_cmplx80 __kmpc_atomic_cmplx10_add_cpt (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_add_cpt, "__kmpc_atomic_cmplx10_add_cpt");
    PRE_kmpc_atomic_cmplx10_add_cpt();
    kmp_cmplx80 res = lib___kmpc_atomic_cmplx10_add_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx10_add_cpt();
    return res;
}

kmp_cmplx80 __kmpc_atomic_cmplx10_sub_cpt (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_sub_cpt, "__kmpc_atomic_cmplx10_sub_cpt");
    PRE_kmpc_atomic_cmplx10_sub_cpt();
    kmp_cmplx80 res = lib___kmpc_atomic_cmplx10_sub_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx10_sub_cpt();
    return res;
}

kmp_cmplx80 __kmpc_atomic_cmplx10_mul_cpt (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_mul_cpt, "__kmpc_atomic_cmplx10_mul_cpt");
    PRE_kmpc_atomic_cmplx10_mul_cpt();
    kmp_cmplx80 res = lib___kmpc_atomic_cmplx10_mul_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx10_mul_cpt();
    return res;
}

kmp_cmplx80 __kmpc_atomic_cmplx10_div_cpt (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_div_cpt, "__kmpc_atomic_cmplx10_div_cpt");
    PRE_kmpc_atomic_cmplx10_div_cpt();
    kmp_cmplx80 res = lib___kmpc_atomic_cmplx10_div_cpt(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx10_div_cpt();
    return res;
}

void __kmpc_atomic_start (void) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_start, "__kmpc_atomic_start");
    PRE_kmpc_atomic_start();
    lib___kmpc_atomic_start();
    POST_kmpc_atomic_start();
}

void __kmpc_atomic_end (void) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_end, "__kmpc_atomic_end");
    PRE_kmpc_atomic_end();
    lib___kmpc_atomic_end();
    POST_kmpc_atomic_end();
}

char __kmpc_atomic_fixed1_sub_cpt_rev (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_sub_cpt_rev, "__kmpc_atomic_fixed1_sub_cpt_rev");
    PRE_kmpc_atomic_fixed1_sub_cpt_rev();
    char res = lib___kmpc_atomic_fixed1_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_sub_cpt_rev();
    return res;
}

char __kmpc_atomic_fixed1_div_cpt_rev (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_div_cpt_rev, "__kmpc_atomic_fixed1_div_cpt_rev");
    PRE_kmpc_atomic_fixed1_div_cpt_rev();
    char res = lib___kmpc_atomic_fixed1_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_div_cpt_rev();
    return res;
}

unsigned char __kmpc_atomic_fixed1u_div_cpt_rev (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1u_div_cpt_rev, "__kmpc_atomic_fixed1u_div_cpt_rev");
    PRE_kmpc_atomic_fixed1u_div_cpt_rev();
    unsigned char res = lib___kmpc_atomic_fixed1u_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1u_div_cpt_rev();
    return res;
}

char __kmpc_atomic_fixed1_shl_cpt_rev (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_shl_cpt_rev, "__kmpc_atomic_fixed1_shl_cpt_rev");
    PRE_kmpc_atomic_fixed1_shl_cpt_rev();
    char res = lib___kmpc_atomic_fixed1_shl_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_shl_cpt_rev();
    return res;
}

char __kmpc_atomic_fixed1_shr_cpt_rev (ident_t * arg1, int arg2, char * arg3, char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_shr_cpt_rev, "__kmpc_atomic_fixed1_shr_cpt_rev");
    PRE_kmpc_atomic_fixed1_shr_cpt_rev();
    char res = lib___kmpc_atomic_fixed1_shr_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1_shr_cpt_rev();
    return res;
}

unsigned char __kmpc_atomic_fixed1u_shr_cpt_rev (ident_t * arg1, int arg2, unsigned char * arg3, unsigned char arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1u_shr_cpt_rev, "__kmpc_atomic_fixed1u_shr_cpt_rev");
    PRE_kmpc_atomic_fixed1u_shr_cpt_rev();
    unsigned char res = lib___kmpc_atomic_fixed1u_shr_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed1u_shr_cpt_rev();
    return res;
}

short __kmpc_atomic_fixed2_sub_cpt_rev (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_sub_cpt_rev, "__kmpc_atomic_fixed2_sub_cpt_rev");
    PRE_kmpc_atomic_fixed2_sub_cpt_rev();
    short res = lib___kmpc_atomic_fixed2_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_sub_cpt_rev();
    return res;
}

short __kmpc_atomic_fixed2_div_cpt_rev (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_div_cpt_rev, "__kmpc_atomic_fixed2_div_cpt_rev");
    PRE_kmpc_atomic_fixed2_div_cpt_rev();
    short res = lib___kmpc_atomic_fixed2_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_div_cpt_rev();
    return res;
}

unsigned short __kmpc_atomic_fixed2u_div_cpt_rev (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2u_div_cpt_rev, "__kmpc_atomic_fixed2u_div_cpt_rev");
    PRE_kmpc_atomic_fixed2u_div_cpt_rev();
    unsigned short res = lib___kmpc_atomic_fixed2u_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2u_div_cpt_rev();
    return res;
}

short __kmpc_atomic_fixed2_shl_cpt_rev (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_shl_cpt_rev, "__kmpc_atomic_fixed2_shl_cpt_rev");
    PRE_kmpc_atomic_fixed2_shl_cpt_rev();
    short res = lib___kmpc_atomic_fixed2_shl_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_shl_cpt_rev();
    return res;
}

short __kmpc_atomic_fixed2_shr_cpt_rev (ident_t * arg1, int arg2, short * arg3, short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_shr_cpt_rev, "__kmpc_atomic_fixed2_shr_cpt_rev");
    PRE_kmpc_atomic_fixed2_shr_cpt_rev();
    short res = lib___kmpc_atomic_fixed2_shr_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2_shr_cpt_rev();
    return res;
}

unsigned short __kmpc_atomic_fixed2u_shr_cpt_rev (ident_t * arg1, int arg2, unsigned short * arg3, unsigned short arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2u_shr_cpt_rev, "__kmpc_atomic_fixed2u_shr_cpt_rev");
    PRE_kmpc_atomic_fixed2u_shr_cpt_rev();
    unsigned short res = lib___kmpc_atomic_fixed2u_shr_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed2u_shr_cpt_rev();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_sub_cpt_rev (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_sub_cpt_rev, "__kmpc_atomic_fixed4_sub_cpt_rev");
    PRE_kmpc_atomic_fixed4_sub_cpt_rev();
    kmp_int32 res = lib___kmpc_atomic_fixed4_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_sub_cpt_rev();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_div_cpt_rev (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_div_cpt_rev, "__kmpc_atomic_fixed4_div_cpt_rev");
    PRE_kmpc_atomic_fixed4_div_cpt_rev();
    kmp_int32 res = lib___kmpc_atomic_fixed4_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_div_cpt_rev();
    return res;
}

kmp_uint32 __kmpc_atomic_fixed4u_div_cpt_rev (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4u_div_cpt_rev, "__kmpc_atomic_fixed4u_div_cpt_rev");
    PRE_kmpc_atomic_fixed4u_div_cpt_rev();
    kmp_uint32 res = lib___kmpc_atomic_fixed4u_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4u_div_cpt_rev();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_shl_cpt_rev (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_shl_cpt_rev, "__kmpc_atomic_fixed4_shl_cpt_rev");
    PRE_kmpc_atomic_fixed4_shl_cpt_rev();
    kmp_int32 res = lib___kmpc_atomic_fixed4_shl_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_shl_cpt_rev();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_shr_cpt_rev (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_shr_cpt_rev, "__kmpc_atomic_fixed4_shr_cpt_rev");
    PRE_kmpc_atomic_fixed4_shr_cpt_rev();
    kmp_int32 res = lib___kmpc_atomic_fixed4_shr_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4_shr_cpt_rev();
    return res;
}

kmp_uint32 __kmpc_atomic_fixed4u_shr_cpt_rev (ident_t * arg1, int arg2, kmp_uint32 * arg3, kmp_uint32 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4u_shr_cpt_rev, "__kmpc_atomic_fixed4u_shr_cpt_rev");
    PRE_kmpc_atomic_fixed4u_shr_cpt_rev();
    kmp_uint32 res = lib___kmpc_atomic_fixed4u_shr_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed4u_shr_cpt_rev();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_sub_cpt_rev (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_sub_cpt_rev, "__kmpc_atomic_fixed8_sub_cpt_rev");
    PRE_kmpc_atomic_fixed8_sub_cpt_rev();
    kmp_int64 res = lib___kmpc_atomic_fixed8_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_sub_cpt_rev();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_div_cpt_rev (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_div_cpt_rev, "__kmpc_atomic_fixed8_div_cpt_rev");
    PRE_kmpc_atomic_fixed8_div_cpt_rev();
    kmp_int64 res = lib___kmpc_atomic_fixed8_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_div_cpt_rev();
    return res;
}

kmp_uint64 __kmpc_atomic_fixed8u_div_cpt_rev (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8u_div_cpt_rev, "__kmpc_atomic_fixed8u_div_cpt_rev");
    PRE_kmpc_atomic_fixed8u_div_cpt_rev();
    kmp_uint64 res = lib___kmpc_atomic_fixed8u_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8u_div_cpt_rev();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_shl_cpt_rev (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_shl_cpt_rev, "__kmpc_atomic_fixed8_shl_cpt_rev");
    PRE_kmpc_atomic_fixed8_shl_cpt_rev();
    kmp_int64 res = lib___kmpc_atomic_fixed8_shl_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_shl_cpt_rev();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_shr_cpt_rev (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_shr_cpt_rev, "__kmpc_atomic_fixed8_shr_cpt_rev");
    PRE_kmpc_atomic_fixed8_shr_cpt_rev();
    kmp_int64 res = lib___kmpc_atomic_fixed8_shr_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8_shr_cpt_rev();
    return res;
}

kmp_uint64 __kmpc_atomic_fixed8u_shr_cpt_rev (ident_t * arg1, int arg2, kmp_uint64 * arg3, kmp_uint64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8u_shr_cpt_rev, "__kmpc_atomic_fixed8u_shr_cpt_rev");
    PRE_kmpc_atomic_fixed8u_shr_cpt_rev();
    kmp_uint64 res = lib___kmpc_atomic_fixed8u_shr_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_fixed8u_shr_cpt_rev();
    return res;
}

float __kmpc_atomic_float4_sub_cpt_rev (ident_t * arg1, int arg2, float * arg3, float arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_sub_cpt_rev, "__kmpc_atomic_float4_sub_cpt_rev");
    PRE_kmpc_atomic_float4_sub_cpt_rev();
    float res = lib___kmpc_atomic_float4_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float4_sub_cpt_rev();
    return res;
}

float __kmpc_atomic_float4_div_cpt_rev (ident_t * arg1, int arg2, float * arg3, float arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_div_cpt_rev, "__kmpc_atomic_float4_div_cpt_rev");
    PRE_kmpc_atomic_float4_div_cpt_rev();
    float res = lib___kmpc_atomic_float4_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float4_div_cpt_rev();
    return res;
}

double __kmpc_atomic_float8_sub_cpt_rev (ident_t * arg1, int arg2, double * arg3, double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_sub_cpt_rev, "__kmpc_atomic_float8_sub_cpt_rev");
    PRE_kmpc_atomic_float8_sub_cpt_rev();
    double res = lib___kmpc_atomic_float8_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float8_sub_cpt_rev();
    return res;
}

double __kmpc_atomic_float8_div_cpt_rev (ident_t * arg1, int arg2, double * arg3, double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_div_cpt_rev, "__kmpc_atomic_float8_div_cpt_rev");
    PRE_kmpc_atomic_float8_div_cpt_rev();
    double res = lib___kmpc_atomic_float8_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float8_div_cpt_rev();
    return res;
}

long double __kmpc_atomic_float10_sub_cpt_rev (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_sub_cpt_rev, "__kmpc_atomic_float10_sub_cpt_rev");
    PRE_kmpc_atomic_float10_sub_cpt_rev();
    long double res = lib___kmpc_atomic_float10_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float10_sub_cpt_rev();
    return res;
}

long double __kmpc_atomic_float10_div_cpt_rev (ident_t * arg1, int arg2, long double * arg3, long double arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_div_cpt_rev, "__kmpc_atomic_float10_div_cpt_rev");
    PRE_kmpc_atomic_float10_div_cpt_rev();
    long double res = lib___kmpc_atomic_float10_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_float10_div_cpt_rev();
    return res;
}

void __kmpc_atomic_cmplx4_sub_cpt_rev (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_sub_cpt_rev, "__kmpc_atomic_cmplx4_sub_cpt_rev");
    PRE_kmpc_atomic_cmplx4_sub_cpt_rev();
    lib___kmpc_atomic_cmplx4_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_cmplx4_sub_cpt_rev();
}

void __kmpc_atomic_cmplx4_div_cpt_rev (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5, int arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_div_cpt_rev, "__kmpc_atomic_cmplx4_div_cpt_rev");
    PRE_kmpc_atomic_cmplx4_div_cpt_rev();
    lib___kmpc_atomic_cmplx4_div_cpt_rev(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_cmplx4_div_cpt_rev();
}

kmp_cmplx64 __kmpc_atomic_cmplx8_sub_cpt_rev (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_sub_cpt_rev, "__kmpc_atomic_cmplx8_sub_cpt_rev");
    PRE_kmpc_atomic_cmplx8_sub_cpt_rev();
    kmp_cmplx64 res = lib___kmpc_atomic_cmplx8_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx8_sub_cpt_rev();
    return res;
}

kmp_cmplx64 __kmpc_atomic_cmplx8_div_cpt_rev (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_div_cpt_rev, "__kmpc_atomic_cmplx8_div_cpt_rev");
    PRE_kmpc_atomic_cmplx8_div_cpt_rev();
    kmp_cmplx64 res = lib___kmpc_atomic_cmplx8_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx8_div_cpt_rev();
    return res;
}

kmp_cmplx80 __kmpc_atomic_cmplx10_sub_cpt_rev (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_sub_cpt_rev, "__kmpc_atomic_cmplx10_sub_cpt_rev");
    PRE_kmpc_atomic_cmplx10_sub_cpt_rev();
    kmp_cmplx80 res = lib___kmpc_atomic_cmplx10_sub_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx10_sub_cpt_rev();
    return res;
}

kmp_cmplx80 __kmpc_atomic_cmplx10_div_cpt_rev (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4, int arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_div_cpt_rev, "__kmpc_atomic_cmplx10_div_cpt_rev");
    PRE_kmpc_atomic_cmplx10_div_cpt_rev();
    kmp_cmplx80 res = lib___kmpc_atomic_cmplx10_div_cpt_rev(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx10_div_cpt_rev();
    return res;
}

char __kmpc_atomic_fixed1_swp (ident_t * arg1, int arg2, char * arg3, char arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed1_swp, "__kmpc_atomic_fixed1_swp");
    PRE_kmpc_atomic_fixed1_swp();
    char res = lib___kmpc_atomic_fixed1_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed1_swp();
    return res;
}

short __kmpc_atomic_fixed2_swp (ident_t * arg1, int arg2, short * arg3, short arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed2_swp, "__kmpc_atomic_fixed2_swp");
    PRE_kmpc_atomic_fixed2_swp();
    short res = lib___kmpc_atomic_fixed2_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed2_swp();
    return res;
}

kmp_int32 __kmpc_atomic_fixed4_swp (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed4_swp, "__kmpc_atomic_fixed4_swp");
    PRE_kmpc_atomic_fixed4_swp();
    kmp_int32 res = lib___kmpc_atomic_fixed4_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed4_swp();
    return res;
}

kmp_int64 __kmpc_atomic_fixed8_swp (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_fixed8_swp, "__kmpc_atomic_fixed8_swp");
    PRE_kmpc_atomic_fixed8_swp();
    kmp_int64 res = lib___kmpc_atomic_fixed8_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_fixed8_swp();
    return res;
}

float __kmpc_atomic_float4_swp (ident_t * arg1, int arg2, float * arg3, float arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float4_swp, "__kmpc_atomic_float4_swp");
    PRE_kmpc_atomic_float4_swp();
    float res = lib___kmpc_atomic_float4_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float4_swp();
    return res;
}

double __kmpc_atomic_float8_swp (ident_t * arg1, int arg2, double * arg3, double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float8_swp, "__kmpc_atomic_float8_swp");
    PRE_kmpc_atomic_float8_swp();
    double res = lib___kmpc_atomic_float8_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float8_swp();
    return res;
}

long double __kmpc_atomic_float10_swp (ident_t * arg1, int arg2, long double * arg3, long double arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_float10_swp, "__kmpc_atomic_float10_swp");
    PRE_kmpc_atomic_float10_swp();
    long double res = lib___kmpc_atomic_float10_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_float10_swp();
    return res;
}

void __kmpc_atomic_cmplx4_swp (ident_t * arg1, int arg2, kmp_cmplx32 * arg3, kmp_cmplx32 arg4, kmp_cmplx32 * arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx4_swp, "__kmpc_atomic_cmplx4_swp");
    PRE_kmpc_atomic_cmplx4_swp();
    lib___kmpc_atomic_cmplx4_swp(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_cmplx4_swp();
}

kmp_cmplx64 __kmpc_atomic_cmplx8_swp (ident_t * arg1, int arg2, kmp_cmplx64 * arg3, kmp_cmplx64 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx8_swp, "__kmpc_atomic_cmplx8_swp");
    PRE_kmpc_atomic_cmplx8_swp();
    kmp_cmplx64 res = lib___kmpc_atomic_cmplx8_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx8_swp();
    return res;
}

kmp_cmplx80 __kmpc_atomic_cmplx10_swp (ident_t * arg1, int arg2, kmp_cmplx80 * arg3, kmp_cmplx80 arg4) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_cmplx10_swp, "__kmpc_atomic_cmplx10_swp");
    PRE_kmpc_atomic_cmplx10_swp();
    kmp_cmplx80 res = lib___kmpc_atomic_cmplx10_swp(arg1, arg2, arg3, arg4);
    POST_kmpc_atomic_cmplx10_swp();
    return res;
}

bool __kmpc_atomic_bool_1_cas (ident_t * arg1, int arg2, char * arg3, char arg4, char arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_bool_1_cas, "__kmpc_atomic_bool_1_cas");
    PRE_kmpc_atomic_bool_1_cas();
    bool res = lib___kmpc_atomic_bool_1_cas(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_bool_1_cas();
    return res;
}

bool __kmpc_atomic_bool_2_cas (ident_t * arg1, int arg2, short * arg3, short arg4, short arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_bool_2_cas, "__kmpc_atomic_bool_2_cas");
    PRE_kmpc_atomic_bool_2_cas();
    bool res = lib___kmpc_atomic_bool_2_cas(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_bool_2_cas();
    return res;
}

bool __kmpc_atomic_bool_4_cas (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, kmp_int32 arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_bool_4_cas, "__kmpc_atomic_bool_4_cas");
    PRE_kmpc_atomic_bool_4_cas();
    bool res = lib___kmpc_atomic_bool_4_cas(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_bool_4_cas();
    return res;
}

bool __kmpc_atomic_bool_8_cas (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, kmp_int64 arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_bool_8_cas, "__kmpc_atomic_bool_8_cas");
    PRE_kmpc_atomic_bool_8_cas();
    bool res = lib___kmpc_atomic_bool_8_cas(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_bool_8_cas();
    return res;
}

char __kmpc_atomic_val_1_cas (ident_t * arg1, int arg2, char * arg3, char arg4, char arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_val_1_cas, "__kmpc_atomic_val_1_cas");
    PRE_kmpc_atomic_val_1_cas();
    char res = lib___kmpc_atomic_val_1_cas(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_val_1_cas();
    return res;
}

short __kmpc_atomic_val_2_cas (ident_t * arg1, int arg2, short * arg3, short arg4, short arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_val_2_cas, "__kmpc_atomic_val_2_cas");
    PRE_kmpc_atomic_val_2_cas();
    short res = lib___kmpc_atomic_val_2_cas(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_val_2_cas();
    return res;
}

kmp_int32 __kmpc_atomic_val_4_cas (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, kmp_int32 arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_val_4_cas, "__kmpc_atomic_val_4_cas");
    PRE_kmpc_atomic_val_4_cas();
    kmp_int32 res = lib___kmpc_atomic_val_4_cas(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_val_4_cas();
    return res;
}

kmp_int64 __kmpc_atomic_val_8_cas (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, kmp_int64 arg5) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_val_8_cas, "__kmpc_atomic_val_8_cas");
    PRE_kmpc_atomic_val_8_cas();
    kmp_int64 res = lib___kmpc_atomic_val_8_cas(arg1, arg2, arg3, arg4, arg5);
    POST_kmpc_atomic_val_8_cas();
    return res;
}

bool __kmpc_atomic_bool_1_cas_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, char arg5, char * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_bool_1_cas_cpt, "__kmpc_atomic_bool_1_cas_cpt");
    PRE_kmpc_atomic_bool_1_cas_cpt();
    bool res = lib___kmpc_atomic_bool_1_cas_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_bool_1_cas_cpt();
    return res;
}

bool __kmpc_atomic_bool_2_cas_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, short arg5, short * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_bool_2_cas_cpt, "__kmpc_atomic_bool_2_cas_cpt");
    PRE_kmpc_atomic_bool_2_cas_cpt();
    bool res = lib___kmpc_atomic_bool_2_cas_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_bool_2_cas_cpt();
    return res;
}

bool __kmpc_atomic_bool_4_cas_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, kmp_int32 arg5, kmp_int32 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_bool_4_cas_cpt, "__kmpc_atomic_bool_4_cas_cpt");
    PRE_kmpc_atomic_bool_4_cas_cpt();
    bool res = lib___kmpc_atomic_bool_4_cas_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_bool_4_cas_cpt();
    return res;
}

bool __kmpc_atomic_bool_8_cas_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, kmp_int64 arg5, kmp_int64 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_bool_8_cas_cpt, "__kmpc_atomic_bool_8_cas_cpt");
    PRE_kmpc_atomic_bool_8_cas_cpt();
    bool res = lib___kmpc_atomic_bool_8_cas_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_bool_8_cas_cpt();
    return res;
}

char __kmpc_atomic_val_1_cas_cpt (ident_t * arg1, int arg2, char * arg3, char arg4, char arg5, char * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_val_1_cas_cpt, "__kmpc_atomic_val_1_cas_cpt");
    PRE_kmpc_atomic_val_1_cas_cpt();
    char res = lib___kmpc_atomic_val_1_cas_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_val_1_cas_cpt();
    return res;
}

short __kmpc_atomic_val_2_cas_cpt (ident_t * arg1, int arg2, short * arg3, short arg4, short arg5, short * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_val_2_cas_cpt, "__kmpc_atomic_val_2_cas_cpt");
    PRE_kmpc_atomic_val_2_cas_cpt();
    short res = lib___kmpc_atomic_val_2_cas_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_val_2_cas_cpt();
    return res;
}

kmp_int32 __kmpc_atomic_val_4_cas_cpt (ident_t * arg1, int arg2, kmp_int32 * arg3, kmp_int32 arg4, kmp_int32 arg5, kmp_int32 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_val_4_cas_cpt, "__kmpc_atomic_val_4_cas_cpt");
    PRE_kmpc_atomic_val_4_cas_cpt();
    kmp_int32 res = lib___kmpc_atomic_val_4_cas_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_val_4_cas_cpt();
    return res;
}

kmp_int64 __kmpc_atomic_val_8_cas_cpt (ident_t * arg1, int arg2, kmp_int64 * arg3, kmp_int64 arg4, kmp_int64 arg5, kmp_int64 * arg6) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_atomic_val_8_cas_cpt, "__kmpc_atomic_val_8_cas_cpt");
    PRE_kmpc_atomic_val_8_cas_cpt();
    kmp_int64 res = lib___kmpc_atomic_val_8_cas_cpt(arg1, arg2, arg3, arg4, arg5, arg6);
    POST_kmpc_atomic_val_8_cas_cpt();
    return res;
}

void __kmpc_for_static_init_4 (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_int32 * arg5, kmp_int32 * arg6, kmp_int32 * arg7, kmp_int32 arg8, kmp_int32 arg9) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_for_static_init_4, "__kmpc_for_static_init_4");
    PRE_kmpc_for_static_init_4();
    lib___kmpc_for_static_init_4(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    POST_kmpc_for_static_init_4();
}

void __kmpc_for_static_init_4u (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_uint32 * arg5, kmp_uint32 * arg6, kmp_int32 * arg7, kmp_int32 arg8, kmp_int32 arg9) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_for_static_init_4u, "__kmpc_for_static_init_4u");
    PRE_kmpc_for_static_init_4u();
    lib___kmpc_for_static_init_4u(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    POST_kmpc_for_static_init_4u();
}

void __kmpc_for_static_init_8 (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_int64 * arg5, kmp_int64 * arg6, kmp_int64 * arg7, kmp_int64 arg8, kmp_int64 arg9) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_for_static_init_8, "__kmpc_for_static_init_8");
    PRE_kmpc_for_static_init_8();
    lib___kmpc_for_static_init_8(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    POST_kmpc_for_static_init_8();
}

void __kmpc_for_static_init_8u (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_uint64 * arg5, kmp_uint64 * arg6, kmp_int64 * arg7, kmp_int64 arg8, kmp_int64 arg9) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_for_static_init_8u, "__kmpc_for_static_init_8u");
    PRE_kmpc_for_static_init_8u();
    lib___kmpc_for_static_init_8u(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    POST_kmpc_for_static_init_8u();
}

void __kmpc_dist_for_static_init_4 (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_int32 * arg5, kmp_int32 * arg6, kmp_int32 * arg7, kmp_int32 * arg8, kmp_int32 arg9, kmp_int32 arg10) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dist_for_static_init_4, "__kmpc_dist_for_static_init_4");
    PRE_kmpc_dist_for_static_init_4();
    lib___kmpc_dist_for_static_init_4(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    POST_kmpc_dist_for_static_init_4();
}

void __kmpc_dist_for_static_init_4u (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_uint32 * arg5, kmp_uint32 * arg6, kmp_uint32 * arg7, kmp_int32 * arg8, kmp_int32 arg9, kmp_int32 arg10) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dist_for_static_init_4u, "__kmpc_dist_for_static_init_4u");
    PRE_kmpc_dist_for_static_init_4u();
    lib___kmpc_dist_for_static_init_4u(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    POST_kmpc_dist_for_static_init_4u();
}

void __kmpc_dist_for_static_init_8 (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_int64 * arg5, kmp_int64 * arg6, kmp_int64 * arg7, kmp_int64 * arg8, kmp_int64 arg9, kmp_int64 arg10) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dist_for_static_init_8, "__kmpc_dist_for_static_init_8");
    PRE_kmpc_dist_for_static_init_8();
    lib___kmpc_dist_for_static_init_8(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    POST_kmpc_dist_for_static_init_8();
}

void __kmpc_dist_for_static_init_8u (ident_t * arg1, kmp_int32 arg2, kmp_int32 arg3, kmp_int32 * arg4, kmp_uint64 * arg5, kmp_uint64 * arg6, kmp_uint64 * arg7, kmp_int64 * arg8, kmp_int64 arg9, kmp_int64 arg10) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dist_for_static_init_8u, "__kmpc_dist_for_static_init_8u");
    PRE_kmpc_dist_for_static_init_8u();
    lib___kmpc_dist_for_static_init_8u(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    POST_kmpc_dist_for_static_init_8u();
}

void __kmpc_team_static_init_4 (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_int32 * arg4, kmp_int32 * arg5, kmp_int32 * arg6, kmp_int32 arg7, kmp_int32 arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_team_static_init_4, "__kmpc_team_static_init_4");
    PRE_kmpc_team_static_init_4();
    lib___kmpc_team_static_init_4(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_kmpc_team_static_init_4();
}

void __kmpc_team_static_init_4u (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_uint32 * arg4, kmp_uint32 * arg5, kmp_int32 * arg6, kmp_int32 arg7, kmp_int32 arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_team_static_init_4u, "__kmpc_team_static_init_4u");
    PRE_kmpc_team_static_init_4u();
    lib___kmpc_team_static_init_4u(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_kmpc_team_static_init_4u();
}

void __kmpc_team_static_init_8 (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_int64 * arg4, kmp_int64 * arg5, kmp_int64 * arg6, kmp_int64 arg7, kmp_int64 arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_team_static_init_8, "__kmpc_team_static_init_8");
    PRE_kmpc_team_static_init_8();
    lib___kmpc_team_static_init_8(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_kmpc_team_static_init_8();
}

void __kmpc_team_static_init_8u (ident_t * arg1, kmp_int32 arg2, kmp_int32 * arg3, kmp_uint64 * arg4, kmp_uint64 * arg5, kmp_int64 * arg6, kmp_int64 arg7, kmp_int64 arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_team_static_init_8u, "__kmpc_team_static_init_8u");
    PRE_kmpc_team_static_init_8u();
    lib___kmpc_team_static_init_8u(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_kmpc_team_static_init_8u();
}

void __kmpc_dist_dispatch_init_4 (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 * arg4, kmp_int32 arg5, kmp_int32 arg6, kmp_int32 arg7, kmp_int32 arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dist_dispatch_init_4, "__kmpc_dist_dispatch_init_4");
    PRE_kmpc_dist_dispatch_init_4();
    lib___kmpc_dist_dispatch_init_4(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_kmpc_dist_dispatch_init_4();
}

void __kmpc_dist_dispatch_init_4u (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 * arg4, kmp_uint32 arg5, kmp_uint32 arg6, kmp_int32 arg7, kmp_int32 arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dist_dispatch_init_4u, "__kmpc_dist_dispatch_init_4u");
    PRE_kmpc_dist_dispatch_init_4u();
    lib___kmpc_dist_dispatch_init_4u(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_kmpc_dist_dispatch_init_4u();
}

void __kmpc_dist_dispatch_init_8 (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 * arg4, kmp_int64 arg5, kmp_int64 arg6, kmp_int64 arg7, kmp_int64 arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dist_dispatch_init_8, "__kmpc_dist_dispatch_init_8");
    PRE_kmpc_dist_dispatch_init_8();
    lib___kmpc_dist_dispatch_init_8(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_kmpc_dist_dispatch_init_8();
}

void __kmpc_dist_dispatch_init_8u (ident_t * arg1, kmp_int32 arg2, enum sched_type arg3, kmp_int32 * arg4, kmp_uint64 arg5, kmp_uint64 arg6, kmp_int64 arg7, kmp_int64 arg8) {
    PRINT_FUNC_NAME;
    GET_RUNTIME_FUNCTION(lib___kmpc_dist_dispatch_init_8u, "__kmpc_dist_dispatch_init_8u");
    PRE_kmpc_dist_dispatch_init_8u();
    lib___kmpc_dist_dispatch_init_8u(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    POST_kmpc_dist_dispatch_init_8u();
}

#ifdef __cplusplus
}
#endif
