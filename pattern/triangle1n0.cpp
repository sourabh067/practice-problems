#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // 1 & 0 triangle
  // (i+j) %2==0
  // when ever i+j is even print 1 else 0
  
  int m=5;
  int a =1;
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=i;j++){ // columns
     
          if ((i+j)%2==0) cout << 1  << " ";
          
          else cout << 0 << " ";
      }
      cout <<endl;
  }
}

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 