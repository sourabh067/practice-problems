#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // right angle triangle
  // horizontal flipped
  // * , numbers , ASCII
  
  int m=4;
  
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<= (m-i+1);j++){ // columns
     
          cout << "*" << " "; //  * --> j/i; ( for numbers )
      }
      
      cout <<endl;
  }
}

// for (int j = m;j>=i;j--) // alternative

// * * * * 
// * * * 
// * * 
// * 