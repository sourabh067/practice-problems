#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // composite or prime number
    // number which has factors ONLY 1 & itself == prime
    
    int n =99;
    bool flag; 

    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) {
        flag = true;
        break;
        }
    }

    if (n==1) cout << "n is neither prime nor composite\n ";
    else if (flag) cout << "composite";
    else cout << "prime";

    return 0;
}