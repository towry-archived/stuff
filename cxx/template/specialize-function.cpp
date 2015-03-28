
template<typename T>
void foo (T a) {

}

template<>
void foo<int> (int a) {

}

int main () {
  foo<int>(2);

  // deduction
  // foo(2);
}
