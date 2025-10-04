# Solution: Majority Element (Leetcode 169)

### 🧠 Algorithm Used: Boyer-Moore Majority Vote

This problem finds the element that appears more than ⌊n/2⌋ times:

- Maintain a candidate and a counter.
- Increment counter if current element matches candidate.
- Decrement otherwise. If counter drops to 0, switch candidate.

This greedy strategy guarantees correctness due to the majority constraint.

### 🧪 Edge Cases

- Single element: return that element.
- Majority at end: algorithm still converges.
- All elements same: trivially returns that value.

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;               // count of current candidate
        int majele = nums[0];        // initial candidate

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == majele) {
                ++count;             // same as candidate → increment
            } else {
                --count;             // different → decrement
            }

            // If count drops to zero, switch candidate
            if (count <= 0) {
                majele = nums[i];
                count = 1;
            }
        }

        return majele;               // final candidate is the majority
    }
};
```
