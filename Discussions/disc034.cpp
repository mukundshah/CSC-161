#include <iostream>
using namespace std;

class Fahrenheit {
  float temperature;

public:
  Fahrenheit(float valTemperature) { temperature = valTemperature; }
  float getTemperature() { return temperature; }
};

class Centigrade {
  float centi_temperature;

public:
  Centigrade() {}
  Centigrade(Fahrenheit F) {
    float temp = F.getTemperature();
    centi_temperature = (temp - 32.0) * (5.0 / 9.0);
  }
  void display() { cout << "Centigrade:" << centi_temperature << endl; }
};

int main() {
  Fahrenheit fahrenheit = Fahrenheit(98.6);
  Centigrade centigrade = fahrenheit;
  centigrade.display();

  return 0;
}
