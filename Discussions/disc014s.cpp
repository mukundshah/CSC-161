// Write a program to find Simple Interest using concept of constructor
// Write a program to find area of a rectangle using the concept of constructor

#include <iostream>
using namespace std;

class SimpleInterest {
  float simpleInterest;

public:
  SimpleInterest(int principle, int time, int rate) {
    simpleInterest = ((float)principle * (float)time * float(rate)) / 100;
  }
  void display() {
    cout << "The simple interest is calculated to be: Rs. " << simpleInterest
         << endl;
  }
};

int main() {

  SimpleInterest simpleInterest = SimpleInterest(10000, 5, 3);
  simpleInterest.display();

  return 0;
}
