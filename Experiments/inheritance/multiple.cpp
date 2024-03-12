#include <iostream>

class Base1 {
public:
  void displayBase1() { std::cout << "Base1 class\n"; }
};

class Base2 {
public:
  void displayBase2() { std::cout << "Base2 class\n"; }
};

class Derived : public Base1, public Base2 {
public:
  void displayDerived() { std::cout << "Derived class\n"; }
};

int main() {
  Derived derivedObj;
  derivedObj.displayBase1();
  derivedObj.displayBase2();
  derivedObj.displayDerived();
  return 0;
}