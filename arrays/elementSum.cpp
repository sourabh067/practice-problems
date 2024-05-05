#include <iostream>
using namespace std;

int main() {
    // arrays
    // sum of elements
    
    int arr[] = {12,4,22,-8,3};
    
    int sum =0;
    for (int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout << "sum :" << sum ;
}