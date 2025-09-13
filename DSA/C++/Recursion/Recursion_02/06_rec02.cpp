// Leetcode - 78 / Subsets

// Print all possible subsets of vector nums.

#include <iostream>
#include <vector>
using namespace std;

void sub(vector<int> nums, int idx, vector<int> temp, vector<vector<int>> &res) {

    // Base case
    if (idx == nums.size()) {

        // Push current subset in set of subsets(res).
        res.push_back(temp);
        return;
    }

    // Exclude idx element in temp.
    sub(nums, idx + 1, temp, res);

    // Include idx element in temp.
    temp.push_back(nums[idx]);
    sub(nums, idx + 1, temp, res);
}

int main() {

    int n;
    cout << "Enter size of vector nums : ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements of nums : ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<vector<int>> res;
    vector<int> temp;
    sub(nums, 0, temp, res);

    for (vector<int> vec : res) {
        for (int ele : vec) {
            cout << ele << " ";
        }
        cout << endl;
    }
}