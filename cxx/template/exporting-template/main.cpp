
#include "a.hpp"

// http://lists.apple.com/archives/xcode-users/2008/Mar/msg00819.html
// > There are very few compilers which implement export, and gcc have said
// > that they never will implement it.

int main () {
  echo<int>(2);
}
