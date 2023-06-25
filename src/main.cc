#include <iostream>
#include <vector>

using namespace std;

class TestClass {
private:
  
public:
  TestClass(string c) : s(c) { cout << "testClass, " << s << " constructor" << endl; }

  ~TestClass() { cout << "testClass, " << s << " destructor" << endl; }

};

void foo() {
  TestClass test("foo");
  test.print();
}

int main() {
  foo();

  system("pause");
  return 0;
}
