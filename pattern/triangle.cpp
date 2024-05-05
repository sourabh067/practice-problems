#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // triangle
  // star right angle triangle
  // * , numbers , ASCII
  
  int m=4;
  
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=i;j++){ // columns
     
          cout << j << " "; //  * --> j/i; ( for numbers )
      }
      
      cout <<endl;
  }
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4

// cout << 2*j-1;
// odd number triangle
// 1 
// 1 3 
// 1 3 5 
// 1 3 5 7 

// cout << j*2;
// even number triangle