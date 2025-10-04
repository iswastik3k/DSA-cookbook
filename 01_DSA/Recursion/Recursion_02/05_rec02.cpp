// String Subsets - I
 
// Take string (with unique characters) input and print it's subsets.

#include <iostream>
#include <string>
using namespace std;

void sub(string s, string res, int idx) {

    // Base case
    if (idx == s.length()) {
        cout << "{" << res << "} \n";
        return;
    }

    // Call 1 : Include current character.

    // Call 2 : Exclude current character.

    sub(s, res + s[idx], idx + 1);
    sub(s, res, idx + 1);
}

int main() {

    string s;
    cout << "Enter an string : ";
    cin >> s;

    sub(s, "", 0);
}