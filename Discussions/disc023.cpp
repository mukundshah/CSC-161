#include <iostream>
using namespace std;

int count = 0;
class Alpha {
public:
  Alpha() {
    count++;
    cout << "\nNo. of object created is: " << count;
  }
  ~Alpha() {
    cout << "\nNo. of object destroyed: " << count;
    count--;
  }
};

int main() {
  cout << "\n Enter main";
  {
    Alpha a1, a2, a3, a4;
    {
      cout << "\nEnter Block 1";
      Alpha a5;
    }
    {
      cout << "\nEnter Block 2";
      Alpha a6;
    }
  }
  cout << "\nRE-ENTER main()";

  return 0;
}
