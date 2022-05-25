global main
	section .text

main
	mov rdi, 1
	mov rsi, message
	mov rdx, 17
	mov rax, 1
	syscall

	mov eax, 60
	xor rdi, rdi
	syscall
message:
	db "Hello, Holberton", 10
