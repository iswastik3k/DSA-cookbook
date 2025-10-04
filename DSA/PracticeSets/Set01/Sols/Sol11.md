# Solution: Search a 2D Matrix II (Leetcode 240)

### 🧠 Algorithm Used: Staircase Search (Top-Right Traversal)

This problem leverages the sorted nature of the matrix:

- Each row is sorted left to right.
- Each column is sorted top to bottom.

Start from the top-right corner: (You can also start from bottom left and update traversal conditions)

- If current element > target → move left.
- If current element < target → move down.
- If equal → return true.

This greedy traversal avoids scanning the entire matrix.

### 🧪 Edge Cases

- Empty matrix: return false.
- Target smaller than all elements: return false.
- Target larger than all elements: return false.

### 📈 Complexity

- Time: O(m + n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();           // number of rows
        int n = matrix[0].size();        // number of columns

        int r = 0, c = n - 1;            // start from top-right corner

        while (r < m && c >= 0) {
            if (matrix[r][c] == target) {
                return true;
            } else if (matrix[r][c] > target) {
                --c;                     // move left
            } else {
                ++r;                     // move down
            }
        }

        return false;
    }
};
```
