// to_string Function.

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    string num = to_string(n);

    reverse(num.begin(), num.end());

    cout << num << endl;
}