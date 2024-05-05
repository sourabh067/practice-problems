#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // rectangle pattern
  // m x n  "*"
  
  int m=3,n=4;
  
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=n;j++){ // columns
      
          cout << "* " ; //  * --> j/i; ( for numbers )
      }
      
      cout <<endl;
  }
}

// * * * * 
// * * * * 
// * * * * 