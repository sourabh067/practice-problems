#include <iostream>
using namespace std;
int main() {
  // pattern printing
  
  int m=4;
  
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=i;j++){ // columns
     
          if (i%2==0) cout << char(j+64) << " ";
          else cout << j << " ";
      }
      
      cout <<endl;
  }
}

  // 1 
  // A B 
  // 1 2 3 
  // A B C D 

