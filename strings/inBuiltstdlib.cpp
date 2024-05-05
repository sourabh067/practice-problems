#include <iostream>
#include <string> 
using namespace std;

int main() {
    // strings
    // in built std lib
    string str = "string";
    
    // length() & size()
    cout << "length :" << str.length() << endl;
    
    cout << "size :" << str.size() << endl;

    // append()
    str.append(" E"); // append string
    cout << "append :" << str << endl;

    string str2 = "nergy";
    str.append(str2); // append another string
    cout << "append :" << str << endl;

    // concatenation '+'
    // cout << "con" + "cat" << endl; // ERROR
    
    cout << "str+z :" <<str + "z" << endl;
    
    string str3 = " Type";
    cout <<"str + str3 :"<< str + str3 << endl;
    cout <<"str3 + str :"<< str3 + str << endl;
    cout <<"str3 + str3 :"<< str3 + str3 << endl;

    // type casting
    int i= 45;
    string x = to_string(i);
    cout << "ff" + x << endl;

    // stoi
    string num = "23478";
    int n = stoi(num);
    cout << "stoi :" << n ;
    cout << n+1 ;
}