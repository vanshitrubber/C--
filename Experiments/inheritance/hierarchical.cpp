#include <iostream>

class Base {
public:
  void displayBase() { std::cout << "Base class\n"; }
};

class Derived1 : public Base {
public:
  void displayDerived1() { std::cout << "Derived1 class\n"; }
};

class Derived2 : public Base {
public:
  void displayDerived2() { std::cout << "Derived2 class\n"; }
};

int main() {
  Derived1 derived1Obj;
  derived1Obj.displayBase();
  derived1Obj.displayDerived1();
  Derived2 derived2Obj;
  derived2Obj.displayBase();
  derived2Obj.displayDerived2();
  return 0;
}
