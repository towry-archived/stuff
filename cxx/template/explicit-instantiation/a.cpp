
#include <iostream>
#include <typeinfo>
#include "a.hpp"

// definition
template <typename T>
void echo (T const &x) {
  std::cout << typeid(x).name() << std::endl;
}

// explicit instantiation directive
template void 
echo<double>(double const&);
