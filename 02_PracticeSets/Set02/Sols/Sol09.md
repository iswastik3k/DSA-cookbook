# Solution: Spiral Matrix from Linked List (Leetcode 2326)

### 🧠 Algorithm Used: Boundary Traversal with Linked List Iterator

We fill an `m x n` matrix in spiral order using values from the linked list:

- Maintain boundaries `minr`, `maxr`, `minc`, `maxc`.
- Traverse right, down, left, and up, filling matrix cells.
- Move linked list pointer forward as we fill cells.
- Cells left empty after list ends are filled with `-1`.

### 🧪 Edge Cases

- Empty linked list → matrix filled with -1.
- `m` or `n` equal to 1 → simple linear fills.
- List longer than matrix size → excess ignored.

### 📈 Complexity

- Time: O(m\*n)
- Space: O(m\*n)

### 🧾 Code

```cpp
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> res(m, vector<int>(n, -1));  // Initialize with -1
        ListNode* ptr = head;
        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;

        // Spiral traversal until no list node or boundaries cross
        while (ptr && minr <= maxr && minc <= maxc) {
            // Traverse from left to right
            for (int i = minc; i <= maxc && ptr; ++i) {
                res[minr][i] = ptr->val;
                ptr = ptr->next;
            }
            ++minr;

            // Traverse from top to bottom
            for (int i = minr; i <= maxr && ptr; ++i) {
                res[i][maxc] = ptr->val;
                ptr = ptr->next;
            }
            --maxc;

            // Traverse from right to left
            for (int i = maxc; i >= minc && ptr; --i) {
                res[maxr][i] = ptr->val;
                ptr = ptr->next;
            }
            --maxr;

            // Traverse from bottom to top
            for (int i = maxr; i >= minr && ptr; --i) {
                res[i][minc] = ptr->val;
                ptr = ptr->next;
            }
            ++minc;
        }

        return res;
    }
};
```
