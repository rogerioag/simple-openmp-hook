	.file	"parallel-region-with-multiple-loops-combined.c"
	.text
	.section	.rodata
.LC0:
	.string	"Antes das regi\303\265es paralelas."
.LC1:
	.string	"Fora das regi\303\265es paralelas."
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	main._omp_fn.0(%rip), %rax
	pushq	$0
	pushq	$1
	movl	$1, %r9d
	movl	$8, %r8d
	movl	$0, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	GOMP_parallel_loop_nonmonotonic_dynamic@PLT
	addq	$16, %rsp
	leaq	main._omp_fn.1(%rip), %rax
	subq	$8, %rsp
	pushq	$0
	movl	$1, %r9d
	movl	$8, %r8d
	movl	$0, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	GOMP_parallel_loop_maybe_nonmonotonic_runtime@PLT
	addq	$16, %rsp
	leaq	main._omp_fn.2(%rip), %rax
	movl	$0, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	GOMP_parallel@PLT
	leaq	main._omp_fn.3(%rip), %rax
	movl	$0, %ecx
	movl	$0, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	GOMP_parallel@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC2:
	.string	"loop: 1, thread: %lu, iteration: %d\n"
	.text
	.type	main._omp_fn.0, @function
main._omp_fn.0:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-32(%rbp), %rdx
	leaq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	GOMP_loop_nonmonotonic_dynamic_next@PLT
	testb	%al, %al
	je	.L5
.L7:
	movq	-40(%rbp), %rax
	movl	%eax, -44(%rbp)
	movq	-32(%rbp), %rax
	movl	%eax, %ebx
.L6:
	call	omp_get_thread_num@PLT
	movl	%eax, %esi
	movl	-44(%rbp), %eax
	leaq	.LC2(%rip), %rcx
	movl	%eax, %edx
	movq	%rcx, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -44(%rbp)
	cmpl	%ebx, -44(%rbp)
	jl	.L6
	leaq	-32(%rbp), %rdx
	leaq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	GOMP_loop_nonmonotonic_dynamic_next@PLT
	testb	%al, %al
	jne	.L7
.L5:
	call	GOMP_loop_end_nowait@PLT
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L8
	call	__stack_chk_fail@PLT
.L8:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	main._omp_fn.0, .-main._omp_fn.0
	.type	main._omp_fn.1, @function
main._omp_fn.1:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-32(%rbp), %rdx
	leaq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	GOMP_loop_maybe_nonmonotonic_runtime_next@PLT
	testb	%al, %al
	je	.L10
.L12:
	movq	-40(%rbp), %rax
	movl	%eax, -44(%rbp)
	movq	-32(%rbp), %rax
	movl	%eax, %ebx
.L11:
	call	omp_get_thread_num@PLT
	movl	%eax, %esi
	movl	-44(%rbp), %eax
	leaq	.LC2(%rip), %rcx
	movl	%eax, %edx
	movq	%rcx, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -44(%rbp)
	cmpl	%ebx, -44(%rbp)
	jl	.L11
	leaq	-32(%rbp), %rdx
	leaq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	GOMP_loop_maybe_nonmonotonic_runtime_next@PLT
	testb	%al, %al
	jne	.L12
.L10:
	call	GOMP_loop_end_nowait@PLT
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L13
	call	__stack_chk_fail@PLT
.L13:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	main._omp_fn.1, .-main._omp_fn.1
	.type	main._omp_fn.2, @function
main._omp_fn.2:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 14, -24
	.cfi_offset 13, -32
	.cfi_offset 12, -40
	.cfi_offset 3, -48
	movq	%rdi, -56(%rbp)
	call	omp_get_num_threads@PLT
	movl	%eax, %r12d
	call	omp_get_thread_num@PLT
	movl	%eax, %r13d
	movl	$0, %ebx
.L17:
	movl	%ebx, %eax
	imull	%r12d, %eax
	addl	%r13d, %eax
	sall	$5, %eax
	leal	32(%rax), %edx
	movl	$8, %ecx
	cmpl	%ecx, %edx
	cmovle	%edx, %ecx
	movl	%ecx, %r14d
	cmpl	$8, %eax
	jge	.L14
	movl	%eax, -36(%rbp)
.L16:
	call	omp_get_thread_num@PLT
	movl	%eax, %esi
	movl	-36(%rbp), %eax
	leaq	.LC2(%rip), %rcx
	movl	%eax, %edx
	movq	%rcx, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -36(%rbp)
	cmpl	%r14d, -36(%rbp)
	jl	.L16
	addl	$1, %ebx
	jmp	.L17
.L14:
	addq	$32, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	main._omp_fn.2, .-main._omp_fn.2
	.section	.rodata
	.align 8
.LC3:
	.string	"loop: 2, thread: %lu, iteration: %d\n"
	.text
	.type	main._omp_fn.3, @function
main._omp_fn.3:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$88, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -88(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-48(%rbp), %rdx
	leaq	-56(%rbp), %rax
	movq	%rdx, %r9
	movq	%rax, %r8
	movl	$1, %ecx
	movl	$1, %edx
	movl	$8, %esi
	movl	$0, %edi
	call	GOMP_loop_nonmonotonic_dynamic_start@PLT
	testb	%al, %al
	je	.L19
.L21:
	movq	-56(%rbp), %rax
	movl	%eax, -68(%rbp)
	movq	-48(%rbp), %rax
	movl	%eax, %ebx
.L20:
	call	omp_get_thread_num@PLT
	movl	%eax, %esi
	movl	-68(%rbp), %eax
	leaq	.LC3(%rip), %rcx
	movl	%eax, %edx
	movq	%rcx, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -68(%rbp)
	cmpl	%ebx, -68(%rbp)
	jl	.L20
	leaq	-48(%rbp), %rdx
	leaq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	GOMP_loop_nonmonotonic_dynamic_next@PLT
	testb	%al, %al
	jne	.L21
.L19:
	call	GOMP_loop_end@PLT
	leaq	-32(%rbp), %rdx
	leaq	-40(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rcx
	movl	$1, %edx
	movl	$8, %esi
	movl	$0, %edi
	call	GOMP_loop_maybe_nonmonotonic_runtime_start@PLT
	testb	%al, %al
	je	.L22
.L24:
	movq	-40(%rbp), %rax
	movl	%eax, -64(%rbp)
	movq	-32(%rbp), %rax
	movl	%eax, %ebx
.L23:
	call	omp_get_thread_num@PLT
	movl	%eax, %esi
	movl	-64(%rbp), %eax
	leaq	.LC3(%rip), %rcx
	movl	%eax, %edx
	movq	%rcx, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -64(%rbp)
	cmpl	%ebx, -64(%rbp)
	jl	.L23
	leaq	-32(%rbp), %rdx
	leaq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	GOMP_loop_maybe_nonmonotonic_runtime_next@PLT
	testb	%al, %al
	jne	.L24
.L22:
	call	GOMP_loop_end@PLT
	call	omp_get_num_threads@PLT
	movl	%eax, %ebx
	call	omp_get_thread_num@PLT
	movl	%eax, %esi
	movl	$8, %eax
	cltd
	idivl	%ebx
	movl	%eax, %ecx
	movl	$8, %eax
	cltd
	idivl	%ebx
	movl	%edx, %eax
	cmpl	%eax, %esi
	jl	.L25
.L28:
	imull	%ecx, %esi
	movl	%esi, %edx
	addl	%edx, %eax
	leal	(%rax,%rcx), %ebx
	cmpl	%ebx, %eax
	jge	.L18
	movl	%eax, -60(%rbp)
.L27:
	call	omp_get_thread_num@PLT
	movl	%eax, %esi
	movl	-60(%rbp), %eax
	leaq	.LC3(%rip), %rcx
	movl	%eax, %edx
	movq	%rcx, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -60(%rbp)
	cmpl	%ebx, -60(%rbp)
	jl	.L27
	jmp	.L18
.L25:
	movl	$0, %eax
	addl	$1, %ecx
	jmp	.L28
.L18:
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L29
	call	__stack_chk_fail@PLT
.L29:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	main._omp_fn.3, .-main._omp_fn.3
	.ident	"GCC: (GNU) 16.2.1 20260810"
	.section	.note.GNU-stack,"",@progbits
