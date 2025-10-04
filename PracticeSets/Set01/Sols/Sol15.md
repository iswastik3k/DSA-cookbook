# Solution: Sqrt(x) (Leetcode 69)

### 🧠 Algorithm Used: Binary Search on Answer Set

This problem finds the integer square root of `x` using binary search:

- Search space is `[0, x]`.
- At each step, check if `m * m == x`.
- If not a perfect square, return the floor of the square root (i.e., lower bound).

Using `long long` avoids overflow when squaring `m`.

### 🧪 Edge Cases

- `x = 0` or `x = 1`: return `x` directly.
- Large `x`: must avoid overflow.
- Non-perfect square: return floor of √x.

### 📈 Complexity

- Time: O(log x)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    int mySqrt(int x) {
        long long unsigned s = 0, e = x;

        while (s <= e) {
            long long unsigned m = s + (e - s) / 2;

            if (m * m == x) {
                return m;             // perfect square
            } else if (m * m > x) {
                e = m - 1;            // search left half
            } else {
                s = m + 1;            // search right half
            }
        }

        // If not perfect square, return lower bound
        return e;
    }
};
```
