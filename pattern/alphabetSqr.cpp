#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // alphabet square
  // char (j+64) 
  
  int m=4;
  
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=m;j++){ // columns
     
          cout << char(j+64) << " "; //  j/i
      }
      
      cout <<endl;
  }
}

// A B C D 
// A B C D 
// A B C D 
// A B C D 