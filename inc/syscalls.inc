%ifndef __SYSCALLS_INC__
%define __SYSCALLS_INC__
; Syscall numbers
SYS_read equ 0
SYS_write equ 1
SYS_open equ 2
SYS_close equ 3
SYS_fstat equ 5
SYS_mmap equ 9
SYS_mprotect equ 10
SYS_munmap equ 11
SYS_brk equ 12
SYS_rt_sigaction equ 13
SYS_rt_sigprocmask equ 14
SYS_pread64 equ 17
SYS_pwrite64 equ 18
SYS_access equ 21
SYS_pipe equ 22
SYS_exit equ 60
SYS_madvise equ 28
SYS_dup2 equ 33
SYS_nanosleep equ 35
SYS_clone equ 56
SYS_execve equ 59
SYS_getpid equ 39

; File descriptors
STDIN equ 0
STDOUT equ 1
STDERR equ 2

; Open flags
O_RDONLY equ 00
O_WRONLY equ 01
O_RDWR equ 02
O_CREAT equ 0100
O_TRUNC equ 01000

; Mmap flags
MAP_SHARED equ 0x01
MAP_PRIVATE equ 0x02
MAP_FIXED equ 0x10

; Mmap protection flags
PROT_READ equ 0x1
PROT_WRITE equ 0x2
PROT_EXEC equ 0x4

%endif ; __SYSCALLS_INC__