// Stair Path

// Find the number of unique ways to climb n stairs taking 1 or 2 steps.

#include <iostream>
using namespace std;

int ways(int n) {

    // Base case
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 0;
    }

    // return (ways if i take 1 step) + (ways if i take 2 steps)
    
    return ways(n - 1) + ways(n - 2);
}

int main() {

    int n;

    cout << "Enter total number of steps : ";
    cin >> n;

    cout << "No. of unique ways to go to top taking 1 or 2 steps is : " << ways(n) << endl;
}