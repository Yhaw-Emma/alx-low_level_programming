section .data
    message db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    extern printf

global _start
_start:
    ; Push the message format onto the stack
    push format
    ; Push the message address onto the stack
    push message
    ; Call printf
    call printf
    ; Clean up the stack after the function call
    add rsp, 16

    ; Push the newline format onto the stack
    push format
    ; Push the newline address onto the stack
    push newline
    ; Call printf
    call printf
    ; Clean up the stack after the function call
    add rsp, 16

    ; Exit the program
    mov eax, 60
    xor edi, edi
    syscall
