# Solution: Remove Duplicates from Sorted List (Leetcode 83)

### 🧠 Algorithm Used: Two-Pointer Iterative Cleanup

We traverse the list with two pointers (`slow` and `fast`), skipping duplicate values by re-linking nodes:

- `fast` moves forward to find the next unique value.
- `slow` updates its `next` pointer to `fast` when a new unique node is found.
- This way, duplicates are bypassed in-place.

### 🧪 Edge Cases

- Empty list or single node → return as is.
- All nodes are duplicates → retains one copy.
- List with no duplicates → list remains unchanged.

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) {
            return head; // Empty or single node list, no duplicates possible
        }
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast) {
            fast = fast->next;                 // Move fast forward

            // Skip nodes with duplicate value
            if (fast && fast->val == slow->val) {
                continue;                     // Skip duplicates
            }

            slow->next = fast;                 // Link slow's next to unique node
            slow = slow->next;                 // Advance slow
        }
        return head;
    }
};
```
