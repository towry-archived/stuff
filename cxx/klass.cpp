#include <stdio.h>

class A {
public:
    A () { printf("default called\n"); }
    A (int i) : data_(i) { printf("second called\n"); }
    ~A () {}
public:
    int data_;
};

int main (int, char **) {
    // A a(2);
    A b = A(3);
    printf("%d\n", b.data_);
}
