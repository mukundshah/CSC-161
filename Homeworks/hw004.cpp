// Calculate the weight of a mass on earth and moon.
// The acceleration due to gravity for earth is g = 9.8 and
// g = 1.67. Use the concept of default argument.

#include <iostream>
using namespace std;

class Weight{
    private:
        int _weight;

    public:
        void get(int mass, float g = 9.8){
            _weight = mass * g;
        }
        void display(){
            cout << "Weight = " << _weight;
        }
};

int main(){

    Weight weight;
    int mass;
    float g;
    char choice;

    cout << "Enter mass of object in kg: " ;
    cin  >> mass;
    cout << "The default for g is 9.8. Do you want to change it? (y/N): ";
    cin >> choice;

    switch (choice){
        case 'y':
        case 'Y':
            cout << "Enter value of g: ";
            cin  >> g;
            weight.get(mass, g);
            break;
        default:
            weight.get(mass);
            break;
    }

    weight.display();

    return 0;
}
