#include <iostream>
using namespace std;

void swapRef(int& x,int& y) {  // passing ref to x,y address
   int temp = x;
   x = y ;
   y = temp;
}

int main() {
    // functions
    // swap 2 numbers
    // pass by ref
    int x = -3;
    int y = 7;
    
    swapRef(x,y);
    
    cout << x << " " << y << endl;
    
    return 0;
}