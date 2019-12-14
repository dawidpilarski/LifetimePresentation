test(S&, T&):
  mov r2, #10
  mov r3, #2
  str r2, [r0]
  str r3, [r1]
  mov r0, #12
  bx lr