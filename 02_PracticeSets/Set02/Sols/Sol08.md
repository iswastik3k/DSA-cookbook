# Solution: Rotate List (Leetcode 61)

### 🧠 Algorithm Used: Tail Connection + Re-linking at Rotation Point

To rotate the list right by `k` places:

- Calculate list length and identify tail.
- Normalize `k` by modulo with list size.
- If `k` is zero, no rotation needed.
- Find new tail at position `size - k - 1`.
- Connect old tail to head to form a cycle.
- Break cycle after new tail.
- Return new head.

### 🧪 Edge Cases

- Empty or single node → no rotation needed.
- `k` multiple of list size → no rotation effect.
- Large `k` values → normalized by modulo.

### 📈 Complexity

- Time: O(n)
- Space: O(1)

### 🧾 Code

```cpp
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) {
            return head;                     // No rotation needed
        }

        ListNode* tail;
        ListNode* ptr = head;
        int size = 1;

        // Find tail and size
        while (ptr->next) {
            ptr = ptr->next;
            ++size;
        }
        tail = ptr;

        k = k % size;                       // Normalize k
        if (k == 0) {
            return head;                   // No rotation after normalization
        }

        ptr = head;
        // Move to new tail position
        for (int i = 0; i < size - k - 1; ++i) {
            ptr = ptr->next;
        }

        tail->next = head;                  // Connect tail to head - make cycle
        head = ptr->next;                   // New head is next of new tail
        ptr->next = nullptr;                // Break cycle

        return head;
    }
};
```
