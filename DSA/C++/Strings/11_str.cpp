// stoi() and stoll() Functions

#include <iostream>
#include <string>
using namespace std;

int main() {

    string num;
    cout << "Enter the number  : ";
    getline(cin, num);

    int n = stoi(num);
    cout << "Number / 2 is : " << (n / 2) << endl;

    string numlong;
    cout << "Enter a biggg number (+ve) : ";
    getline(cin, numlong);

    long long unsigned n2 = stoull(numlong);
    cout << "Number / 10 is : " << (n2 / 10) << endl;
}