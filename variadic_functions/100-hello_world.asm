section   .text

global    main

	
main:
	mov  rax, 1                  ; write(
	mov  rdi, 1                  ;   STDOUT_FILENO,
	mov  rsi, message            ;   "Hello, world!\n",
	mov  rdx, 13                 ;   sizeof("Hello, world!\n")
	syscall                      ; invoke operating system to do the write
	mov  rax, 60                 ; exit(
	xor  rdi, rdi                ; EXIT_SUCCESS
	syscall                      ; invoke to exit

	section   .data
message:

	db    "Hello, World", 10      ; note the newline at the end
    msglen: equ $ - message           ; length of string