	.file	"summator.c"
	.text
	.p2align 4,,15
	.globl	add
	.type	add, @function
add:
.LFB43:
	.cfi_startproc
	testl	%esi, %esi
	movl	%edi, %eax
	je	.L2
	.p2align 4,,10
	.p2align 3
.L3:
	movl	%esi, %edx
	andl	%eax, %edx
	xorl	%esi, %eax
	movl	%edx, %esi
	addl	%esi, %esi
	jne	.L3
.L2:
	rep ret
	.cfi_endproc
.LFE43:
	.size	add, .-add
	.p2align 4,,15
	.globl	sub
	.type	sub, @function
sub:
.LFB44:
	.cfi_startproc
	testl	%esi, %esi
	movl	%edi, %eax
	je	.L10
	notl	%esi
	movl	$1, %edi
	jmp	.L11
	.p2align 4,,10
	.p2align 3
.L13:
	movl	%edx, %esi
	movl	%ecx, %edi
.L11:
	movl	%edi, %ecx
	movl	%edi, %edx
	andl	%esi, %ecx
	xorl	%esi, %edx
	addl	%ecx, %ecx
	jne	.L13
	cmpl	%esi, %edi
	je	.L10
	.p2align 4,,10
	.p2align 3
.L12:
	movl	%edx, %ecx
	andl	%eax, %ecx
	xorl	%edx, %eax
	movl	%ecx, %edx
	addl	%edx, %edx
	jne	.L12
.L10:
	rep ret
	.cfi_endproc
.LFE44:
	.size	sub, .-sub
	.p2align 4,,15
	.globl	U2add
	.type	U2add, @function
U2add:
.LFB45:
	.cfi_startproc
	testl	%esi, %esi
	movl	%edi, %eax
	je	.L19
	.p2align 4,,10
	.p2align 3
.L20:
	movl	%esi, %edx
	andl	%eax, %edx
	xorl	%esi, %eax
	movl	%edx, %esi
	addl	%esi, %esi
	jne	.L20
.L19:
	rep ret
	.cfi_endproc
.LFE45:
	.size	U2add, .-U2add
	.p2align 4,,15
	.globl	U2sub
	.type	U2sub, @function
U2sub:
.LFB46:
	.cfi_startproc
	testl	%esi, %esi
	movl	%edi, %eax
	je	.L26
	notl	%esi
	movl	$1, %edx
	.p2align 4,,10
	.p2align 3
.L27:
	movl	%edx, %ecx
	andl	%esi, %ecx
	xorl	%edx, %esi
	addl	%ecx, %ecx
	movl	%ecx, %edx
	jne	.L27
	testl	%esi, %esi
	je	.L26
	.p2align 4,,10
	.p2align 3
.L28:
	movl	%esi, %edx
	andl	%eax, %edx
	xorl	%esi, %eax
	movl	%edx, %esi
	addl	%esi, %esi
	jne	.L28
.L26:
	rep ret
	.cfi_endproc
.LFE46:
	.size	U2sub, .-U2sub
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
