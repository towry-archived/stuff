/* nothing here */
#include <stdio.h>

#define offsetof(st, m) (size_t)(&((st *)0))->m)
#define container_of(ptr, type, m) ({ \
		const typeof( ((type *)0)->m) * __mptr = (ptr); \
		(type *)( (char *)__mptr - offsetof(type, m));})

struct foo {
	const char *name;	
};

int
main() {
	struct foo s = { .name = "hello?" };

	printf("%s\n", s.name);
}