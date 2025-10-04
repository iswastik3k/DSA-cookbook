# Solution: Score After Flipping Matrix (Leetcode 861)

### 🧠 Algorithm Used: Greedy Bit Maximization via Row + Column Flips

This problem maximizes the binary row scores by:

1. Flipping rows to ensure the first column is all 1s (most significant bit).
2. Flipping columns where 0s outnumber 1s to maximize total contribution.
3. Calculating the final score by interpreting each row as a binary number.

### 🧪 Edge Cases

- All 1s: no flips needed.
- All 0s: full row and column flips.
- Mixed bits: greedy strategy ensures optimal score.

### 📈 Complexity

- Time: O(n × m)
- Space: O(1) (in-place flips)

### 🧾 Code

```cpp
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {

        int n = grid.size();           // number of rows
        int m = grid[0].size();        // number of columns

        // Step 1: Flip rows to make first column all 1s
        for (int i = 0; i < n; ++i) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < m; ++j) {
                    grid[i][j] ^= 1;   // flip entire row
                }
            }
        }

        // Step 2: Flip columns where 0s outnumber 1s
        for (int j = 0; j < m; ++j) {
            int n0 = 0, n1 = 0;
            for (int i = 0; i < n; ++i) {
                if (grid[i][j] == 0) ++n0;
                else ++n1;
            }
            if (n0 > n1) {
                for (int i = 0; i < n; ++i) {
                    grid[i][j] ^= 1;   // flip column
                }
            }
        }

        // Step 3: Calculate final score by interpreting each row as binary
        int res = 0;
        for (int i = 0; i < n; ++i) {
            int val = 0, pow = 1;
            for (int j = m - 1; j >= 0; --j) {
                val += grid[i][j] * pow;
                pow *= 2;
            }
            res += val;
        }

        return res;
    }
};
```
