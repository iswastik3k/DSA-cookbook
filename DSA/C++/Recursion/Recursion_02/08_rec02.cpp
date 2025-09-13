// Subsequences

// Take a vector nums from user, and an integer "k" and print all thensubsequences of nums of k length.

#include <iostream>
#include <vector>
using namespace std;

void subseq(vector<int> &nums, int k, vector<vector<int>> &res, vector<int> temp, int idx) {

    // Desired case
    if (temp.size() == k) {
        res.push_back(temp);
        return;
    }

    // Base case
    if (idx == nums.size()) {
        return;
    }

    // Exclude idx element.
    subseq(nums, k, res, temp, idx + 1);

    // Include idx element.
    temp.push_back(nums[idx]);
    subseq(nums, k, res, temp, idx + 1);
}

int main() {

    int n;
    cout << "Enter size of nums vector : ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements of nums : ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int k;
    cout << "Enter length of susequences to print : ";
    cin >> k;

    if (k > n) {
        cout << "No such subsequence. \n";
        return 0;
    }

    vector<vector<int>> res;
    vector<int> temp;
    subseq(nums, k, res, temp, 0);

    for (vector<int> seq : res) {
        for (int ele : seq) {
            cout << ele << " ";
        }
        cout << endl;
    }
}