#include <iostream>
using namespace std;

int main() {
  // while loop
  // increment/decrement has to be done for every loop.
  
  int i = 0;
  while(i<=10){
      if (i%2!=0) {
          i++;
          continue;
      }
      cout << i << " ,";
      ++i;
  }
}