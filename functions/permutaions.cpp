#include <iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    for (int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}

int main() {
    // functions
    // permuation
    // n! / (n-r)!
    
    int n = 6;
    int r = 3;
    
    int a = factorial(n);
    int b = factorial (n-r);
    
    cout << "combinations :" << a/(b) <<endl;
   
    return 0;
}