
#include "tpl.hpp"

int main () {
  int c;

  c = addValue<int, 3>(2);

  std::cout << c << std::endl;

  return 0;
}
