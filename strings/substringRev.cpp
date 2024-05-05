#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;

int main() {
    // strings
    // substring reverse
     string str = "string";
    int mid = str.length()/2;
    
    reverse(str.begin()+1,str.begin()+4);
    
    cout << "substring reversed :" << str ;
}