#include <iostream>
using namespace std;


int sum(int n){
    if (n == 1) return 1;
  
    return n+sum(n-1);
    // sum = n + (n-1) + (n-2)+...+0
}

int main() {
    // recursion
    // print 1 to n
    // print sum 1 to n
    // without parameter
    
    int n = 6;
    
    cout << sum(n) ;
}