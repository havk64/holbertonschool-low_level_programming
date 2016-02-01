section .data
msg db "Hello, asm",0xA
msgL equ $-msg

section .text

global test_

test_:

mov EDX,msgL
mov EAX,4
mov EBX,1
mov ECX,msg
int 0x80
ret

mov EBX, 0
mov EAX, 1
int 0x080

