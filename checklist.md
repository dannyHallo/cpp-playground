- [x] static keyword:

  static member variable:

  we have to declare them explicitly outside the class definition, in the global scope.
  we can assess them by A::static_member_variable or a.static_member_variable.

  static member function:
  can only assess static variables (inside or outside of class)

  static local variable:
  being created for the first time the code is executed to this line, and destroyed when the program exits.

  static global variable:
  a global variable only accessible in the file it is declared.

- [x] friend:

  friend function:
  can access private and protected members of the class it is declared as friend.
  doesn't matter if it is private or public.

  friend class:
  all members of the friend class can access private and protected members of the class it is declared as friend.

- [x] default constructor:

  https://stackoverflow.com/questions/13576055/how-is-default-different-from-for-default-constructor-and-destructor
  use =default to declare a default constructor.
  a default constructor can zero-initialize all members of the class.

  if user defined a empty constructor, the class is no longer trivial, and built-in types can no longer be zero-initialized.

- [x] explicit constructor:
      only useful for single parameter constructor, since only single parameter constructor can be used as implicit conversion.

- [x] virtual functions:
      used to infer this type of class can be overwrited by derived classes
      pure virtual functions: virtual void f() = 0;
      classes containing pure virtual functions are abstruct classes, these classes cannot be instantiated.
      it must be overwritten in its derived classes.

- [ ] polymorphism

- [ ] move constructor

- [x] copy constructor
      used for copying: A a1{}; A a2{a1}; A a3 = a1;
      it can be overwritten by user defined copy constructor: A(const A& a) {}, when changed its position to
      private, it is inaccessable, thus the class is no longer copyable.

      copy constructors are constructors, so when a new object is constructed, the copy constructor is called.

- [x] copy assignment operator

- [x] lvalue and rvalue (aka locator value and read value)
      

- [ ] assignment operator
