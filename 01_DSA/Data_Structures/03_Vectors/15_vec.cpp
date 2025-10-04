// Leetcode - 42 / Trapping Rain Water

// Use next greatest element array and previous greatest element array concept.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of bars (vector size) : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter hight of bars (non negative elements) : ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Prev greatest element array

    vector<int> v2(n);

    int mx = -1;
    for (int i = 0; i < v.size(); ++i) {
        v2[i] = mx;
        mx = max(mx, v[i]);
    }

    // Next greatest element array and minimum of both.

    mx = -1;
    for (int i = n - 1; i >= 0; --i) {
        v2[i] = min(mx, v2[i]);
        mx = max(mx, v[i]);
    }

    // Water trapped = height - (min (prevmax, nextmax))

    int trap = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (v[i] < v2[i]) {
            trap += v2[i] - v[i];
        }
    }
    cout << "Amount of water trapped is : " << trap << endl;
}