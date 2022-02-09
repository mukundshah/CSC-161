// Static data member

#include <iostream>
using namespace std;

class Item {
  static int x;

public:
  void get() {
    cout << "x = " << x << endl;
    x++;
  }
};

int Item::x = 10;

int main() {

  Item a, b, c;

  a.get();
  b.get();
  c.get();

  return 0;
}
