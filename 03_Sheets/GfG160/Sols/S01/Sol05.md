# Solution: Next Permutation (GFG 160 - D05)

### 🧠 Technique / Pattern:

- Lexicographic Permutation

We generate the next lexicographically greater permutation of the array:

1. Find the **pivot index** where `arr[i] < arr[i+1]` from the right.
2. If no such index exists, reverse the array (last permutation).
3. Otherwise, find the **successor** (smallest element greater than pivot) from the right.
4. Swap pivot and successor.
5. Sort the suffix starting from `pivot + 1`.

### 🧪 Edge Cases

- Already highest permutation → returns lowest permutation
- All elements equal → returns same array
- Works with duplicates and negative numbers

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size(), pivi = -1;

        // Step 1: Find pivot
        for (int i = n - 2; i >= 0; --i) {
            if (arr[i] < arr[i + 1]) {
                pivi = i;
                break;
            }
        }

        // Step 2: If no pivot, reverse entire array
        if (pivi == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        // Step 3: Find successor and swap
        for (int i = n - 1; i > pivi; --i) {
            if (arr[i] > arr[pivi]) {
                swap(arr[pivi], arr[i]);
                break;
            }
        }

        // Step 4: Sort suffix
        sort(arr.begin() + pivi + 1, arr.end());
    }
};
```
