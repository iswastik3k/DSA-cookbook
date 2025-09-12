// .substr() function.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cout << "Enter a string : ";

    getline(cin, s);

    int len = s.length();

    // Printing second half of string.

    cout << s.substr(len / 2) << endl;
}