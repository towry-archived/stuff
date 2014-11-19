/* nothing here */
#include <stdio.h>

#define VERSION_MAJOR 2
#define VERSION_MINOR 3
#define VERSION_PATCH 0

unsigned long
version(void) {
	return VERSION_MAJOR * 0x10000 |
		   VERSION_MINOR * 0x00100 |
		   VERSION_PATCH * 0x00001;
}

int
main(void) {
	unsigned long v = version();
	unsigned major = (v >> 16) & 255;
	unsigned minor = (v >> 8) & 255;
	unsigned patch = v & 255;
	printf("version: v%u.%u.%u\n", major, minor, patch);
}