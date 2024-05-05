#include <iostream>
using namespace std;

int main() {
    // arrays
    // palindrome check
    // two pointer approach
    
    int arr[5] = {9, 8, 12, 8, 9};
    int i = 0;
    int j = 4;  // len-1
    
    bool isPalindrome = true;  // Assume array is palindrome initially
    
    while (i < j) {
        if (arr[i] != arr[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    
    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    
    return 0;
}