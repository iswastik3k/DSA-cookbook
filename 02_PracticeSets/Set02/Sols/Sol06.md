# Solution: Linked List Cycle II (Leetcode 142)

### 🧠 Algorithm Used: Floyd’s Cycle Detection + Entry Point Reset

This problem extends cycle detection to **locating the node where the cycle begins**:

- Use fast and slow pointers to detect a cycle (Floyd’s algorithm).
- Once they meet, reset one pointer to head.
- Move both one step at a time — their meeting point is the cycle’s entry.

### 🧪 Edge Cases

- No cycle → return `nullptr`.
- Cycle starts at head → correctly detected.
- Cycle of length 1 → still works.

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        bool flag = false;

        // Phase 1: Detect cycle using fast & slow pointers
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                flag = true; // Cycle detected
                break;
            }
        }

        // No cycle found
        if (!flag) return nullptr;

        // Phase 2: Reset one pointer to head
        slow = head;

        // Move both pointers one step at a time
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow; // Entry point of the cycle
    }
};
```
