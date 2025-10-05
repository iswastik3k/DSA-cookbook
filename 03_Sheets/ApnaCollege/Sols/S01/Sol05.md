# Solution: Best Time to Buy and Sell Stock (Leetcode 121)

### 🧠 Algorithm Used: Min-Tracking + Greedy Profit Calculation

We track the minimum price seen so far and compute the profit if we sell at the current price:

- Update `minp` to the lowest price so far.
- At each step, calculate `prices[i] - minp` as potential profit.
- Keep track of the maximum profit encountered.

### 🧪 Edge Cases

- Prices always decreasing → profit remains 0.
- Single price → no transaction possible.
- Profit spike at the end → algorithm still captures it.

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;                  // Max profit so far
        int minp = prices[0];            // Minimum price seen so far

        for (int i = 1; i < prices.size(); ++i) {
            minp = min(minp, prices[i]);                 // Update minimum price
            profit = max(profit, prices[i] - minp);      // Check profit if sold today
        }

        return profit;
    }
};
```
