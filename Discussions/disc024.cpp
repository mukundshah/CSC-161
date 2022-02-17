#include <iostream>
#include <string.h>
using namespace std;

class String {
  char *name;
  int length;

public:
  String() {
    length = 0;
    name = new char[length + 1];
  }
  String(char *s) {
    length = strlen(s);
    name = new char[length + 1];
    strcpy(name, s);
  }
  void display() { cout << name << endl; }
  void join(String &a, String &b);
};

void String::join(String &a, String &b) {
  length = a.length + b.length;
  delete name;
  name = new char[length + 1];
  strcpy(name, a.name);
  strcat(name, b.name);
}

int main() {
  char *first = "AMRIT";
  String string1(first), string2("Campus"), string3("Thamel"), s1, s2;

  s1.join(string1, string2);
  s2.join(s1, string3);
  string1.display();
  string2.display();
  string3.display();
  s1.display();
  s2.display();

  return 0;
}
