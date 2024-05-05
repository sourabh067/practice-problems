#include <iostream>
using namespace std;

int main(){
    // geometric progression
    
    // 1,2,4,8,16... diff=i*2
    int n;
    int a = 1;
    for (int i=1;i<=7;i++){
        cout << a << " ,";
        a*=2;  // increment by diff
    }
}