/* nothing here */

#include <stdio.h>

int addInt(int n, int m) {
    return n + m;
}

typedef int (*fp)(int, int);

int 
main() {
    int sum;

    fp f;

    f = addInt;
    sum = (*f)(2,3);
    printf("%d\n", sum);
}
