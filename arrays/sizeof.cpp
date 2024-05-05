#include <iostream>
using namespace std;

int main() {
    // arrays
    // sizeof()
    // get size of array
    
    int arr[5] = {12,4,22,-8,3};
    
    int size = sizeof(arr)/sizeof(arr[1]);
    
    // size of arr[5] = 5 * 4 bytes
    // size of arr[1] = 4 bytes
    
    cout << "size of array :" << size ;
}