
#ifndef TPL_HPP
#define TPL_HPP

#include <iostream>

template<typename T, int VAL>
T addValue (T const &x) {
  return x + VAL;
}

#endif
