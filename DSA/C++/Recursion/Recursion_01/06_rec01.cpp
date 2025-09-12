// Calculate pow(a,b) using recursion.

// Optimized method : x^n = x^(n/2) * x^(n/2)  -> for even n

//                    x^n = x^(n/2) * x^(n/2) * x  -> for odd n

#include <iostream>
using namespace std;

int pow(int a, int b) {

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

    int ans = pow(a, b / 2);

    return ((b % 2 == 0) ? ans * ans : ans * ans * a);
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