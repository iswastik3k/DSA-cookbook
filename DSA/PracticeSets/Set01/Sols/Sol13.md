# Solution: Single Number (Leetcode 136)

### 🧠 Algorithm Used: Bitwise XOR

This problem finds the unique element in an array where every other element appears twice:

- XOR of a number with itself is 0.
- XOR of a number with 0 is the number itself.
- XOR is both associative and commutative, so all duplicates cancel out.

### 🧪 Edge Cases

- Only one element: return that element.
- All elements are duplicates except one: XOR handles it naturally.
- Negative numbers: XOR works regardless of sign.

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];                // initialize with first element

        for (int i = 1; i < nums.size(); ++i) {
            ans ^= nums[i];              // XOR cancels out duplicates
        }

        return ans;                       // remaining value is the unique one
    }
};
```
