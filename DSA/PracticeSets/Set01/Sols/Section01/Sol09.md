# Solution: Pascal's Triangle (Leetcode 118)

### 🧠 Algorithm Used: Iterative Construction via Binomial Identity

This problem builds Pascal’s Triangle row by row using the identity:
- Each element is the sum of the two directly above it:  
  `row[j] = prev_row[j - 1] + prev_row[j]`

The first and last elements of each row are always `1`.

### 🧪 Edge Cases
- `numRows = 0`: return empty triangle.
- `numRows = 1`: single row with one element.
- Large `numRows`: memory grows quadratically.

### 📈 Complexity
- Time: O(numRows²)
- Space: O(numRows²)

### 🧾 Code
```cpp
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> pscl;

        for (int i = 0; i < numRows; ++i) {
            vector<int> row(i + 1);         // initialize row of size i+1
            pscl.push_back(row);            // add row to triangle

            for (int j = 0; j <= i; ++j) {
                if (j == 0 || j == i) {
                    pscl[i][j] = 1;         // first and last elements are always 1
                } else {
                    pscl[i][j] = pscl[i - 1][j - 1] + pscl[i - 1][j]; // sum of two above
                }
            }
        }

        return pscl;
    }
};
