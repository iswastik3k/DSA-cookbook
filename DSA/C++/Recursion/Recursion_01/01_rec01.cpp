// Recursion 01 - First Handshake !

#include <iostream>
using namespace std;

void greet(int n) {

    // Base Case
    if (n == 0)
        return;

    // Recursive call
    greet(n - 1);

    // Work on way back (after base case had been hit).
    cout << "Hello, I'm recursion in action. \n";
}

int main() {

    greet(5);

    cout << "See above ? That was me, Recursion. Impressed ? ;)";
    cout << endl;

    return 0;
}