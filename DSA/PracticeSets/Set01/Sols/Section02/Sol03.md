# Solution: Peak Index in a Mountain Array (Leetcode 852)

### 🧠 Algorithm Used: Binary Search on Unimodal Array

This problem finds the peak index in a mountain array using binary search:
- A mountain array increases then decreases.
- If `arr[m] < arr[m+1]`, peak lies to the right.
- Else, peak lies to the left or is at `m`.

This avoids linear scan and achieves logarithmic time.

### 🧪 Edge Cases
- Peak at start or end: not possible (guaranteed mountain).
- Strictly increasing or decreasing: invalid input.
- Smallest valid mountain: size 3.

### 📈 Complexity
- Time: O(log n)
- Space: O(1)

### 🧾 Code
```cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size() - 1;

        while (s < e) {
            int m = s + (e - s) / 2;

            if (arr[m] < arr[m + 1]) {
                s = m + 1;     // peak lies to the right
            } else {
                e = m;         // peak lies to the left or is at m
            }
        }

        return e;              // s == e → peak index
    }
};
