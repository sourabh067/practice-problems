#include <iostream>
using namespace std;

int main() {
  // digit count
  // divide by 10 repeatedly
  
  int num = 3456; // 4 digits
  int count;
  
  while (num > 0){
      num=num/10;
      count++;
  }
  cout << "digits :" << count ;
  
}