#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // Floyd's triangle
  // print a++
  
  int m=4;
  int a =1;
  for (int i =1 ;i<=m;i++){ // rows
      
      for (int j = 1;j<=i;j++){ // columns
     
          cout << a++ << " ";

      }
      
      cout <<endl;
  }
}

// 1 
// 2 3 
// 4 5 6
// 7 8 9 10 
// 11 12 13 14 15 