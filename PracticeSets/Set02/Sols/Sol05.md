# Solution: Linked List Cycle (Leetcode 141)

### 🧠 Algorithm Used: Fast & Slow Pointer (Floyd’s Cycle Detection)

We use two pointers:

- **Slow pointer** moves one step at a time.
- **Fast pointer** moves two steps at a time.

If there's a cycle, the fast pointer will eventually "lap" the slow pointer and they’ll meet.  
If the fast pointer reaches the end (`nullptr`), there’s no cycle.

### 🧪 Edge Cases

- Empty list → return `false`.
- Single-node list → return `false`.
- Cycle starts at head or tail → still detected.

### 📈 Complexity

- Time: O(N)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true; // Cycle detected
            }
        }

        return false; // No cycle
    }
};
```
