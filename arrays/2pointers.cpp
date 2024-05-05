#include <iostream>
using namespace std;

int main() {
    // arrays
    // reverse
    // two pointer approach
    // swap
    // i < j condition
    
    int arr[5] = {2,-4,12,12,9};
    int i = 0;
    int j = 4;  // len-1
    
    while (i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
        i++;
        j--;
    }
    
    for (int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}