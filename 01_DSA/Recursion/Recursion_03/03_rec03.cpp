// GCD

// Algorithm used : Euclid's Algorithm for GCD

#include <iostream>
using namespace std;

int gcd(int a, int b) {

    // Base case
    if (a == 0) {
        return b;
    }

    return gcd(b % a, a);
}

int main() {

    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    cout << "GCD of a and b is : " << gcd(a, b) << endl;
}