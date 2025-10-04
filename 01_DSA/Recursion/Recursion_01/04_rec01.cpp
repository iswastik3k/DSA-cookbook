// Print sum from 1 to N using recursion.

#include <iostream>
using namespace std;

int sum(int n) {

    // Base case
    if (n <= 0) {
        return 0;
    }

    return n + sum(n - 1);
}

int main() {

    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Sum from 1 to " << n << " is : " << sum(n) << endl;
}