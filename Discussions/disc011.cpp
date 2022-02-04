// Default Constructor

#include <iostream>
using namespace std;

class Demo {
  int p, g;

public:
  Demo() {
    p = 0;
    g = 0;
  }
  void display() {
    cout << "p = " << p << "\n";
    cout << "g = " << g << "\n";
  }
};

int main() {

  Demo demo;

  demo.display();

  return 0;
}
