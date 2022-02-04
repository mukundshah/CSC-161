// Parameterized Constructor

#include <iostream>
using namespace std;

class Param {
  int a, b;

public:
  Param(int, int);
  void display() {
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
  }
};

Param::Param(int x, int y) {
  a = x;
  b = y;
}

int main() {

  Param param1 = Param(10, 20);
  Param param2(50, 60);

  param1.display();
  param2.display();

  return 0;
}
