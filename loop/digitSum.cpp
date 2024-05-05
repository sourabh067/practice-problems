#include <iostream>
using namespace std;

int main() {
  // sum of all digits of number
  // n%10 to get last digit
  // n/10 reduce num digits by 1
  
  int n,sum,ld;
  
  n=456;
  while(n>0){
      ld = n%10;  //. gets ld
      sum+=ld;    // add ld to sum
      n /= 10;   // reduce digits
  }
  cout << "sum :" << sum;
}

// NOTE : to get product of digits [no ZERO in num] 
// int sum=1;
// sum*=ld;