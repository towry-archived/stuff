#include <stdio.h>

extern void run();

void (*callback)(int);

void cb(int i) 
{
	printf("got a number: %d\n", i);
}

int main()
{
	// callback = cb;

	run();

	return 0;
}
