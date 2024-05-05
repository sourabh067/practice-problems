#include <iostream>
using namespace std;

int main() {
    // arrays
    // bigger elements than X
    
    int arr[5] = {2,44,-3,12,9};
    int X=10;
    int count=0;
    
    for (int i= 0; i < 5 ; i++){
         if (arr[i]>X) {
           
           cout <<"elements > X :" << arr[i] << " \n" ;
           count++;
        }
    }
    cout <<"number of elements > X :"<< count << " " ;
}