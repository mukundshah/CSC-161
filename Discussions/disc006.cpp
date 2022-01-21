// Function overloading

#include <iostream>
using namespace std;

void print(int i){
  cout << "This is int: " << i << endl;
}

void print(double f){
  cout << "This is float: " << f << endl;
}

void print(char c){
  cout << "This is char: " << c << endl;
}

int main(){
  print(10);
  print(10.10);
  print('z');
}
