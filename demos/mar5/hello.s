	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str(%rip), %rdi
	movl	$0, -4(%rbp)
	movl	$4, -8(%rbp)
	movl	-8(%rbp), %esi
	movl	_y(%rip), %edx
	movb	$0, %al
	callq	_printf
	movl	$0, -12(%rbp)
	movl	%eax, -16(%rbp)         ## 4-byte Spill
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$10, -12(%rbp)
	jge	LBB0_4
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str.1(%rip), %rdi
	movl	-12(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -20(%rbp)         ## 4-byte Spill
## BB#3:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB0_1
LBB0_4:
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__DATA,__data
	.globl	_y                      ## @y
	.align	2
_y:
	.long	3                       ## 0x3

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"helloworld: x=%d, y=%d\n"

L_.str.1:                               ## @.str.1
	.asciz	"in loop: i=%d\n"


.subsections_via_symbols
