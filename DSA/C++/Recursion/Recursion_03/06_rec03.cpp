// Leetcode - 39 / Combination Sum - I

#include <iostream>
#include <vector>
using namespace std;

void combination(vector<int> nums, int key, vector<int> res, int idx) {

    // Base case
    if (key < 0) {
        return;
    }

    // Problem case
    if (key == 0) {
        for (int ele : res) {
            cout << ele << " ";
        }
        cout << endl;
        return;
    }

    for (int i = idx; i < nums.size(); ++i) {
        res.push_back(nums[i]);
        combination(nums, key - nums[i], res, i);
        res.pop_back();
    }
}

int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements of nums : ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int key;
    cout << "Enter target sum : ";
    cin >> key;
    vector<int> res;

    combination(nums, key, res, 0);
}