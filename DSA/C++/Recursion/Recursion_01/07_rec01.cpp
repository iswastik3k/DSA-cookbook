// Calculate nth fibonacci term using recursion.

// We're considering : 0th term -> 1 and 1st term -> 1

#include <iostream>
using namespace std;

int fibo(int n) {

    // Base case
    if (n <= 1) {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main() {

    int n;
    cout << "Enter the term : ";
    cin >> n;

    cout << n << "th fibonacci term is : " << fibo(n) << endl;
}