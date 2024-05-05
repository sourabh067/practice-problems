#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // vertical flip triangle
  // 2 separate loops in main (row) loop
  
  int n=4;
  
  for (int i =1 ;i<=n;i++){ // rows
      
      for (int j = 1;j<=n-i;j++){ // n-i
        cout << "  "; // print spaces
      }
      
      for (int j = 1;j<=i;j++){ // n-i+1
        cout << " *"; // print stars
      }
      cout <<endl;
  }
}

//        *
//      * *
//    * * *
//  * * * *