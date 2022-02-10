// Static data member

#include <iostream>
using namespace std;

class Item {
  int number;
  static int count;

public:
  void get_data(int a) {
    number = a;
    count++;
  }
  void get_count() { cout << "count: " << count << endl; }
};

int Item::count;

int main() {

  Item a, b, c;

  a.get_count();
  b.get_count();
  c.get_count();

  a.get_data(100);
  b.get_data(200);
  c.get_data(300);

  cout << "\nAfter reading data:" << endl;
  a.get_count();
  b.get_count();
  c.get_count();

  return 0;
}
