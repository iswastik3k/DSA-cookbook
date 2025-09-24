# Solution: Transpose Matrix (Leetcode 867)

### 🧠 Algorithm Used: Matrix Transposition via Index Swapping

This problem uses a simple index swap to transpose a matrix:
- For a matrix of size `n × m`, the transposed matrix will be `m × n`.
- Swap `res[i][j] = matrix[j][i]` to flip rows and columns.

### 🧪 Edge Cases
- Empty matrix: return empty.
- Single row or column: still valid transpose.
- Square matrix: dimensions remain unchanged.

### 📈 Complexity
- Time: O(n × m)
- Space: O(n × m)

### 🧾 Code
```cpp
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();        // number of rows
        int m = matrix[0].size();     // number of columns

        // Initialize transposed matrix of size m x n
        vector<vector<int>> res(m, vector<int>(n));

        // Swap rows and columns
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                res[i][j] = matrix[j][i];
            }
        }

        return res;
    }
}
