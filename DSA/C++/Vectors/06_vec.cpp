// Leetcode - 01 / Two Sum

// Find the doublet in the array whose sum is equal to the given value x.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    int n;
    cout << "Enter size of the vector : ";
    cin >> n;

    int val;
    cout << "Enter elements of vector : ";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        v.push_back(val);
    }

    int x;
    cout << "Enter target sun x : ";
    cin >> x;

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (v[i] + v[j] == x) {
                cout << i << ", " << j << endl;
            }
        }
    }
}