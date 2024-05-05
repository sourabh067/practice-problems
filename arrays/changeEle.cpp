#include <iostream>
using namespace std;

int main() {
    // arrays
    // change odd index to 2*arr[i]
    // even index to 10+arr[i]
    
    int arr[5] = {2,44,-3,12,9};
    
    for (int i= 0; i < 5 ; i++){
        
       if (i%2==0) cout << 2*arr[i] << " " ;
       else cout << 10+arr[i] << " " ;
    }
}