// Leetcode - 31 / Next Permutation

// Approach : Find pivot and apply operations accodingly.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &v, int piv) {

    // Check if number is already lexicographically largest

    if (piv == -1) {
        reverse(v.begin(), v.end());
        return;
    }

    // Find index of element just larger than piv element after pivot index

    // Remember : All elements after pivot index are sorted.

    int idx;
    for (int i = v.size() - 1; i >= piv; --i) {
        if (v[i] > v[piv]) {
            idx = i;
            break;
        }
    }

    // Swap pivot index element with it's just larger element.

    swap(v[piv], v[idx]);

    // Sort the array after pivot index.

    sort(v.begin() + piv + 1, v.end());

    return;
}

int main() {

    int n;
    cout << "Enter number of digits (size of vector) : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter the digits (elemenets) : ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Finding Pivot index

    int piv = -1;

    for (int i = n - 2; i >= 0; --i) {
        if (v[i] < v[i + 1]) {
            piv = i;
            break;
        }
    }

    cout << 5;

    nextPermutation(v, piv);

    cout << "Next permutation of your number is : ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;
}