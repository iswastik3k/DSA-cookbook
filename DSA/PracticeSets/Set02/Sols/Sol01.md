# Solution: Delete Node in a Linked List (Leetcode 237)

### 🧠 Algorithm Used: Value Overwrite + Pointer Bypass

In this problem, you're given access only to the node to be deleted—not the head of the list.  
To "delete" it:

- Copy the value of the next node into the current node.
- Redirect the current node’s `next` pointer to skip the next node.

This effectively removes the next node, making the current node behave like it was deleted.

### 🧪 Edge Cases

- Node is the last in the list → not allowed by problem constraints.
- Node is part of a two-element list → still works.
- Multiple deletions not supported → single operation only.

### 📈 Complexity

- Time: O(1)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    void deleteNode(ListNode* node) {
        // Copy the next node's value into this node
        node->val = node->next->val;

        // Bypass the next node to effectively delete it
        node->next = node->next->next;
    }
};
```
