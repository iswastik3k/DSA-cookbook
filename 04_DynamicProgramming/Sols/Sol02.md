# Solution: Min Cost Climbing Stairs (Leetcode 746)

### 🧠 Techniques Used:

- M01: Recursion + Memoization
- M02: Tabulation (Bottom-Up DP)

We compute the minimum cost to reach the top of the staircase:

- You can start from either step 0 or step 1.
- At each step, you can climb 1 or 2 steps.
- We either recursively compute the minimum cost using memoization, or iteratively build the solution using tabulation.

### 🧪 Edge Cases

- Cost array of size 2 → return 0
- Cost spikes at the end → algorithm still finds optimal path
- Handles large input efficiently with DP

### 📈 Complexity

- M01 Time: O(n), Space: O(n) (due to recursion stack + memo table)
- M02 Time: O(n), Space: O(1) (in-place modification)

### 🧾 Code

```cpp
class Solution {
public:

    // M01 - Recursion + Memoization
    vector<int> dp;

    int countcost(vector<int>& cost, int idx) {
        if (idx == 0 || idx == 1)
            return 0;
        if (dp[idx] != -1)
            return dp[idx];

        return dp[idx] = min(countcost(cost, idx - 1) + cost[idx - 1],
                             countcost(cost, idx - 2) + cost[idx - 2]);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp.clear();
        dp.resize(n + 1, -1);
        return countcost(cost, n);
    }
};
```

```cpp
class Solution {
public:

    // M02 - Tabulation
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        for (int i = 2; i < n; ++i) {
            cost[i] += min(cost[i - 1], cost[i - 2]);
        }
        return min(cost[n - 1], cost[n - 2]);
    }
};
```
