# Solution: Second Largest (GFG 160 - D01)

### 🧠 Technique / Pattern:

- Max Tracking (Two-Pass)

We find the second largest element in the array:

- First pass: track the maximum element.
- Second pass: track the largest element that is **not equal** to the maximum.
- If no valid second largest exists, return `-1`.

### 🧪 Edge Cases

- All elements are equal → return -1
- Array of size 1 → return -1
- Negative values → handled correctly via `INT_MIN`

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int mx = INT_MIN, smx = INT_MIN;

        // Pass 1: Find maximum
        for (int i = 0; i < arr.size(); ++i) {
            mx = max(mx, arr[i]);
        }

        // Pass 2: Find second largest (≠ max)
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] > smx && arr[i] != mx) {
                smx = arr[i];
            }
        }

        return smx == INT_MIN ? -1 : smx;
    }
};
```
