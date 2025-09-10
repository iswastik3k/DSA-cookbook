// Reverse the vector without using any other vector.

// Approach : Two pointers

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    int n;
    cout << "Enter size of vector v : ";
    cin >> n;

    int val;
    cout << "Enter elements of vector v : ";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        v.push_back(val);
    }

    int s = 0, e = n - 1;

    // Create two pointers s and e.
    // Start s from 0th index and e from last index.
    // swap element at index s with element at index e.
    // ++s, --e.
    // Repeat till s<=e, i.e whole vector is covered.

    for (int s = 0, e = n - 1; s <= e; ++s, --e) {
        swap(v[s], v[e]);
    }

    cout << "Reverse of vector is : ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;
}