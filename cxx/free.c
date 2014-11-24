#include <stdio.h>
#include <string.h>

int 
main() {
  char *c;
  c = malloc(sizeof(char) * 20);
  memset(c, 'h', 20);
  c[19] = '\0';

  printf("%s\n", c);

  free(c+5);
  printf("%s\n", c);
  free(c);
  if (c == NULL) {
    printf("OK\n");
  } else {
    printf("Not ok\n");
  }
}
0 1 2 3 4 5
