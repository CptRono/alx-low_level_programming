section .data

message db "Hello, Holberton", 0xA	; string to print stored in message.
					; 0xA is hex rep of a new line char
section .text

global main	; declaring the entry point of the program
extern printf	; declaring an external variable that will be called

main:		; entry point
push rbp	; push rbp (base pointer register) into the stack
mov rbp, rsp	; copy value of rsp(stack pointer register) into rbp
;rsp holds address of current top of stack - function calls, variables etc
;rbp is used to access local variables and func parameters in the stack
lea rdi, [message]	;loading address of the string. lea=LoadEffectiveAddr
xor eax, eax		;set eax to 0 using eax-shows we are not passing any
			;other args to printf apart from the string
call printf		;calls printf with message addr as an argument
xor eax, eax		;set eax to 0
pop rbp			;clean stack
ret			;return 0
