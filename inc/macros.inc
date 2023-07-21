%ifndef __MACROS__
%define __MACROS__

%include "syscalls.inc"

%macro output 2
  mov rax, SYS_write
  mov rdi, STDOUT
  mov rsi, %1
  mov rdx, %2
  syscall
%endmacro

%macro input 2
  mov rax, SYS_read
  mov rdi, STDIN
  mov rsi, %1
  mov rdx, %2
  syscall
%endmacro

%macro exit 1
  mov rax, SYS_exit
  mov rdi, %1
  syscall
%endmacro

%endif ; __MACROS__