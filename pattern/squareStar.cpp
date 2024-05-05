#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // square pattern
  // m x m *
  
  int m=3;
  
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=m;j++){ // columns
      
          cout << "* " ; //  * --> j/i; ( for numbers )
      }
      
      cout <<endl;
  }
}

// * * * 
// * * * 
// * * * 