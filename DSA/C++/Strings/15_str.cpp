// Leetcode - 205 / Isomorphic Strings

// Approach : Use 2 speacial array to map each character of 1 string to other.

//            Check isomorph property from perspective of both strings.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    cout << "Enter two strings:\n";
    vector<string> v(2);
    for (int i = 0; i < 2; ++i) {
        getline(cin, v[i]);
    }

    if (v[0].length() != v[1].length()) {
        cout << "Not Isomorphic\n";
        return 0;
    }

    vector<char> map1(256, '#'); // v[0] → v[1]
    vector<char> map2(256, '#'); // v[1] → v[0]

    bool flag = true;

    for (int i = 0; i < v[0].length(); ++i) {
        char c1 = v[0][i];
        char c2 = v[1][i];

        if (map1[c1] == '#' && map2[c2] == '#') {
            map1[c1] = c2;
            map2[c2] = c1;
        } 
        else {
            if (map1[c1] != c2 || map2[c2] != c1) {
                flag = false;
                break;
            }
        }
    }

    cout << (flag ? "Yes, strings are isomorphic\n" : "Not isomorphic\n");
}
