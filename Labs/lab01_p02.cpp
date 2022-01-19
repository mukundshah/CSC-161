// Lab 1: Class and Objects
// P2: Write a program to find the sum of two number using assignment.

#include <iostream>
using namespace std;

class Addition{
private:
    int _addend, _augend, sum;

public:
    void get(int addend, int augend){
      _addend = addend;
      _augend = augend;
    }
    void processing(){
        sum = _addend + _augend;
    }
    void display(){
        cout << "Sum of two numbers =  " << sum;
    }
};

int main(){

    Addition addition;
    int a, b;

    cout << "Enter two numbers:  ";
    cin >> a >> b;

    addition.get(a, b);
    addition.processing();
    addition.display();
    
    return 0;
}
