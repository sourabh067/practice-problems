#include <iostream>
using namespace std;

int main() {
    // 2Darrays or matrix or grid
    // every element n
    
    int mat[5][5];
    int N=10;
    
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat[i][j]=N;
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}