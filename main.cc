#include <memory>
#include <iostream>

class MyClass {
 public:
  MyClass() : prop_a_(1), prop_b_(2) {}

 private:
  int prop_a_;
  int prop_b_;
};

int
main (void) {
  auto ptr = std::make_shared<MyClass>();
  std::cout << ptr << std::endl;
  return 0;
}