#include <iostream>
using namespace std;

class Base {
public:
  void displayBase() { std::cout << "Base class\n"; }
};

class Derived : public Base {
public:
  void displayDerived() { std::cout << "Derived class\n"; }
};

int main() {
  Derived derivedObj;
  derivedObj.displayBase();
  derivedObj.displayDerived();
  return 0;
}
