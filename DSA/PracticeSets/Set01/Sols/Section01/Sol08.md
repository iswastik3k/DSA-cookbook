# Solution: Spiral Matrix (Leetcode 54)

### 🧠 Algorithm Used: Layer-by-Layer Simulation

This problem simulates spiral traversal by maintaining four boundaries:
- `rs` and `re`: row start and end
- `cs` and `ce`: column start and end

We traverse the matrix in four directions—right, down, left, up—shrinking the boundaries after each layer.

### 🧪 Edge Cases
- Empty matrix: return empty.
- Single row or column: linear traversal.
- Non-square matrix: spiral still valid.

### 📈 Complexity
- Time: O(n × m)
- Space: O(n × m) (for result vector)

### 🧾 Code
```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> res;

        int rs = 0, re = matrix.size() - 1;         // row start and end
        int cs = 0, ce = matrix[0].size() - 1;      // column start and end

        while (rs <= re && cs <= ce) {
            // Traverse right
            for (int i = cs; i <= ce; ++i) {
                res.push_back(matrix[rs][i]);
            }
            ++rs;

            // Traverse down
            for (int i = rs; i <= re; ++i) {
                res.push_back(matrix[i][ce]);
            }
            --ce;

            // Traverse left
            if (rs <= re && cs <= ce) {
                for (int i = ce; i >= cs; --i) {
                    res.push_back(matrix[re][i]);
                }
                --re;
            }

            // Traverse up
            if (rs <= re && cs <= ce) {
                for (int i = re; i >= rs; --i) {
                    res.push_back(matrix[i][cs]);
                }
                ++cs;
            }
        }

        return res;
    }
};
