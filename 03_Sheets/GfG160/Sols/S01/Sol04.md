# Solution: Rotate Array by d Elements (GFG 160 - D04)

### 🧠 Technique / Pattern:

- Reversal Algorithm

We rotate the array `d` steps to the left (counter-clockwise) using three reversals:

1. Reverse the first `d` elements.
2. Reverse the remaining `n - d` elements.
3. Reverse the entire array.

This achieves rotation in-place with no extra space.

### 🧪 Edge Cases

- `d = 0` or `d % n = 0` → array remains unchanged
- `d > n` → handled via modulo
- Works with negative numbers and duplicates

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        d %= arr.size();  // Normalize d
        reverse(arr.begin(), arr.begin() + d);       // Step 1
        reverse(arr.begin() + d, arr.end());         // Step 2
        reverse(arr.begin(), arr.end());             // Step 3
    }
};
```
