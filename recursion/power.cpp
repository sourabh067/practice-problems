#include <iostream>
using namespace std;


int power(int b,int p){
    if (p == 0) return 1;
  
    return b*power(b,p-1); 
    // b^p = b * b^(p-1)
    // 6^4 = 6 * 6^(3) 
}

int main() {
    // recursion
    // number ^ power
    
    int b = 6; // base
    int p = 4; // power
    
    cout << "b^p : " << power(b,p) ;
}