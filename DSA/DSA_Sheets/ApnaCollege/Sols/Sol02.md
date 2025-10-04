# Solution: Find Missing and Repeated Number in Grid (Leetcode 2965)

### 🧠 Algorithm Used: Frequency Count via Index Mapping

We’re given a 2D grid of size `n × n` containing numbers from `1` to `n²`, with one number missing and one repeated:

- Flatten the grid by counting occurrences using a 1D frequency array.
- Traverse the frequency array:
  - If count is `0`, that number is missing.
  - If count is `2`, that number is repeated.

### 🧪 Edge Cases

- Grid of size 1 → no missing/repeated possible.
- Repeated number at edge (first or last cell).
- Missing number is `1` or `n²`.

### 📈 Complexity

- Time: O(n²)
- Space: O(n²)

### 🧾 Code

```cpp
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();                        // Grid is n x n
        vector<int> res(2);                         // res[0] = repeated, res[1] = missing
        vector<int> ele(n * n, 0);                  // Frequency array for 1 to n²

        // Count occurrences of each number
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                ++ele[grid[i][j] - 1];              // Map value to index
            }
        }

        // Identify missing and repeated
        for (int i = 0; i < n * n; ++i) {
            if (ele[i] == 0) {
                res[1] = i + 1;                     // Missing number
            }
            if (ele[i] == 2) {
                res[0] = i + 1;                     // Repeated number
            }
        }

        return res;
    }
};
```
