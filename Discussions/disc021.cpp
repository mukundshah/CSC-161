// Static function

#include <iostream>
using namespace std;

class Test {
  int code;
  static int count;

public:
  void set_code() { code = ++count; }
  void show_code() { cout << "object member: " << count << endl; }
  static void showCount() { cout << "count = " << count << endl; }
};

int Test::count;

int main() {

  Test t1, t2;

  t1.set_code();
  t2.set_code();
  Test::showCount();

  Test t3;
  t3.set_code();
  Test::showCount();

  t1.show_code();
  t2.show_code();
  t3.show_code();

  return 0;
}
