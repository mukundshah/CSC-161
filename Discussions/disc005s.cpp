#include <iostream>
using namespace std;

class SimpleInterest{
private:
    int _principle, _time;
    float _rate, interest;

public:
    void get(int principle, int time, float rate = 4){
        _principle = principle;
        _time = time;
        _rate = rate;
    }
    void process(){
        interest = (_principle * _rate * _time) / 100;
    }
    void display(){
        cout << "Simple Interest =  " << interest;
    }
};

int main(){
    SimpleInterest simpleInterestForCeo, simpleInterestForAccountant, simpleInterestForAsstAccountant, simpleInterestForHelper;
    
    simpleInterestForCeo.get(1000000, 4, 6);
    simpleInterestForCeo.process();
    simpleInterestForCeo.display();
    
    simpleInterestForAccountant.get(500000, 3);
    simpleInterestForAccountant.process();
    simpleInterestForAccountant.display();
    
    simpleInterestForAsstAccountant.get(500000, 5);
    simpleInterestForAsstAccountant.process();
    simpleInterestForAsstAccountant.display();
    
    simpleInterestForCeo.get(200000, 10, 5);
    simpleInterestForCeo.process();
    simpleInterestForCeo.display();
    
    return 0;
}
