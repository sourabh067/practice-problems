#include <iostream>
#include <string> 
using namespace std;

int main() {
    // strings
    // null char '\0'
    
    string str = "string";

    // actual size/len = 7
    // but '\0' ignored so size/len = 6

    // "string" --> 's','t','r','i','n','g','\0'  (null char)
    // ASCII '\0' = 0
    //  '\0' marks the end of the string
    
    cout << '\0' << endl;  // prints nothing == null

    cout << "int('\0') :" << int('\0') << endl; // 0
    
    cout << "(char)0 :" << (char)0 << endl; // prints nothing == null
    
}