# Solution: Pow(x, n) (Leetcode 50)

### 🧠 Algorithm Used: Binary Exponentiation (Recursive)

We compute \( x^n \) efficiently using divide-and-conquer:

- Base cases: \( x^0 = 1 \), \( x^1 = x \)
- Recursively compute \( x^{n/2} \)
- If `n` is even → result is \( \text{half} \times \text{half} \)
- If `n` is odd → result is \( \text{half} \times \text{half} \times x \)
- For negative `n`, invert `x` and use positive exponent.

### 🧪 Edge Cases

- `n = 0` → return 1
- `x = 0` and `n > 0` → return 0
- Negative exponent → invert base
- Large `n` → handled via long long to avoid overflow

### 📈 Complexity

- Time: O(log n)
- Space: O(log n) (due to recursion stack)

### 🧾 Code

```cpp
class Solution {
public:
    // Recursive helper for binary exponentiation
    double powrec(double x, long long n) {
        if (n == 1)
            return x;               // Base case: x^1 = x
        if (n == 0)
            return 1;               // Base case: x^0 = 1

        double half = powrec(x, n / 2); // Recursive call

        // Combine results based on parity of n
        return (n % 2 == 0) ? half * half : half * half * x;
    }

    double myPow(double x, int n) {
        long long N = n;            // Convert to long long to avoid overflow

        if (n < 0) {
            N = -N;                 // Make exponent positive
            x = 1 / x;              // Invert base for negative exponent
        }

        return powrec(x, N);        // Compute power recursively
    }
};
```
