#include <iostream>
using namespace std;

int main() {
    // arrays
    // taking elements from user
    // loop `cin`
    // every index is seperate variable ,arr[i]
    
    int arr[5];
    
    for (int i=0;i<5;i++){
        cin >> arr[i];
    }
    
    for (int i=0;i<5;i++){
        cout << arr[i] << endl;
    }
}