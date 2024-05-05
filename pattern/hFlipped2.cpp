#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // reverse right angle triangle
  // * , numbers , ASCII
  
  int m=4;
  
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=i;j++){ // columns
     
         cout << m-j+1<< " "; 
      }
     
      cout <<endl;
  }
}

// 4 
// 4 3 
// 4 3 2 
// 4 3 2 1

// cout << m+j-i<< " ";
// 4 
// 3 4 
// 2 3 4 
// 1 2 3 4 