#include <stdio.h>

int 
cindex(int *a, int s, int e, int i) {
	int n = (s + e) / 2;
	
	// if i is in the middle of a
	if (i == a[n]) return n;

	// otherwise
	if (i < a[n]) {
		// go left
		cindex(a, s, n, i);
	} else {
		// go right
		cindex(a, n, e, i);
	}

	return n;
}

int 
main() {
	int testcase[5] = {1, 2, 3, 4, 5};
	int r = 0;

	r = cindex(testcase, 0, 5, 3);

	printf("The result is: %d\n", r);
	return(0);
}

/**
 The worst case is O(log n), because each step ,we remove half of the choice, then
 go next step.
**/