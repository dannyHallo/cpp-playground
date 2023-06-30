// Constructors, copy and move constructors, copy and move assignment operators, virtual functions

#include <iostream>
#include <string>

struct A {
  int a;
  float b;
};

A a;
int main() {
  std::cout << a.a << std::endl;
  std::cout << a.b << std::endl;

  A b;
  std::cout << b.a << std::endl;
  std::cout << b.b << std::endl;

  A c{};
  std::cout << c.a << std::endl;
  std::cout << c.b << std::endl;
  
  system("pause");
  return 0;
}
