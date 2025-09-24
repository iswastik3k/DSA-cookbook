# Solution: Next Permutation (Leetcode 31)

### 🧠 Algorithm Used: Lexicographic Permutation via Pivot + Swap + Sort

This algorithm finds the next lexicographically greater permutation by:
1. Scanning from the end to find the first decreasing element (`pivot`).
2. Swapping it with the smallest element greater than it on the right.
3. Sorting (or reversing) the suffix to get the minimal next configuration.

### 🧪 Edge Cases
- Already highest permutation: reverse entire array.
- Single element: no change.
- Strictly decreasing array: reverse to lowest permutation.

### 🧾 Code
```cpp
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pividx = -1;
        int n = nums.size();

        // Step 1: Find the pivot — first index from the end where nums[i] < nums[i+1]
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] < nums[i + 1]) {
                pividx = i;
                break;
            }
        }

        // If no pivot found, array is in descending order — reverse to lowest permutation
        if (pividx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the smallest element greater than pivot to the right
        for (int i = n - 1; i > pividx; --i) {
            if (nums[i] > nums[pividx]) {
                swap(nums[i], nums[pividx]);
                break;
            }
        }

        // Step 3: Sort the suffix to get the next permutation
        sort(nums.begin() + pividx + 1, nums.end());
    }
};
