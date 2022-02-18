// Overloading binary plus (+) operator

#include <iostream>
using namespace std;

class Complex {
  float x, y;

public:
  Complex() {}
  Complex(float real, float img) {
    x = real;
    y = img;
  }
  Complex operator+(Complex);
  void display();
};

Complex Complex::operator+(Complex C) {
  Complex temp;
  temp.x = x + C.x;
  temp.y = y + C.y;

  return temp;
}

void Complex::display() { cout << x << " + " << y << "i" << endl; }

int main() {
  Complex C1, C2, C3;

  C1 = Complex(2.5, 3.5);
  C2 = Complex(1.6, 2.7);
  C3 = C1 + C2;

  cout << "C1 = ";
  C1.display();
  cout << "C2 = ";
  C2.display();
  cout << "C3 = ";
  C3.display();

  return 0;
}
