; File: 101-hello_holberton.asm
; Auth.: David Tei
; Desc.: 64-bit program in assembly that prints
;	 Hello, Holberton followed by a new line.

SECTION	.data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
