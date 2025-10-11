# Solution: Majority Element (> n/3 times) (GFG 160 - D06)

### 🧠 Technique / Pattern:

- Extended Boyer-Moore Voting Algorithm

We find all elements that appear more than ⌊n/3⌋ times:

- At most **two** such elements can exist.
- We use two counters and two candidates to track potential majority elements.
- After the first pass, we verify actual counts in a second pass.

### 🧪 Edge Cases

- No element appears > n/3 → return empty vector
- All elements are the same → return that element
- Works with negative numbers and duplicates

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    vector<int> findMajority(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0, count2 = 0, candidate1 = 0, candidate2 = 1;

        // Phase 1: Find potential candidates
        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
            else if (count1 == 0) candidate1 = num, count1 = 1;
            else if (count2 == 0) candidate2 = num, count2 = 1;
            else count1--, count2--;
        }

        // Phase 2: Verify actual counts
        count1 = count2 = 0;
        for (int num : nums) {
            if (num == candidate1) count1++;
            else if (num == candidate2) count2++;
        }

        vector<int> res;
        if (count1 > n / 3) res.push_back(candidate1);
        if (count2 > n / 3) res.push_back(candidate2);
        return res;
    }
};
```
