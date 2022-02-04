// Copy Constructor

#include <iostream>
using namespace std;

class CopyCon {
private:
  int id;

public:
  CopyCon() {}
  CopyCon(int x) { id = x; }
  CopyCon(CopyCon &y) { id = y.id; }
  void display() { cout << id; }
};

int main() {

  CopyCon A(20);
  CopyCon B(A);
  CopyCon C = A;
  CopyCon D;
  D = A;

  cout << "id of A: ";
  A.display();
  cout << "\nid of B: ";
  B.display();
  cout << "\nid of C: ";
  C.display();
  cout << "\nid of D: ";
  D.display();

  return 0;
}
