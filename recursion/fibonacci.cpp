#include <iostream>
using namespace std;

int fibo(int n){
    if(n == 1 || n == 2) return 1;
  
    return fibo(n-1)+fibo(n-2);
    // n = (n-1) + (n-2)
}

int main() {
    // recursion
    // fibonacci series
    // multiple call 
    
    int n = 7;  
    
    cout << fibo(n) ;
}