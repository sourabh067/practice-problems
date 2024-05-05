#include <iostream>
using namespace std;

int main() {
    // 2Darrays or matrix or grid
    // add two matrices
    // both should be of same dimensions
    // and store in mat3[2][3]
    
    int mat1[2][3]={{2,4,6},{8,10,0}}; // matrix 1
    int mat2[2][3]={1,3,5,7,9,11}; // matrix 2
    int mat3[2][3]; // sum
    
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            mat3[i][j]  = mat1[i][j] + mat2[i][j];
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
}