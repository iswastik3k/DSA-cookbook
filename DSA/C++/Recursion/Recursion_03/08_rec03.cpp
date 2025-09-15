// Leetcode - 779 / K-th Symbol in Grammar

// Approach : Observe when bits are flipping and when are not.

//            Then backtrack to your n=1, i.e 0. and count number of flips.

//            If total flips are even, then output is same as first bit (0) otherwise output is 1.

#include <iostream>
using namespace std;

void kthgrammar(int n, int k, int &flips) {

    // Base case
    if (n == 1) {
        return;
    }

    if (k % 2 == 0) {
        flips++;
        kthgrammar(n - 1, k / 2, flips);
    } 
    else {
        kthgrammar(n - 1, (k / 2) + 1, flips);
    }
}

int main() {

    int n;
    cout << "Enter row number : ";
    cin >> n;

    int k;
    cout << "Enter kth index of row n : ";
    cin >> k;

    int flips = 0;
    kthgrammar(n, k, flips);

    cout << ((flips % 2 == 0) ? 0 : 1)<<endl;
}