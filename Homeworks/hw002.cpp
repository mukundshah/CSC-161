// WAP to convert fahrenheit temperature scale to centigrade temperature scale

#include <iostream>
using namespace std;

class FahrenheitToCelsius{
private:
    float fahrenheit, celsius;

public:
    void read();
    void process();
    void display();
};

void FahrenheitToCelsius::read(){
    cout << "Enter temperature (°F): ";
    cin >> fahrenheit;
}
void FahrenheitToCelsius::process(){
    celsius = (fahrenheit - 32.0) * 5 / 9;
}
void FahrenheitToCelsius::display(){
    cout << "Temperature (°C): " << celsius;
}

int main(){
    FahrenheitToCelsius fahrenheitToCelsius;

    fahrenheitToCelsius.read();
    fahrenheitToCelsius.process();
    fahrenheitToCelsius.display();

    return 0;
}
