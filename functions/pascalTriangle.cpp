#include <iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    for (int i =1;i<=x;i++){
        fact*=i;
    }
    return fact;
}

int nCr(int i,int j) { // from triangle loop
    return factorial(i)/(factorial(j) * factorial(i-j));
}

int main() {
    // functions
    // pascal triangle
    // iCj combination + factorial + triangle
    
    int n = 4;
    
    for (int i=0;i<=n;i++){
        
        for (int j=0 ;j<=n-i-1;j++){ // n-i-1
            cout << " ";
        }
        
        for (int j=0 ;j<=i;j++){
            cout << nCr(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}

//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 