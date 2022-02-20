// Overloading > operator
#include <iostream>
using namespace std;

class Sample {
  int greater;

public:
  Sample(int r) { greater = r; }
  void operator>(Sample &obj) {
    if (greater > obj.greater)
      cout << "Greater number is: " << greater << endl;
    else
      cout << "Greater number is: " << obj.greater << endl;
  }
};

int main() {
  Sample C1 = Sample(10);
  Sample C2 = Sample(2);

  C1 > C2;

  return 0;
}
