// Constructors, copy and move constructors, copy and move assignment operators, virtual functions

#include <iostream>
#include <string>

class Animal {
  int age;
  std::string name;

public:
  // constructors
  Animal() : age(0), name("") {
    // std::cout << "constructor of Animal" << std::endl;
  }
  Animal(const int _age, const std::string _name) : age(_age), name(_name) {
    // std::cout << "constructor of Animal" << std::endl;
  }
  ~Animal() {
    // std::cout << "destructor of Animal" << std::endl;
  }

  // copy constructor
  Animal(const Animal &a) : age(a.age), name(a.name) { std::cout << "copy constructor of Animal" << std::endl; }

  // copy assignment operator
  Animal &operator=(const Animal &a) {
    age  = a.age;
    name = a.name;
    std::cout << "copy assignment operator of Animal" << std::endl;
    return *this;
  }

  // move constructor
  Animal(const Animal &&a) : age(a.age), name(a.name) { std::cout << "move constructor of Animal" << std::endl; }

  // move assignment operator
  Animal &operator=(const Animal &&a) {
    age  = a.age;
    name = a.name;
    std::cout << "move assignment operator of Animal" << std::endl;
    return *this;
  }

  // pure virtual function (must be overriden, otherwise the class is abstract)
  virtual void speak() = 0;
  // virtual function (can be overriden)
  virtual void eat() { std::cout << "Animal eating" << std::endl; }

  int getAge() const { return age; }
};

class Cat : public Animal {
public:
  Cat() : Animal() {}
  Cat(const int _age, const std::string _name) : Animal(_age, _name) {}
  // this destructor automatically calls the destructor of the base class
  ~Cat() {
    // std::cout << "destructor of Cat" << std::endl;
  }

  Cat(const Cat &c) : Animal(c) { std::cout << "copy constructor of Cat" << std::endl; }
  Cat(const Cat &&c) : Animal(std::move(c)) { std::cout << "move constructor of Cat" << std::endl; }
  Cat &operator=(const Cat &c) {
    // call the copy assignment operator of the base class
    Animal::operator=(c);
    std::cout << "copy assignment operator of Cat" << std::endl;
    return *this;
  }
  Cat &operator=(const Cat &&c) {
    Animal::operator=(std::move(c));
    std::cout << "move assignment operator of Cat" << std::endl;
    return *this;
  }

  // functions overriden from the base class are always virtual, even if the virtual keyword is not used
  // the identifier override is optional, but it is a good practice to use it,
  // since it will cause a compiler error if the function is not overriden
  virtual void speak() override { std::cout << "Meow" << std::endl; }
  virtual void eat() override { std::cout << "Cat eating" << std::endl; }
};

int main() {

  Cat a1{16, "Ben"};

  std::cout << "testing copy constructor" << std::endl;

  Cat a2{a1}; // copy constructor
  Cat a3{};
  a3 = a1; // copy assignment operator

  std::cout << "testing move constructor" << std::endl;

  Cat a4{std::move(a2)};
  Cat a5{};
  a5 = std::move(a3);
  Cat a6{Cat{16, "Ben"}};
  system("pause");
  return 0;
}
