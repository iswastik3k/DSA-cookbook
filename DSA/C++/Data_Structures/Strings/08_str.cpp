// Given a string, Print the character occurring most number of times.

// Optimized method : Sort + Linear Search

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cout << "Enter the string : ";
    getline(cin, s);

    // Covert string in lower case.

    string s2;
    for (char c : s) {
        s2 += tolower(c);
    }

    sort(s2.begin(), s2.end());

    int c = 1, maxc = 1;
    char ch = s2[0];

    for (int i = 1; i < s2.length(); ++i) {
        if (s2[i] == ' ') {
            continue;
        }
        if (s2[i] == s2[i - 1]) {
            ++c;
            if (c > maxc) {
                maxc = c;
                ch = s2[i];
            }
        } 
        else {
            c = 1;
        }
    }
    cout << ch << endl;
}