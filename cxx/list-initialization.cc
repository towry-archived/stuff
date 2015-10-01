// http://en.cppreference.com/w/cpp/language/list_initialization

#include <iostream>

class A {
public:
  int m;
};

int
main () 
{
  // below is allowed because A is an aggregate class
  // agregate class is a class (include struct, unions) that 
  // have no user defined constructor (copy constructor is allowed)
  // no private non-static member variable

  // this is copy-list-initialization
  A b = {2};
  // this is direct-list-initialization, but 
  // since we are not provide an proper constructor
  // so A b(2) will not work. and A b{2} is c++0x
  // A b {2} or A b(2)

  // will output 2
  std::cout << b.m << std::endl;
  return 0;
}
