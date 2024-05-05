 #include <iostream>
#include <string> // to use string associated methods
using namespace std;

int main() {
    // strings
    // array of chars
    
    string str = "strings";  // dec & init
    cout <<"str :"<<str <<endl ;
    
    // from user
    string s;
    cout << "enter s :";
    //  cin >> s;   // blah blah
    cout << "s :" << s << endl; // blah
    
    // cin ignores spaces 
    // so we use getline(cin,str_name)
    string str1;
    cout << "enter str1 :";
    getline(cin,str1);
    cout << "getline :" << str1 << endl; // spaces are read
}