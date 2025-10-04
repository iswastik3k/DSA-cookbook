// Take a sentence from user, and print the most occuring word.

// Assumption : No two words occurs same number of times.

#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {

    string str;
    cout << "Enter the sentence : ";
    getline(cin, str);

    stringstream ss(str);

    string temp;
    vector<string> v;

    while (ss >> temp) {
        v.push_back(temp);
    }

    if (v.size() == 0) {
        cout << "No words \n";
        return 0;
    }

    sort(v.begin(), v.end());

    int c = 1, maxc = 1;
    string s = v[0];

    for (int i = 1; i < v.size(); ++i) {
        if (v[i] == v[i - 1]) {
            ++c;
            if (c > maxc) {
                maxc = c;
                s = v[i];
            } 
            else {
                c = 1;
            }
        }
    }
    cout << "Most occurring word is : " << s << endl;
}