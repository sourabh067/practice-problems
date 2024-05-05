#include <iostream>
using namespace std;

void Arr(int a[]){
   a[1] = -3 ; // change value
   
   for (int i=0;i<5;i++){
        cout << a[i] << " ";
    }
}

int main() {
    // arrays
    // passing array to function
    // arrays are passed by reference **
    
    int arr[5] = {2,3,4,5,6};
    Arr(arr);
}