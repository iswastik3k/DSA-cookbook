# Solution: Fibonacci Number (Leetcode 509)

### 🧠 Techniques Used:

- M01: Recursion + Memoization
- M02: Tabulation (Bottom-Up DP)

We compute the nth Fibonacci number using two approaches:

- **Memoization** stores intermediate results to avoid recomputation.
- **Tabulation** builds the solution iteratively from base cases.

### 🧪 Edge Cases

- `n = 0` → return 0
- `n = 1` → return 1
- Handles large `n` efficiently with DP

### 📈 Complexity

- M01 Time: O(n), Space: O(n) (due to recursion stack + memo table)
- M02 Time: O(n), Space: O(n)

### 🧾 Code

```cpp
class Solution {
public:
    // M01 - Recursion + Memoization
    int fibo(int n, vector<int>& dp) {
        if (n < 2)
            return n;
        if (dp[n])
            return dp[n];
        return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
    }
    int fib(int n) {
        vector<int> dp(n + 1, 0);
        return fibo(n, dp);
    }
};
```

```cpp
class Solution {
public:
    // M02 - Tabulation
    int fib(int n) {
        if (n < 2)
            return n;
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
```
