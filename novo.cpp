#include <iostream>

class ClasseA {
private:
  int A = 10;
public:
  void printA() {
    std::cout << A << std::endl;
    std::cout << "print da funcao A" << std::endl;
  }
};