global _start

section .data
    message db "Hello, World", 10  ; 10 is the ASCII code for newline
    message_length equ $ - message

section .text
_start:
    mov rax, 1          ; system call number for write
    mov rdi, 1          ; file descriptor 1 is stdout
    mov rsi, message    ; address of the message
    mov rdx, message_length ; length of the message
    syscall

    mov rax, 60         ; system call number for exit
    xor rdi, rdi        ; exit status 0
    syscall