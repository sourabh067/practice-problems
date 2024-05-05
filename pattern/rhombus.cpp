#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // vertical flip triangle
  // 2 separate loops in main (row) loop
  // space triangle + square
  
  int n=4;
  
  for (int i =1 ;i<=n;i++){ // rows
      
      for (int j = 1;j<=n-i;j++){ // j<=n-i
        cout << "  "; // print spaces
      }
      
      for (int j = 1;j<=n;j++){ // j<=n
        cout << " *"; // print stars
      }
      cout <<endl;
  }
}

//        * * * *
//      * * * *
//    * * * *
//  * * * *