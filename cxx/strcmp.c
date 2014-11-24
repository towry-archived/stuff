#include <stdio.h>
#include <string.h>

int
main() {
  char c[] = "Hello World! !dlroW olleH";
  char b[] = "Hello";

  c[5] = '\0';
  if (strcmp(b, c) == 0) {
    printf("equal\n");
  } else {
    printf("not equal\n");
  }

  return 0;
}
