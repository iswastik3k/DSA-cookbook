# Solution: Rotate Image (Leetcode 48)

### 🧠 Algorithm Used: Transpose + Reverse Rows (In-place Rotation)

This problem rotates a square matrix 90° clockwise using two steps:
1. **Transpose** the matrix: swap `matrix[i][j]` with `matrix[j][i]` for all `i < j`.
2. **Reverse each row** to complete the rotation.

This avoids extra space and achieves in-place transformation with O(n²) time.

### 🧪 Edge Cases
- 1×1 matrix: no change.
- Already rotated matrix: idempotent if applied four times.
- Non-square matrix: not applicable (problem guarantees square input).

### 📈 Complexity
- Time: O(n²)
- Space: O(1)

### 🧾 Code
```cpp
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // Step 1: Transpose the matrix (swap across diagonal)
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row to complete 90° clockwise rotation
        for (int i = 0; i < n; ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
