// Inline Functions

#include <iostream>
using namespace std;

class Addition{
    public:
        int sum(int x, int y){
            int z = x + y;
            return z;
        }
        inline int sum_inline(int x, int y){
            int z = x + y;
            return z;
        }
};

int main(){

    Addition addition;

    int A = addition.sum(10, 20);
    int B = addition.sum_inline(10, 20);
    int C = addition.sum_inline(50, 70);
    int D = addition.sum_inline(100, 500);

    cout << "A = " << A << "\nB = " << B << "\nC = " << C << "\nD = " << D << endl;
}
