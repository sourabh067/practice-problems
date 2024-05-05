#include <iostream>
using namespace std;

int main() {
  // factorial of a number
  // n!
  
  int n,fact=1;
  n=6;
  
  for (int i=1;i<=n;i++){
     
      fact *=i; 

      // cout << "factorial :" << fact;  // to print 1! ,2! ,3! ...
  }
  cout << "factorial :" << fact; 
}

// for sum 0 to n
// sum = 0;
// sum+=n;