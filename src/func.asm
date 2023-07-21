  %include "../inc/constants.inc"
  %include "../inc/syscalls.inc"
  %include "../inc/macros.inc"
 
  global _start
  section .text
_start:
  output MSG, MSG_LEN
  exit 0