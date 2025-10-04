// Palindrome - I

#include <iostream>
#include <string>
using namespace std;

string rev(string s, int idx) {

    // Base case
    if (idx == s.length()) {
        return "";
    }

    return rev(s, idx + 1) + s[idx];
}

int main() {

    string str;
    cout << "Enter the string : ";
    cin >> str;

    string reverse = rev(str, 0);

    cout << ((str == reverse) ? "Palindrome string \n" : "Not Plaindrome \n");
}