# Solution: Move All Zeros to End (GFG 160 - D02)

### 🧠 Technique / Pattern:

- Two-Pointer / Stable Swap

We shift all non-zero elements to the front while maintaining their relative order:

- Use a pointer `z` to track the next position for a non-zero.
- Swap each non-zero element with the `z`th index.
- Zeros naturally get pushed to the end.

### 🧪 Edge Cases

- All elements are zero → array remains unchanged
- No zeros → array remains unchanged
- Mixed zeros and positives → stable order preserved

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int z = 0;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i]) {
                swap(arr[i], arr[z]);
                ++z;
            }
        }
    }
};
```
