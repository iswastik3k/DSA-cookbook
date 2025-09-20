# Solution: Rotate Array (Leetcode 189)

### 🧠 Algorithm Used: Array Reversal Technique

Rotate array in-place by reversing sections:
1. Reverse the entire array.
2. Reverse the first `k` elements.
3. Reverse the remaining `n - k` elements.

Achieves O(n) time and O(1) space complexity.

### 🧪 Edge Cases
- Empty array: No operation.
- `k = 0`: No rotation.
- `k > n`: Normalize with `k % n`.

### 🧾 Code
```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
