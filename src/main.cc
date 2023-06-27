#include <initializer_list>
#include <iostream>
#include <vector>

#include "test.hh"

class A {
  std::string str;

public:
  explicit A(std::string st) : str(st) { std::cout << "st = " << st << std::endl; }
  // A(std::string st) : str(st) { std::cout << "st = " << st << std::endl; }
};

int main() {
  A a{"hi"};
  A *a2 = new A{"hi"};
  A a3  = A{"aaa"};
  A a4  = {"aaa"};
  A a5  = "aaa";
  A a6  = std::string{"aaa"};

  static_cast<A>("aaa");
  system("pause");
  return 0;
}
