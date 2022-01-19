// Lab 1: Class and Objects
// P1: Write a program to read two numbers and find the sum of them.

#include <iostream>
using namespace std;

class Addition{
private:
    int addend, augend, sum;

public:
    void read(){
        cout << "Enter two numbers:  ";
        cin >> addend >> augend;
    }
    void process(){
        sum = addend + augend;
    }
    void display(){
        cout << "Sum of two numbers =  " << sum;
    }
};

int main(){

    Addition addition;

    addition.read();
    addition.process();
    addition.display();
    
    return 0;
}
