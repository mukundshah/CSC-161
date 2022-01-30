// Object as Function Argument

#include <iostream>
using namespace std;

class Time {
  int _hours, _minutes;

public:
  void get_time(int hours, int minutes) {
    _hours = hours;
    _minutes = minutes;
  }
  void put_time() {
    cout << _hours << " hours and " << _minutes << " minutes" << endl;
  }
  void sum(Time, Time);
};

void Time::sum(Time t1, Time t2) {
  _minutes = t1._minutes + t2._minutes;
  _hours = _minutes / 60;
  _minutes = _minutes % 60;
  _hours = _hours + t1._hours + t2._hours;
}

int main() {

  Time t1, t2, t3;

  t1.get_time(2, 45);
  t2.get_time(3, 30);
  t3.sum(t1, t2);

  cout << "T1 = ";
  t1.put_time();
  cout << "T2 = ";
  t2.put_time();
  cout << "T3 = ";
  t3.put_time();

  return 0;
}
