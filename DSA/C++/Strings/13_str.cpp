// Leetcode - 14 / Longest Common Prefix

// Method 01 - Bruteforce

// Write a function to print the longest common prefix string amongst array of strings.

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

    string res;
    bool flag = true;

    for (int j = 0; j < v[0].length(); ++j) {
        for (int i = 1; i < n; ++i) {
            if (v[0][j] != v[i][j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            res += v[0][j];
        } 
        else {
            break;
        }
    }
    cout << "Longest common prefix string is : " << res << endl;
}