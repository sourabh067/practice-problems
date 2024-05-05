#include <iostream>
using namespace std;


void print(int n){
    if (n==0) return;
    
    print(n-1);
    
    cout << "n : " << n << endl;
}

int main() {
    // recursion
    // print 1 to n
    // without using extra param
    
    int n = 5;
    
    print(n);
    
}