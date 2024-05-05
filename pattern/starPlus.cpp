#include <iostream>
using namespace std;
int main() {
  // pattern printing
  // star plus
  // square format
  // (i == m || j == m) print *
  // m = (n/2)+1
  // n SHOULD b odd
  
  int n=5;
  int mid=(n/2)+1;
  
  for (int i =1 ;i<=n;i++){ // rows
      
      for (int j = 1;j<=n;j++){ // columns
            if (i==mid || j==mid) cout << "*"  << " ";
           else cout << " " << " " ; // "#"
      }
      cout << endl;
  }
}

//     *     
//     *     
// * * * * * 
//     *     
//     *     

// else cout << "#" << " " ;
// # # * # # 
// # # * # # 
// * * * * * 
// # # * # # 
// # # * # # 