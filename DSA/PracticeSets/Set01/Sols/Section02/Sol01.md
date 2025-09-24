# Solution: Binary Search (Leetcode 704)

### 🧠 Algorithm Used: Classic Binary Search

This problem searches for a target value in a sorted array using binary search:
- Maintain two pointers `s` and `e` for the search range.
- Compute midpoint `m = s + (e - s) / 2` to avoid overflow.
- Narrow the search space based on comparison with `nums[m]`.

### 🧪 Edge Cases
- Empty array: return -1.
- Target not present: return -1.
- Target at boundaries: test first and last index.

### 📈 Complexity
- Time: O(log n)
- Space: O(1)

### 🧾 Code
```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;

        while (s <= e) {
            int m = s + (e - s) / 2;  // midpoint to avoid overflow

            if (nums[m] == target) {
                return m;             // target found
            } else if (nums[m] > target) {
                e = m - 1;            // search left half
            } else {
                s = m + 1;            // search right half
            }
        }

        return -1;                    // target not found
    }
};
