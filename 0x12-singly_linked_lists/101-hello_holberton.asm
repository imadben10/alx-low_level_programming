section .data
    hello db "Hello, Holberton",10

section .text
    global main

    extern printf

    print_hello_msg:
        push hello
        call printf
        add rsp, 8
        ret

main:
    call print_hello_msg

    mov eax, 0
    ret
