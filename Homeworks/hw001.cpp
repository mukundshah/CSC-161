#include <iostream>
using namespace std;

class Area{
private:
    int _length, _breadth, area;

public:
    void get(int length, int breadth){
        _length = length;
        _breadth = breadth;
    }
    void processing(){
        area = _length * _breadth;
    }
    void display(){
        cout << "The area of the rectangle is =  " << area;
    }
};

int main(){

    Area area;
    int l, b;

    cout << "Enter the length and breadth of the rectangle:\t";
    cin >> l >> b;

    area.get(l, b);
    area.processing();
    area.display();

    return 0;
}
