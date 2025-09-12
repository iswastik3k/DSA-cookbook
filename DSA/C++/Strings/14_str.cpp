// Leetcode - 14 / Longest Common Prefix

// Optimized method - Use Sorting and check only first and last elements of string array.

// WAP to print the longest common prefix string amongst array of strings.

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter number of words : ";
    cin >> n;

    vector<string> v(n);

    cout << "Enter the words : ";

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    if (n == 1) {
        cout << "Longest common prefix string is : " << v[0] << endl;
        return 0;
    }

    sort(v.begin(), v.end());

    string res = "";
    int i = 0;
    while (i < v[0].length() && i < v[n - 1].length()) {
        if (v[0][i] == v[n - 1][i]) {
            res += v[0][i];
        } 
        else {
            break;
        }
        ++i;
    }
    cout << "Longest common prefix string is : " << res << endl;
}