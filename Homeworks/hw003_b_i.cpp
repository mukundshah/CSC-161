// WAP to find simple interest.
// b. Solve by reading from users

#include <iostream>
using namespace std;

class SimpleInterest{
private:
    int principle, time;
    float rate, interest;

public:
    void read(){
      cout << "Enter principle: ";
      cin >> principle;
      cout << "Enter time (years): ";
      cin >> time;
      cout << "Enter rate: ";
      cin >> rate;
    }
    void process(){
        interest = (principle * rate * time) / 100;
    }
    void display(){
        cout << "Simple Interest =  " << interest;
    }
};

int main(){

    SimpleInterest simpleInterest;

    simpleInterest.read();
    simpleInterest.process();
    simpleInterest.display();

    return 0;
}
