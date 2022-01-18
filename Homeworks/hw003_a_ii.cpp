// WAP to find simple interest.
// a. Solve by passing arguments

#include <iostream>
using namespace std;

class SimpleInterest{
private:
    int _principle, _time;
    float _rate, interest;

public:
    void get(int principle, int time, float rate);
    void process();
    void display();
};

void SimpleInterest::get(int principle, int time, float rate){
        _principle = principle;
        _time = time;
        _rate = rate;
}
void SimpleInterest::process(){
    interest = (_principle * _rate * _time) / 100;
}
void SimpleInterest::display(){
    cout << "Simple Interest =  " << interest;
}

int main(){

    SimpleInterest simpleInterest;
    int principle = 15000;
    int time = 5;
    float rate = 2.5;

    simpleInterest.get(principle, time, rate);
    simpleInterest.process();
    simpleInterest.display();

    return 0;
}
