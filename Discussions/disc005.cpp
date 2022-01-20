// Default argument

#include <iostream>
using namespace std;

class Sample{
    private:
        int _sum;
    
    public:
        void get(int x, int y, int z = 10){
            _sum = x + y + z;
        }
        void display(){
            cout << "Sum = " << _sum;
        }
};

int main(){

    Sample S1, S2, S3, S4;

    S1.get(1, 2);
    S1.display();

    S2.get(3, 4, 5);
    S2.display();

    S3.get(10, 20);
    S3.display();

    S4.get(10, 20, 15);
    S4.display();

    return 0;
}
