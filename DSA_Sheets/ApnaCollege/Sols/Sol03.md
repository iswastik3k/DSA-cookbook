# Solution: Merge Sorted Array (Leetcode 88)

### 🧠 Algorithm Used: Two Pointers from End

Merge two sorted arrays starting from the back to avoid overwriting elements:

- Use pointers `i` and `j` at the ends of arrays `nums1` and `nums2`.
- Place larger elements at the end of `nums1` and decrement pointers.

Achieves O(n) time and O(1) space complexity.

### 🧪 Edge Cases

- Empty `nums2`: no action needed.
- Overlapping ranges: handled by backward traversal.

### 🧾 Code

```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};
```
