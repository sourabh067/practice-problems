#include <iostream>
using namespace std;

int main() {
    // 2Darrays or matrix or grid
    // marks and roll no. side by side
    
    int student[4][2]={{34,5},{55,2},{67,7},{99,8}};
    
    for (int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout << student[i][j] << " ";
        }
        cout << endl;
    }
    
}