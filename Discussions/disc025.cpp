// Overloading unary minus (-) operator

#include <iostream>
using namespace std;

class Space {
  int x, y, z;

public:
  void getData(int a, int b, int c);
  void display();
  void operator-();
};

void Space::getData(int a, int b, int c) {
  x = a;
  y = b;
  z = c;
}

void Space::display() {
  cout << x << " ";
  cout << y << " ";
  cout << z << "\n";
}

void Space::operator-() {
  x = -x;
  y = -y;
  z = -z;
}

int main() {
  Space S;
  S.getData(10, -20, 30);
  cout << "S: ";
  S.display();
  -S;
  cout << "S: ";
  S.display();

  return 0;
}
