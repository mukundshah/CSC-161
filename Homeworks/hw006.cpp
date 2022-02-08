// Using the concept of friend function, write a program to get name and salary
// of employee. Print the total salary for the three employee.

#include <iostream>
using namespace std;

class EmployeeTwo;
class EmployeeThree;

class EmployeeOne {
  string name;
  int salary;

public:
  void get(string _name, int _salary) {
    name = _name;
    salary = _salary;
  }
  friend void total_salary(EmployeeOne, EmployeeTwo, EmployeeThree);
};

class EmployeeTwo {
  string name;
  int salary;

public:
  void get(string _name, int _salary) {
    name = _name;
    salary = _salary;
  }
  friend void total_salary(EmployeeOne, EmployeeTwo, EmployeeThree);
};

class EmployeeThree {
  string name;
  int salary;

public:
  void get(string _name, int _salary) {
    name = _name;
    salary = _salary;
  }
  friend void total_salary(EmployeeOne, EmployeeTwo, EmployeeThree);
};

void total_salary(EmployeeOne employeeOne, EmployeeTwo employeeTwo,
                  EmployeeThree employeeThree) {
  cout << "Employee 1" << endl;
  cout << "Name :\t" << employeeOne.name << endl;
  cout << "Salary :" << employeeOne.salary << endl;

  cout << "\nEmployee 2" << endl;
  cout << "Name :\t" << employeeTwo.name << endl;
  cout << "Salary :" << employeeTwo.salary << endl;

  cout << "\nEmployee 3" << endl;
  cout << "Name :\t" << employeeThree.name << endl;
  cout << "Salary :" << employeeThree.salary << endl;

  cout << "\nTotal Salary : "
       << (employeeOne.salary + employeeTwo.salary + employeeThree.salary)
       << endl;
}

int main() {
  EmployeeOne employeeOne;
  EmployeeTwo employeeTwo;
  EmployeeThree employeeThree;

  employeeOne.get("John", 10000);
  employeeTwo.get("Jane", 20000);
  employeeThree.get("Tim", 50000);
  total_salary(employeeOne, employeeTwo, employeeThree);

  return 0;
}
