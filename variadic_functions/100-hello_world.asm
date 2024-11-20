global _start

section .text
_start:
	; write syscall
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 13
	syscall
section .data
	message: db "Hello, World", 10