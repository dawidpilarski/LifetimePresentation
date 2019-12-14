test(S&, S&):
  mov r3, #2
  mov r2, #10
  str r2, [r0]
  str r3, [r1]
  ldr r0, [r0]
  add r0, r0, r3
  bx lr