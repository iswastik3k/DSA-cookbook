// Calculate pow(a,b) using recursion.

#include <iostream>
using namespace std;

float pow(int a, int b) {

    // Base cases
    if (a == 1 || a == 0) {
        return a;
    }
    if (b == 0) {
        return 1;
    }
    if (b == 1) {
        return a;
    }

    return a * pow(a, b - 1);
}

int main() {

    int a, b;
    cout << "Enter base : ";
    cin >> a;
    cout << "Enter power raised to base : ";
    cin >> b;

    bool flag = false; // positive
    if (b < 0) {
        b = -b;
        flag = true;
    }

    cout << "a^b is : " << ((flag) ? 1.0 / pow(a, b) : pow(a, b)) << endl;
}