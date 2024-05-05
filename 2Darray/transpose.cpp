#include <iostream>
using namespace std;

int main() {
    // 2Darrays or matrix or grid
    // transpose of matrix

    int grid[2][3] = {{7,2,3},{0,1,6}};
    
    // normal matrix
    for (int i=0;i<2;i++){ // rows
        for (int j=0;j<3;j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    // transpose of matrix
      for (int j=0;j<3;j++){  // columns
        for (int i=0;i<2;i++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// x x x
// y y y

// transpose
// x y
// x y
// x y