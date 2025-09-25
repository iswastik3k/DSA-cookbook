# Solution: Product of Array Except Self (Leetcode 238)

### 🧠 Algorithm Used: Prefix & Suffix Product Arrays

This problem computes the product of all elements except the current one without using division:
1. First pass: build prefix product from left to right.
2. Second pass: multiply with suffix product from right to left.
3. Result is built in-place using two accumulators.

### 🧪 Edge Cases
- Contains zero(s): handled naturally by prefix/suffix logic.
- All ones: output remains all ones.
- Negative numbers: valid, sign handled via multiplication.

### 📈 Complexity
- Time: O(n)
- Space: O(1) (excluding output array)

### 🧾 Code
```cpp
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        int prod = 1;
        // Prefix pass
        for (int i = 0; i < n; ++i) {
            res[i] = prod;
            prod *= nums[i];
        }

        prod = 1;
        // Suffix pass
        for (int i = n - 1; i >= 0; --i) {
            res[i] *= prod;
            prod *= nums[i];
        }

        return res;
    }
};
