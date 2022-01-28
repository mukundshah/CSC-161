// Object as Function Argument

#include <iostream>
using namespace std;

class Demo {
  int a;

public:
  void set(int x) { a = x; }
  void sum(Demo ob1, Demo ob2) { a = ob1.a + ob2.a; }
  void print() { cout << "Value of A: " << a; }
};

int main() {

  Demo d1, d2, d3;

  d1.set(10);
  d2.set(20);
  d3.sum(d1, d2);
  d1.print();
  d2.print();
  d3.print();

  return 0;
}
