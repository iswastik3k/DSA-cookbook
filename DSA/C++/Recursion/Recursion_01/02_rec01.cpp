// Factorial using Recursion.

#include <iostream>
using namespace std;

int fact(int n) {

    // Base case
    if (n <= 0) {
        return 1;
    }
    // Recursive call
    return n * fact(n - 1);
}

int main() {

    int n;
    cout << " Enter the number : ";
    cin >> n;

    cout << "Fcatorial of " << n << " is : " << fact(n) << endl;
}