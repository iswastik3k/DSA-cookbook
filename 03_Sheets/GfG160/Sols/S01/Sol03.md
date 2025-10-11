# Solution: Reverse an Array (GFG 160 - D03)

### 🧠 Technique / Pattern:

- Two-Pointer

We reverse the array in-place using two pointers:

- One pointer starts at the beginning (`s`)
- One pointer starts at the end (`e`)
- Swap elements at `s` and `e`, then move inward until they meet

### 🧪 Edge Cases

- Array of size 0 or 1 → no change
- Already reversed → remains valid
- Works with negative numbers and duplicates

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    void reverseArray(vector<int> &arr) {
        int s = 0, e = arr.size() - 1;
        while (s < e) {
            swap(arr[s], arr[e]);
            ++s;
            --e;
        }
    }
};
```
