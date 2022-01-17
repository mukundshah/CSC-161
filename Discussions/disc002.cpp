// WAP to read two numbers and find the sum of them. Use two objects in your program. 

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
    void processing(){
        sum = addend + augend;
    }
    void display(){
        cout << "Sum of two numbers =  " << sum;
    }
};

int main(){

    Addition addition1;
    Addition addition2;

    addition1.read();
    addition1.processing();
    addition1.display();
    
    addition2.read();
    addition2.processing();
    addition2.display();
    
    return 0;
}
