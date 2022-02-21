// Class to Class type conversion

#include <iostream>
#include <math.h>
using namespace std;

class Polar {
  float radius, theta;

public:
  Polar(float getRadius, float getTheta) {
    radius = getRadius, theta = getTheta;
  }
  float getRadius() { return radius; }
  float getTheta() { return theta; }
};

class Rectangle {
  float x, y;

public:
  Rectangle() {}
  Rectangle(Polar pol) {
    float temp_r = pol.getRadius();
    float temp_theta = pol.getTheta();
    x = temp_r * sin(temp_theta);
    y = temp_r * cos(temp_theta);
  }
  void show();
};

void Rectangle::show() {
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;
}

int main() {
  Rectangle rect1;
  Polar pol = Polar(6, 90);

  rect1 = pol;
  rect1.show();

  return 0;
}
