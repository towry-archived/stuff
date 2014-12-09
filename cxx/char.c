#include <stdio.h>
#include <string.h>

int
main()
{
  int i;
  char *c = malloc(sizeof(char)*10);
  char *p;
  p = c;
  for (i = 0; i < 9; i++) {
    *p++ = 34+i;
  }
  *p++ = '\0';

  printf("%s\n", c);
}
