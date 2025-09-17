// Leetcode - 1480 / Running sum of 1-D array.

// Approach : Prefix Sum array.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter elements : ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> pfxsum(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        pfxsum[i] = sum;
    }

    cout << "Prefix sum array of nums is : ";
    for (int i = 0; i < n; ++i) {
        cout << pfxsum[i] << " ";
    }
    cout << endl;
}