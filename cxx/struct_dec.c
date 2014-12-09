#include <stdio.h>

struct A {
  struct not_defined *c;
};


/* will it pass compilation? */
int
main() {
  struct A a;

  return 0;
}
