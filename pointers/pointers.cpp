#include <iostream>
using namespace std;

int main(){
    // pointers
    // pointers store address of variables
    // we can use pointers to access and manipulate variabels value by using deref.
    // pointers have their own addresses.
    // * --> dereference operator
    
    int x =3;
    cout << &x ; // different everytime we run program
    
    // dec & init ponters
    int* ptr;  
    ptr = &x;
    cout << ptr ; // same as &x

    // int* p == int *p;

    // access 
    cout << *ptr << endl; // deref ptr to access var

    // manipulate
    *ptr = 13;
    cout << x  << endl; // x changed to 13

    // address of ptr
    cout << &ptr  << endl; // ptr address
}