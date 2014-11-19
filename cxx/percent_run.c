#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
	int i;

	for (i = 0; i <= 100; i++) {
		printf("\b\b\b\b%3.0d%%", i);
		fflush(stdout);
		usleep(100000);
	}
	printf("\n");
}