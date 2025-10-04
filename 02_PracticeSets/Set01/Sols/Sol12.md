# Solution: Pascal's Triangle II (Leetcode 119)

### 🧠 Algorithm Used: Combinatorics via Optimized nCr

This problem generates the `rowIndex`-th row of Pascal’s Triangle using the binomial coefficient:

- Each element is `nCr(rowIndex, j)` for `j = 0` to `rowIndex`.
- Avoids factorials by computing nCr iteratively in O(r) time.

### 🧪 Edge Cases

- `rowIndex = 0`: single element `[1]`.
- Large `rowIndex`: risk of overflow if not using `long long`.
- Triangle symmetry: row is symmetric around center.

### 📈 Complexity

- Time: O(rowIndex)
- Space: O(rowIndex)

### 🧾 Code

```cpp
class Solution {
public:

    // Optimized quick way to calculate nCr without factorials
    int ncr(int n, int r) {
        long long res = 1;
        for (int i = 1; i <= r; ++i) {
            res = res * (n - i + 1) / i;
        }
        return res;
    }

    vector<int> getRow(int rowIndex) {

        vector<int> res;
        for (int j = 0; j <= rowIndex; ++j) {
            res.push_back(ncr(rowIndex, j)); // compute nCr(rowIndex, j)
        }
        return res;
    }
};
```
