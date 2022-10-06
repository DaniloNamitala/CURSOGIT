#include <iostream>

class ClasseB {
private:
  int B = 20;
public:
  void printB() {
    std::cout << B << std::endl;
    std::cout << "printB" << std::endl;
  }
};