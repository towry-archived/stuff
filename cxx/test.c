/* nothing here */

#include <stdio.h>

struct mystruct {
  int i, m;
} s;

int 
main () {
	s.i = 3;
  s.m = 0;

  printf("%d\n", s.i);

	return(0);
}
