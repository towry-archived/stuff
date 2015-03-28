#include "a.hpp"

// will trigger a link error
// undefined reference to void echo<double>(double const&)

int main () {
  double ice = 3.0;

  echo(ice);
}
