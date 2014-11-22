#include <iostream>

using std::cout;
using std::endl;

static int i = 0;

void f() 
{
	static int i = 10;
	cout << i << endl;
}

int main()
{
	f();
	i++;
	f();
}
