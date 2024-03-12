#include <iostream>

class Base {
public:
  void displayBase() { std::cout << "Base class\n"; }
};

class Intermediate : public Base {
public:
  void displayIntermediate() { std::cout << "Intermediate class\n"; }
};

class Derived : public Intermediate {
public:
  void displayDerived() { std::cout << "Derived class\n"; }
};

int main() {
  Derived derivedObj;
  derivedObj.displayBase();
  derivedObj.displayIntermediate();
  derivedObj.displayDerived();
  return 0;
}