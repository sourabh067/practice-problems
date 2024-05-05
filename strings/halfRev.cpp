#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;

int main() {
    // strings
    // half reverse
     string str = "string";
    int mid = str.length()/2;
    
    reverse(str.begin(),str.begin()+mid);
    
    cout << "half reversed :" << str ;
}