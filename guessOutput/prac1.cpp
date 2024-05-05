#include <iostream>
using namespace std;

int main(){
    // guess output
    int x,y,z;
    x = 3;
    y = x = 10; // assignment op RIGHT to LEFT
    z = x < 10;  // x !< 10 =false =0 = z

    cout << x << " " << y << " " << z;
}