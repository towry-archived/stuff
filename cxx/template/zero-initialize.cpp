#include <iostream>

template<typename T>
class MyClass {
private:
  T x;
public:
  MyClass () : x() {
    std::cout << "I am constroctor\n";
  }
};

int main () {
  MyClass<int> ma;
}
