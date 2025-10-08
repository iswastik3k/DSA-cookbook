# Solution: Unique Paths (Leetcode 62)

### 🧠 Techniques Used:

- M01: Recursion + Memoization
- M02: Tabulation (Bottom-Up DP)

We compute the number of unique paths from the top-left to bottom-right of an `m x n` grid:

- You can only move **right** or **down**.
- We either recursively count paths with memoization, or iteratively build the grid using tabulation.

### 🧪 Edge Cases

- Grid of size `1 x n` or `m x 1` → only one path
- Very large grid → memoization avoids recomputation
- Handles both square and rectangular grids

### 📈 Complexity

- M01 Time: O(m × n), Space: O(m × n) (due to recursion stack + memo table)
- M02 Time: O(m × n), Space: O(m × n)

### 🧾 Code

```cpp
class Solution {
public:

    // M01 - Recursion + Memoization
    vector<vector<int>> dp;

    int countpaths(int m, int n) {
        if (m == 0 && n == 0)
            return 1;
        if (m < 0 || n < 0)
            return 0;
        if (dp[m][n] != -1)
            return dp[m][n];

        return dp[m][n] = countpaths(m - 1, n) + countpaths(m, n - 1);
    }

    int uniquePaths(int m, int n) {
        dp.clear();
        dp.resize(m, vector<int>(n, -1));
        return countpaths(m - 1, n - 1);
    }
};
```

```cpp
class Solution {
public:

    // M02 - Tabulation
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m, vector<int>(n, -1));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 || j == 0)
                    grid[i][j] = 1;
                else
                    grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
            }
        }
        return grid[m - 1][n - 1];
    }
};

```
