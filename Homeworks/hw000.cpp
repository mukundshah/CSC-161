#include <iostream>
using namespace std;

class Area{
private:
    int length, breadth, area;

public:
    void read(){
        cout << "Enter the length and breadth of the rectangle:\t";
        cin >> length >> breadth;
    }
    void processing(){
        area = length * breadth;
    }
    void display(){
        cout << "The area of the rectangle is =  " << area;
    }
};

int main(){

    Area area;

    area.read();
    area.processing();
    area.display();

    return 0;
}
