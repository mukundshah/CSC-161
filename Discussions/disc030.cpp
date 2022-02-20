// Basic to Class type conversion
#include <iostream>
using namespace std;

class X {
  int z;
  char y;

public:
  X() {}
  X(char p) {
    z = (int)p;
    y = p;
  }
  void show() { cout << z << y << endl; }
};

int main() {
  char s = 'a';
  X x1;
  x1 = s;
  x1.show();

  return 0;
}
