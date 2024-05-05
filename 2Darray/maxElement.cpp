#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 2Darrays or matrix or grid
    // maximum element 
    
    int mat[2][3]={{2,4,6},{8,10,0}};
    int mx = INT_MIN;
    
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            
            mx= max(mx,mat[i][j]);
        }
    }
    cout << "max element :" << mx<< endl;
}