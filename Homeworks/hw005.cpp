// Using the concept of constructor, write a program to read name, address and
// roll number of a student and display it using display() method.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  string address;
  int roll;

public:
  Student(string _name, string _address, int _roll) {
    name = _name;
    address = _address;
    roll = _roll;
  }
  void display() {
    cout << "Student Detail:" << endl;
    cout << "Name: " << name << "\nRoll: " << roll << "\nAddress: " << address;
  }
};

int main() {

  Student student = Student("John Doe", "Kathmandu, Nepal", 20);
  student.display();

  return 0;
}
