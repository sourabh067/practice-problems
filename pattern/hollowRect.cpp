#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // hollow rectangle
  // (i==1 ||j==1||i==m ||j==n) 
  // first row , first coloumn ; last row , last coloumn
  
  int m=4,n=7;
  
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=n;j++){ // columns
      
          if(i==1 ||j==1||i==m ||j==n) cout << "* " ; 
          else cout << "  " ;
      }
      
      cout <<endl;
  }
}

// 
// * * * * * * * 
// *           * 
// *           * 
// * * * * * * * 