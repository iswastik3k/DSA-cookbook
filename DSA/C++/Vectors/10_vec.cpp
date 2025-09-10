// Leetcode - x / Rotate a vector by k elements.

// Rotation by "k" steps -> Put "k" elements from end at start.

// Example : v = {1, 2, 3, 4, 5}
// k = 2
// Rotated vector v by "k" = {4, 5, 1, 2, 3} 

// Rotate by "n" steps = Same as orignal vector.
// That's why use "k = k % n" for k > n.

// Approach : Reverse "k" elements from last.
//            Reverse "n-k" elements from start.
//            Reverse entire vector.

#include <algorithm>
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

    int k;
    cout << "Enter index till you want to rotate vector : ";
    cin >> k;

    k = k % n;

    reverse(v.begin() + n - k, v.end());    // Reverse k elements from end.
    reverse(v.begin(), v.begin() + n - k);  // Reverse n-k elements from start.
    reverse(v.begin(), v.end());            // Reverse entire vector.

    cout << "Vector roateted by k steps is : ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;
}