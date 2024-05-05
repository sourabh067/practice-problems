#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 2Darrays or matrix or grid
    // find sum of all elements that make up rectangle
    
    int mat[5][5]={3,5,6,7,8,2,8,0,2,1,9,8,2,4,8,0,2,6,5,1,6,8,5,9,2};
    int sum=0;
    
    // rect[1][2] to rect[5][5] 
    // i 1 to 5
    // j 2 to 5
    for (int i=1;i<5;i++){
        for (int j=2;j<5;j++){
            
            sum+=mat[i][j];
        }
    }
    cout << "sum of rectangle :" << sum<< endl;
}

// given
// 3 5 6 7 8
// 2 8 0 2 1
// 9 8 2 4 8 
// 0 2 6 5 1
// 6 8 5 9 2

// find sum of rect[1][2] to rect[5,5]
// 0 2 1
// 2 4 8 
// 6 5 1
// 5 9 2