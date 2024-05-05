#include <iostream>
using namespace std;

int main() {
    // pattern priting
    // diamond 
    // upper and lower part loops
    // lower part reverse loop
    // again 2 sep loop in them
    
    int n = 3;

    // Upper part
    for (int i = 1; i <= n; ++i) {
        
        for (int j = 1; j <= n - i; ++j) { // j <= n-i
            cout << "  ";
        }
        
        for (int k = 1; k <= 2 * i - 1; ++k) { // k <= 2*i-1
            cout << "* ";
        }
        cout << endl;
    }

    // Lower part
    for (int i = n - 1; i >= 1; --i) {   // reverse loop
    
        for (int j = 1; j <= n - i; ++j) {  // j<= n-i
            cout << "  ";
        }
       
        for (int k = 1; k <= 2 * i - 1; ++k) { // k <= 2*i-1
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

//     * 
//   * * * 
// * * * * * 
//   * * * 
//     * 