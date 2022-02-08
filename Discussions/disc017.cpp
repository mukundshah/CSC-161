// Friend Function

#include <iostream>
using namespace std;

class ABC;

class XYZ {
  int x;

public:
  void set_value(int i) { x = i; }
  friend void map(XYZ, ABC);
};

class ABC {
  int a;

public:
  void set_value(int i) { a = i; }
  friend void map(XYZ, ABC);
};

void map(XYZ m, ABC n) {
  if (m.x > n.a)
    cout << m.x;
  else
    cout << n.a;
}

int main() {

  ABC q;
  q.set_value(10);

  XYZ p;
  p.set_value(20);

  map(p, q);

  return 0;
}
