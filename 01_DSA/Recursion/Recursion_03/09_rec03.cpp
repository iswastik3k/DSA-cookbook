// Leetcode - 779 / K-th Symbol in Grammar (Method - II)

#include <iostream>
using namespace std;

int kthgrammar(int n, int k) {

    // Base case
    if (n == 1) {
        return 0;
    }

    if (k % 2 == 0) {
        return 1 ^ kthgrammar(n - 1, k / 2);
    } 
    else {
        return kthgrammar(n - 1, (k / 2) + 1);
    }
}

int main() {

    int n;
    cout << "Enter row number : ";
    cin >> n;

    int k;
    cout << "Enter kth index of row n : ";
    cin >> k;

    cout << kthgrammar(n, k) << endl;
}