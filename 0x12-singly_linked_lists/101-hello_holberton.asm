section .data
    hello db 'Hello, Holberton', 10  ; String to be printed

section .text
    global _start

_start:
    ; Write the string to stdout
    mov rax, 1            ; System call number for write
    mov rdi, 1            ; File descriptor for stdout (1)
    mov rsi, hello        ; Address of the string
    mov rdx, 17           ; Length of the string
    syscall               ; Invoke the system call

    ; Exit the program
    mov eax, 60           ; System call number for exit
    xor edi, edi          ; Exit status code (0)
    syscall               ; Invoke the system call
