#include <iostream>
#include <cmath>
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
    // combination
    // n! / (r! (n-r)!)
    
    int n = 5;
    int r = 3;
    
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial (n-r);
    
    cout << "combinations :" << a/(b*c) <<endl;
   
    return 0;
}