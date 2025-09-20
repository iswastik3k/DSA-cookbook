# Solution: Sort Colors (Leetcode 75)

### 🧠 Algorithm Used: Dutch National Flag Algorithm

Achieves O(n) time and O(1) space complexity.

Partition the array into three groups (0s, 1s, 2s) in one pass:
- Use three pointers: `z` (0-boundary), `i` (current), and `e` (2-boundary).
- Swap elements to group colors efficiently.

### 🧾 Code
```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0, i = 0, e = nums.size() - 1;
        while (i <= e) {
            if (nums[i] == 0) {
                swap(nums[z++], nums[i++]);
            } else if (nums[i] == 1) {
                i++;
            } else {
                swap(nums[i], nums[e--]);
            }
        }
    }
};
