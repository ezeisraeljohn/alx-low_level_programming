section .data
hello db "Hello, Holberton", 10, 0  ; The message to be printed with a newline character

section .text
global main
extern printf
extern exit

main:
mov rdi, hello   ; Load the address of the hello message into rdi
call printf      ; Call the printf function with the message address as an argument

; Exit the program gracefully with code 0
mov rdi, 0
call exit

