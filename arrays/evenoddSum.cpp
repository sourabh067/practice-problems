#include <iostream>
using namespace std;

int main() {
    // arrays
    // even index + odd index elements
    
    int arr[5] = {2,44,-3,12,9};
    int countO=0;
    int countE=0;
    
    for (int i= 0; i < 5 ; i++){
         if (i%2==0) countE+=arr[i];
         else countO+=arr[i];
    }
    cout <<"sum of even index elements :"<< countE << "\n";
    cout <<"sum of odd index elements :"<< countO << "\n" ;
    cout <<"total :"<< countO + countE ;
}