// Permutation - I

// Print all the permutations of a given string.

#include <iostream>
#include <string>
#include <chrono>
using namespace std;

void permutation(string org, string res) {

    // Base case
    if (org.length() == 0) {
        cout << res << endl;
    }

    for (int i = 0; i < org.length(); ++i) {
        string temp = org.substr(0, i) + org.substr(i + 1);
        permutation(temp, res + org[i]);
    }
}

int main() {

    string s;
    cout << "Enter the string : ";
    cin >> s;
    auto start = chrono::high_resolution_clock::now();
    permutation(s, "");
    auto end = chrono::high_resolution_clock::now();

    cout << "Time: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms\n";
}