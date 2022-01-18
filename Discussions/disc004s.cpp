// WAP to find sum of two numbers by passing arguments and defining functions outside of the class

#include <iostream>
using namespace std;

class Addition{
private:
    int _addend, _augend, sum;

public:
    // Function definition
    void get(int addend, int augend);
    void process();
    void display();
};

// Function declaration
void Addition::get(int addend, int augend){
      _addend = addend;
      _augend = augend;
}
void Addition::process(){
    sum = _addend + _augend;
}
void Addition::display(){
    cout << "Sum of two numbers =  " << sum;
}

int main(){

    Addition addition;
    int a, b;

    cout << "Enter two numbers:  ";
    cin >> a >> b;

    addition.get(a, b);
    addition.process();
    addition.display();
    
    return 0;
}
