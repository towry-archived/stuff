#include <stdio.h>

void (*callback)(int);

extern int c;

void run()
{
	if (callback) {
		callback(c);
	} else {
		printf("Nothing here\n");
	}
}
