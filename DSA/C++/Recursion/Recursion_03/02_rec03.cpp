// Palindrome - II

// Optimized method : Recursion + Two Pointers

#include <iostream>
#include <string>
using namespace std;

bool ispalindrome(string str, int s, int e) {

    // Base case
    if (s > e) {
        return true;
    }

    if (str[s] != str[e]) {
        return false;
    }
    return ispalindrome(str, ++s, --e);
}

int main() {

    string str;
    cout << "Enter the string : ";
    cin >> str;

    cout << ((ispalindrome(str, 0, str.length() - 1)) ? "Palindrome \n": "Not Palindrome \n");
}