#include <stdio.h>

extern void (*callback)(int);

void run()
{
	if (callback) {
		callback(2);
	} else {
		printf("Nothing here\n");
	}
}
