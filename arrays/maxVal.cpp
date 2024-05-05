#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // arrays
    // max element value
    
    int arr[5] = {12,4,22,-8,3};
    
    int maxVal=arr[0];
    
    for (int i= 0; i < 5 ; i++){
        if (maxVal<arr[i]) maxVal = arr[i];
    }
    cout << "maxVal :" << maxVal << endl ;
    
    // using max()
    int mx = arr[0];
    for (int i= 0; i < 5 ; i++){
        mx = max(mx,arr[i]);
    }
    
    cout << "mx :" << mx ;
}