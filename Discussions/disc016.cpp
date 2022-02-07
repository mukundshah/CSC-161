// Constructor overload

#include <iostream>
using namespace std;

class Complex {
  float x, y;

public:
  Complex() {}
  Complex(float a) { x = y = a; }
  Complex(float real, float imaginary) {
    x = real;
    y = imaginary;
  }
  void sum(Complex, Complex);
  void display();
};

void Complex::sum(Complex c1, Complex c2) {
  x = c1.x + c2.x;
  y = c1.y + c2.y;
}
void Complex::display() { cout << x << "+" << y << "i" << endl; }

int main() {

  Complex A(2.7, 3.5);
  Complex B(1.6);
  Complex C;

  C.sum(A, B);

  cout << "A = ";
  A.display();
  cout << "B = ";
  B.display();
  cout << "C = ";
  C.display();

  return 0;
}
