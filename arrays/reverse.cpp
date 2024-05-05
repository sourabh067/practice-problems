#include <iostream>
#include <climits>
using namespace std;

int main() {
    // arrays
    // reverse
    // i+j = arrSize -1       (5-1)
    
    int arr[5] = {2,-4,12,12,9};
    int brr[5];
    
    for (int i=0;i<5;i++){
        int j=5-1-i ;
        brr[i] = arr[j];
        cout << brr[i] <<" ";
    }
}