
#include <iostream>
#include <string> 
using namespace std;

int main() {
    // strings
    // STL : std template lib
    // inBuilt fn >> STL
    
    string str = "string";

    // push_back() 
    str.push_back('z'); // append one char
    cout << "push_back() :" << str << endl;

    // pop_back()
    str.pop_back(); // remove last elm
    cout << "pop_back() :" << str << endl;

    string str2 = "nergy";

    // clear()
    cout << "str2 :" << str2 <<endl;
    str2.clear();
    cout << "clear :" <<str2 << " " << str2.length() << endl;

    // reverse()
    cout << "begin() ptr :" << *str.begin() << endl ;
    cout << "end() ptr :" << *str.end() << endl ; // \0 NULL
    
    // reverse()
    reverse(str.begin(),str.end()) ;
    cout << "reversed :" << str ;
    
    
}