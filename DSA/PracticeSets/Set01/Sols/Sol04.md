# Solution: Trapping Rain Water (Leetcode 42)

### 🧠 Algorithm Used: Prefix Max Arrays (Two-Pass Preprocessing)

This approach precomputes the maximum height to the left and right of each bar:

1. Build a prefix array `pfx[i]` that stores the minimum of left and right max heights.
2. Traverse the array to calculate trapped water at each index using `pfx[i] - height[i]`.

This avoids stack or two-pointer tricks and gives a clean O(n) solution.

### 🧪 Edge Cases

- Empty array or size < 3: No trapping possible.
- Flat terrain: All heights equal → zero water.
- Peaks at edges: Water trapped only between valleys.

### 🧾 Code

```cpp
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        // pfx[i] will store the min of left and right max heights at index i
        vector<int> pfx(n, -1);

        // First pass: compute max height to the left of each index
        int maxx = 0;
        for (int i = 1; i < n; ++i) {
            maxx = max(height[i - 1], maxx);
            pfx[i] = maxx;
        }

        // Second pass: compute max height to the right and update pfx[i] with min(left, right)
        maxx = 0;
        for (int i = n - 2; i >= 0; --i) {
            maxx = max(height[i + 1], maxx);
            pfx[i] = min(pfx[i], maxx);
        }

        int water = 0;
        // Final pass: calculate trapped water at each index
        for (int i = 1; i < n - 1; ++i) {
            if (pfx[i] > height[i]) {
                water += pfx[i] - height[i]; // water trapped = min(left, right) - current height
            }
        }

        return water;
    }
};
```
