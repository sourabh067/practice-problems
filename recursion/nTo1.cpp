#include <iostream>
using namespace std;

void print(int n){
    if (n==0) return;
    cout << "n : " << n << endl;
    print(n-1);
}

int main() {
    // recursion
    // print n to 1
    
    int n =3 ;
    print(n);
}

// n : 3
// n : 2
// n : 1