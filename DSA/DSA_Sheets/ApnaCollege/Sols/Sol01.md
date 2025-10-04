# Solution: Majority Element (Leetcode 169)

### 🧠 Algorithms Used

#### 🔹 Method 1: Boyer-Moore Voting Algorithm

- Maintain a candidate and a counter.
- If the current element matches the candidate, increment the counter.
- If it doesn’t, decrement the counter.
- When the counter hits zero, update the candidate.
- Guaranteed to work because the majority element appears more than ⌊n/2⌋ times.

#### 🔹 Method 2: Sorting

- Sort the array.
- The majority element will always occupy the middle index due to its frequency.

### 🧪 Edge Cases

- Array of size 1 → return the only element.
- All elements are the same → trivially returns that element.
- Majority element appears exactly ⌊n/2⌋ + 1 times → both methods still work.

### 📈 Complexity

| Method | Time Complexity | Space Complexity |
| ------ | --------------- | ---------------- |
| M01    | O(N)            | O(1)             |
| M02    | O(N log N)      | O(1)             |

### 🧾 Code

```cpp
// 🔹 Method 1: Boyer-Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0]; // Initial candidate
        int count = 1;           // Initial vote count

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == candidate) {
                ++count; // Same as candidate → increase vote
            } else {
                --count; // Different → decrease vote
            }

            // If votes drop to zero, switch candidate
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }

        return candidate; // Final candidate is the majority element
    }
};

// 🔹 Method 2: Sorting
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array
        return nums[nums.size() / 2];   // Middle element is guaranteed to be majority
    }
};
```
