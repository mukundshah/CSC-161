// WAP to find sum of two numbers by defining member functions outside of the class

#include <iostream>
using namespace std;

class Addition{
private:
    int addend, augend, sum;

public:
    // Function definition
    void read();
    void process();
    void display();
};

// Function declaration
void Addition::read(){
    cout << "Enter two numbers:  ";
    cin >> addend >> augend;
}
void Addition::process(){
    sum = addend + augend;
}
void Addition::display(){
    cout << "Sum of two numbers =  " << sum;
}

int main(){

    Addition addition;

    addition.read();
    addition.process();
    addition.display();
    
    return 0;
}
