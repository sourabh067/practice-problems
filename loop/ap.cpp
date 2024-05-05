#include <iostream>
using namespace std;

int main(){
    // arithematic progression
    
    // 4,7,10,13... diff=3
    int n;
    int a = 4;
    for (int i=1;i<=6;i++){
        cout << a << " ,";
        a+=3;  // increment by diff
    }
}