// Class to Class type conversion

#include <iostream>
#include <math.h>
using namespace std;

class Rectangle {
  float x, y;

public:
  Rectangle(float a, float b) { x = a, y = b; }
  float get_x() { return x; }
  float get_y() { return y; }
};

class Polar {
  float radius, theta;

public:
  Polar() {}
  Polar(Rectangle rect) {
    float temp_x = rect.get_x();
    float temp_y = rect.get_y();
    radius = sqrt(temp_x * temp_x + temp_y * temp_y);
    theta = atan(temp_y / temp_x);
  }
  void show();
};

void Polar::show() {
  cout << "Radius (r) : " << radius << endl;
  cout << "Theta (θ) : " << theta * (180 / 3.14) << endl;
}

int main() {
  Polar polar1;
  Rectangle rectangle1 = Rectangle(6, 9);

  polar1 = rectangle1;
  polar1.show();

  return 0;
}
