#ifndef TEST_HPP
#define TEST_HPP

#include <stdio.h>

// change the static inline to inline
// or change the inline to static inline
static inline void test () {
  static int i = 0;
  i++;
  printf("%d\n", i);
}

#endif
