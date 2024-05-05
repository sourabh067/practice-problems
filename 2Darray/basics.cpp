#include <iostream>
using namespace std;

int main() {
    // 2Darrays or matrix or grid
    // mat[row][col]
    // total elements = rows * columns
    
    int mat[3][2] = {{9,8},{7,6},{5,4}}; 
    
    // indexing
    int eight = mat[0][1];
    cout << "mat[0][1] :" << eight << endl;
    
    // way 2
    int grid[2][3];
    grid[0][0] = 10;
    grid[0][1] = -8;
    grid[0][2] = 3;
    grid[1][0] = 0;
    grid[1][1] = 1;
    grid[1][2] = 2;
    
    cout << "grid[0][2] :" << grid[0][2] << endl; // 3
    cout << "grid[1,1] :" << grid[1,1] << endl; // address y?
    
    // print all elements
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
}