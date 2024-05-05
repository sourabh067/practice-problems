#include <iostream>
using namespace std;

int main() {
  // Reverse Number
  // without arrays
  // rev = 10 * rev + ld 
  
  int n,rev,ld;

  // int sum = 0;    // it not initialized it wont work
  n=234; 


  while (n>0){
      ld = n%10;
      rev = 10 * rev + ld;
      n /= 10;

     // sum+=ld;   // to get sum
  }
  cout << "reverse :" <<rev << endl;
  // cout << "sum :" << sum; 
}
