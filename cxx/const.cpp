#include <stdio.h>

int main () {
  int i[] = {1, 2, 3, 4, 5};
  int c[] = {2,3};
  int* const p = i;
  // const int *p = i;

  p[0] = 4;

  p = c;
}
