
// if without this, there will be an error
// primary template
template<typename T1, typename T2>
class MyClass {

};

// partial specialize
template <typename T>
class MyClass<T, int> {

};

// full specialize
template <>
class MyClass<int, double> {

};

int main () {
  MyClass<double, double> ma;
  MyClass<int, double> mb;
}
