#include <initializer_list>
#include <iostream>
#include <vector>

class Animal {
public:
  virtual void speak() = 0;
  void shit() { std::cout << "I'm shitting!" << std::endl; }
};

class Cat : public Animal {
public:
  virtual void speak() { std::cout << "I'm a cat!" << std::endl; }
  void shit() { std::cout << "Miao BUUUU!" << std::endl; }
};

int main() {
  Animal *c = new Cat{};

  c->speak();
  c->shit();

  Cat *c2 = new Cat{};

  void *c3 = new Cat{};

  c2->speak();
  c2->shit();

  ((Cat *)c3)->speak();

  system("pause");
  return 0;
}
