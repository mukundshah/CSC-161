// Overloading ++ operator (postfix)
#include <iostream>
using namespace std;

class Time {
  int hours, minutes;

public:
  Time() {
    hours = 0;
    minutes = 0;
  }
  Time(int getHours, int getMinutes) {
    hours = getHours;
    minutes = getMinutes;
  }
  Time operator++(int) {
    ++minutes;
    if (minutes >= 60) {
      ++hours;
      minutes = minutes - 60;
    }
    return Time(hours, minutes);
  }
  void displayTime() { cout << "H: " << hours << "M: " << minutes << endl; }
};

int main() {
  Time T1 = Time(11, 59);

  T1++;
  T1.displayTime();
  T1++;
  T1.displayTime();

  return 0;
}
