#include <iostream>
using namespace std;

int count = 0;
class Destruct {
public:
  Destruct() {
    count++;
    cout << "\nNo. of object created is: " << count;
  }
  ~Destruct() {
    cout << "\nNo. of object destroyed: " << count;
    count--;
  }
};

int main() {
  Destruct d1, d2, d3;
  return 0;
}
