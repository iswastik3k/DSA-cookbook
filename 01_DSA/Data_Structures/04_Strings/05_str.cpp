// Input a string and return the number of times neighbouring characters are different from each other.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string s;
    cout << "Enter the string : ";
    getline(cin, s);

    int n = s.length();
    int c = 0;

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    if (n == 2 && s[0] != s[1]) {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 1; i < n - 1; ++i) {
        if ((s[i] != s[i - 1]) && s[i] != s[i + 1]) {
            ++c;
        }
    }

    if (s[0] != s[1]) {
        ++c;
    }
    if (s[n - 1] != s[n - 2]) {
        ++c;
    }

    cout << "Number of times : " << c << endl;
}