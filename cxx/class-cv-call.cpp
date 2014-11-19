#include <iostream>

using namespace std;

class A {
public:
	void foo() {
		cout << "foo called" << endl;
	}
	void foo() const {
		cout << "foo const called" << endl;
	}
};

A foo() {
	return A();
}

const A cfoo() {
	return A();
}

int main() {
	foo().foo();
	cfoo().foo();

	cin.get();
	return 0;
}