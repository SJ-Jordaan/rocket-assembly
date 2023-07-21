%ifndef __CONSTANTS__
%define __CONSTANTS__

SECTION .data
  MSG db "Hello, World!", 0
  MSG_LEN equ $ - MSG

%endif ; __CONSTANTS__