#include <initializer_list>
#include <iostream>
#include <vector>

class Animal {
public:
  Animal() = default;

  bool compare(Animal &a) const { return this == &a; }
};

int main() {
  Animal a1{};
  Animal a2{};

  std::cout << a1.compare(a2);
  std::cout << a1.compare(a1);
  system("pause");
  return 0;
}
