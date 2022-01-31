// Constructor

#include <iostream>
using namespace std;

class Integer {
  int m, n;

public:
  Integer(int, int); // Constructor Declaration
  void display() {
    cout << "m = " << m << "\n";
    cout << "n = " << n << "\n";
  }
};

Integer::Integer(int x, int y) {
  m = x;
  n = y;
}

int main() {

  Integer integer1(0, 100);           // Constructor called implicitly.
  Integer integer2 = Integer(25, 75); // Constructor called explicitly.

  cout << "OBJECT1"
       << "\n";
  integer1.display();
  cout << "\nOBJECT2"
       << "\n";
  integer2.display();

  return 0;
}
