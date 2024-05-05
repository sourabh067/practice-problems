#include <iostream>
using namespace std;

int main() {
    // 2Darrays or matrix or grid
    // ways of initializaton
    
    // way 1
    int grid[2][3] = {{7,2,3},{0,1,6}};
    
    // way 2
    int mat[2][2];
    mat[0][0] = 14;
    mat[0][1] = 13;
    mat[1][0] = 12;
    mat[1][1] = 11;
    
    // way 3
    int matrix[][3]= {{11,22,33},{44,55,66}};
    // rows auto detect bt columns mandatory but new to initialize 
    
    // way 4
    int D2[][3] = {9,8,7,6,5}; 
    // since columns = 3 --> {{9,8,7},{6,5,0}} auto
    cout << "D2[1][2] :" << D2[1][2] << endl; // default value 0
    
}