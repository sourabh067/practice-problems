#include <iostream>
using namespace std;

int power(int b,int p){
    if(p == 0) return 1;
  
    else if (p%2==0) return power(b,p/2) * power(b,p/2);
    // p = (p/2) * (p/2)  for even power
    
    else return b * power(b,p/2) * power(b,p/2);
    // p = b * (p/2) * (p/2) for odd power
}

int main() {
    // recursion
    // power of number
    // multiple call 

    
    int b = 2; // base
    int p = 3; // power
    
    cout << power(b,p) ;
}