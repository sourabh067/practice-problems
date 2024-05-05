#include <iostream>
using namespace std;

int main() {
  // print A to Z with their ASCII values
  // A = 65 ,Z = 90
  // Capital A to Z
  // type cast ASCII values
  
  for (int i=65;i<=90;i++){
      cout << "ASCII value :" << i <<"\n"; 
      cout << "Letter :" <<  char(i) <<"\n";
  }
}