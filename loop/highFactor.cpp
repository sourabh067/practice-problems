#include <iostream>
using namespace std;

int main(){
    // highest factor
    
    // we know highest factor (except itself) is `less or half of number`

    int n,hf;

    n=35;
    
    for (int i=n/2;i>=1;i--){
        if (n%i==0) {
            hf=i;
            break;
        }
    }
    cout << "highest factor :" << hf;
}