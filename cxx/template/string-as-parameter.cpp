#include <string>

template <typename T>
inline T const& max (T const &a, T const &b) {
  return a < b ? b : a;
}

int main () {
  std::string s;

  // ok!
  ::max("apple", "peach");

  // error: no matching function for call to 'max(const char [6], const char [7])'
  // if we don't use reference, below will be ok (decay)
  ::max("apple", "tomato");

  //  error: no matching function for call to 'max(const charT [6], std::string&)'
  ::max("apple", s);
}
