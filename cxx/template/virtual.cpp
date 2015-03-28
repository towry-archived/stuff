
// ERROR: template may not be 'virtual'

template <typename T>
class A {
public:
  template <typename T2>
  virtual void copy (T2 const &a) {}
};

int main () {
  A<int> a;
  a.copy<double>(2.0);
}
