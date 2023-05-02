section .data
    hello db "Hello, Holberton",10

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp
    
    sub rsp, 16        ; allocate space for 2 stack slots
    
    mov edi, hello     ; prepare first argument for printf
    mov eax, 0         ; clear RAX register
    call printf        ; call printf function
    
    add rsp, 16        ; free up the stack space
    mov eax, 0         ; return 0

    leave              ; restore RBP register
    ret                ; return to OS
