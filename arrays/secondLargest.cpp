#include <iostream>
#include <climits>
using namespace std;

int main() {
    // arrays
    // second largest of array
    
    int arr[5] = {2,12,-3,12,9};
    int mx=INT_MIN;
    int smx=INT_MIN;
    
    for (int i= 0; i < 5 ; i++){
         mx=max(mx,arr[i]);
    }
    
    for (int i= 0; i < 5 ; i++){
         if (arr[i]!=mx) smx = max(smx,arr[i]);
    }
    cout <<"second largest :"<< smx << "\n";
}