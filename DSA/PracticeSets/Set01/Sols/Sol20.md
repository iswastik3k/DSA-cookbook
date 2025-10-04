# Solution: Sum of Square Numbers (Leetcode 633)

### 🧠 Algorithm Used: Two-Pointer + Perfect Square Check

This problem checks whether a number `c` can be expressed as `a² + b²`:

- Use two pointers `a = 0` and `b = sqrt(c)`.
- At each step, check if `a² + b² == c`.
- If sum is too large, decrement `b`; if too small, increment `a`.

### 🧪 Edge Cases

- `c = 0`: return true (`0² + 0²`)
- `c = 1`: return true (`0² + 1²`)
- Large `c`: must avoid overflow and optimize square checks.

### 📈 Complexity

- Time: O(√c)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    bool judgeSquareSum(int c) {
        int a = 0;
        int b = (int)sqrt(c);

        while (a <= b) {
            int sum = a * a + b * b;

            if (sum == c) {
                return true;
            } else if (sum < c) {
                ++a;
            } else {
                --b;
            }
        }

        return false;
    }
};
```
