#include <iostream>
#include <stdio.h>

using namespace std;

template <typename T>
class testClass 
{
public:
	static int _data;
	static void name();
};

template <> 
int testClass<int>::_data = 1;

template <>
int testClass<char>::_data = 2;

// woo...
template <typename T>
void testClass<T>::name()
{
	printf("Hello world\n");
}

int main() 
{
	cout << testClass<int>::_data << endl;
	cout << testClass<char>::_data << endl;

	cout << endl;

	testClass<int> obj1, obj2;
	testClass<char> objc1, objc2;

	cout << obj1._data << endl;
	cout << obj2._data << endl;
	cout << objc1._data << endl;
	cout << objc2._data << endl;

	cout << endl;

	obj1._data = 3;
	objc2._data = 4;

	cout << obj1._data << endl;
	cout << obj2._data << endl;
	cout << objc1._data << endl;
	cout << objc2._data << endl;

	cout << endl;

	testClass<int>::name();

	cout << endl;

	// testClass<>::name();
	// testClass::name();
	testClass<bool>::name();

	cout << endl;

	testClass<int> test;

	test.name();

	return(0);
}
