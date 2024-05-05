#include <iostream>
using namespace std;

void Rfn(){ // recursion function
   if (false) return; // base case

    cout << "fn"; // work

    Rfn(); // call
}

int main() {
    // recursion
    // a func calling itself
    
    Rfn();
    // its infinite loop here.
}