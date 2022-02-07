// Write a program to find area of a rectangle using the concept of constructor

#include <iostream>
using namespace std;

class Area {
  float area;

public:
  Area(float length, float breadth) { area = length * breadth; }
  void display() { cout << "The area is calculated to be: " << area << endl; }
};

int main() {

  Area area = Area(5.0, 3.5);
  area.display();

  return 0;
}
