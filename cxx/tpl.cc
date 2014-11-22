#include <iostream>

using namespace std;

template <typename T>
class testClass 
{
public:
	static int _data;
};

template <> 
int testClass<int>::_data = 1;

template <>
int testClass<char>::_data = 2;

int 
main() 
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

	return(0);
}

/*
output:
 1
 2

 1
 1
 2
 2

 3
 3
 4
 4
*/
