# Solution: Running Sum of 1D Array (Leetcode 1480)

### 🧠 Algorithm Used: Prefix Sum

This problem builds a running sum by updating each element with the sum of all previous elements:
- Start from index 1 and add the previous value to the current.
- In-place update avoids extra space.

### 🧪 Edge Cases
- Empty array: return empty.
- Single element: return as-is.
- Negative numbers: still valid prefix sum.

### 📈 Complexity
- Time: O(n)
- Space: O(1) (in-place)

### 🧾 Code
```cpp
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];  // add previous sum
        }
        return nums;
    }
};
