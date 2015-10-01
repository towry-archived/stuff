#include <stdio.h>

void run();

void (*callback)(int);

void cb(int i) 
{
	printf("got a number: %d\n", i);
}

int c;

int main()
{
	callback = cb;
  c = 3;
	run();

	return 0;
}
