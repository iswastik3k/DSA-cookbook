# Solution: Middle of the Linked List (Leetcode 876)

### 🧠 Algorithm Used: Fast and Slow Pointer (Tortoise and Hare)

This technique uses two pointers moving at different speeds:

- The **fast pointer** moves two nodes at a time.
- The **slow pointer** moves one node at a time.

When the fast pointer reaches the end, the slow pointer will be at the middle node.

### 🧪 Edge Cases

- Empty list → returns `nullptr`.
- Single-node list → returns the head itself.
- Even number of nodes → returns the second middle node (as per problem definition).

### 📈 Complexity

- Time: O(N), where N is the length of the list.
- Space: O(1), only constant extra space used.

### 🧾 Code

```cpp
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
```
