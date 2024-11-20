global _start

section .text
_start:
	; write syscall
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, message_length
	syscall

    mov rax, 60         ; system call number for exit
    xor rdi, rdi        ; exit status 0
	syscall
section .data
	message: db "Hello, World", 10
	message_length equ $ - message