
// below is error
// error: 'double' is not a valid type for a template non-type parameter
// template<double Value>
// double process (double v) {
//   return v + Value;
// }

template<int Value>
double process (int v) {
  return static_cast<double>(v + Value);
}

int main () {
  // process<2.0>(3.0);
  process<2>(3); // it's ok
}
