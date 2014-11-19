#include <stdio.h>

struct myStruct {
	const char *name;
};

const struct myStruct do_not_modify_me[] = 
{
	/* 1 */
#define WHAT 0
	{
		.name = "Towry Wang",
	},

#define THE 1
	{
		.name = "Towry Wnag",
	},

	/* Yes, sentinel */
	{.name = NULL }
};

int
main() {
	int struct_count;

	for (struct_count = 0; do_not_modify_me[struct_count].name; struct_count++);
	printf("%d\n", struct_count);
}