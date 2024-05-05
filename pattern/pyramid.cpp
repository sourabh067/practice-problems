#include <iostream>
using namespace std;

int main() {
    // pattern printing
    // pyramid
    // 2 sep loops in 1 main loop
    
    int n = 3; 

    for (int i = 0; i < n; ++i) { // rows
        
        for (int j = 0; j < n - i -1 ; ++j) { // j <n-i-1
            cout << "  ";
        }

        for (int k = 0; k < 2 * i + 1; ++k) {  // k < 2*i+1
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

//     * 
//   * * * 
// * * * * * 