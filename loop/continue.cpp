#include <iostream>
using namespace std;

int main() {
  // continue
  // tells loops to CONTINUE with condition check & skip below code.
  
  for (int i=0;i<=100;++i){
      if (i%2!=0) continue;
      cout << i << " ,";
  }
}