// Stringstream class

// Stringstream is used to filter words from spaces.

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

    string str;
    cout << "Enter a sentence : ";
    getline(cin, str);

    stringstream ss(str);
    string temp;

    while (ss >> temp) {
        cout << temp << endl;
    }
}