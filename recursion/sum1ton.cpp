#include <iostream>
using namespace std;


void print(int n, int& sum){
    if (n == 0) return;
  
    print(n - 1, sum);
    
    sum += n;
    
    cout << "n : " << n << endl;
    cout << "sum : " << sum << endl;
}

int main() {
    // recursion
    // print 1 to n
    // print sum 1 to n
    // using parameter
    
    int n = 6;
    int sum = 0;
    print(n, sum);
}