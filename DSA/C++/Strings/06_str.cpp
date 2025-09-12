// Sorting a string.

// sort() function arrange the string based on ASCII values of characters.

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cout << "Enter a string : ";
    getline(cin, s);

    sort(s.begin(), s.end());
    cout << s << endl;
}