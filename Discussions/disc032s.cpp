// Create class Distance that stores the distance in Kilometers and meters.In
// your program, you should be able to use statement like m=d1; where m is a
// float data and d1 is an object of class Distance.

#include <iostream>
using namespace std;

class Distance {
  int kilometer, meter;

public:
  Distance() {}
  Distance(float distance) {
    kilometer = (int)(distance / 1000.0);
    meter = (int)(distance - kilometer * 1000.0);
  }
  void display() {
    cout << "Distance: " << kilometer << "km " << meter << "m." << endl;
  }
};

int main() {
  float m;
  Distance d1;

  cout << "Enter distance (in meters): ";
  cin >> m;

  d1 = m;
  d1.display();

  return 0;
}
