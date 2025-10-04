# Solution: Search in Rotated Sorted Array (Leetcode 33)

### 🧠 Algorithm Used: Confined Binary Search

This problem searches for a target in a rotated sorted array using modified binary search:

- At each step, determine which half is sorted.
- Narrow the search space based on whether the target lies within the sorted half.

This avoids linear scan and handles rotation elegantly.

### 🧪 Edge Cases

- Empty array: return -1.
- Target not present: return -1.
- No rotation (fully sorted): behaves like classic binary search.
- Rotation at boundaries: test pivot at start or end.

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
            int m = s + (e - s) / 2;

            if (nums[m] == target) {
                return m;
            }

            // Left half is sorted
            if (nums[m] >= nums[s]) {
                if (target >= nums[s] && target < nums[m]) {
                    e = m - 1;
                } else {
                    s = m + 1;
                }
            }
            // Right half is sorted
            else {
                if (target > nums[m] && target <= nums[e]) {
                    s = m + 1;
                } else {
                    e = m - 1;
                }
            }
        }

        return -1;  // target not found
    }
};
```
