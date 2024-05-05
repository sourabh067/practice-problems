#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // star X
  // square format
  // (i==j || i+j==n+1)
  
  int n=7;
  
  for (int i =1 ;i<=n;i++){ // rows
      
      for (int j = 1;j<=n;j++){ // columns
       if (i==j || i+j==n+1) cout << "* ";
       else cout << "  ";
      }
      
      cout <<endl;
  }
}

// *           * 
//   *       *   
//     *   *     
//       *       
//     *   *     
//   *       *   
// *           * 