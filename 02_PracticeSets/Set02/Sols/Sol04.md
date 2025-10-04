# Solution: Intersection of Two Linked Lists (Leetcode 160)

### 🧠 Algorithms Used:

#### Method 1: Length Difference Alignment

- Traverse both lists to find their lengths or tails.
- Calculate the length difference.
- Advance the longer list by the difference.
- Then traverse both lists simultaneously until intersection or end.
- Returns the intersection node or `nullptr`.

#### Method 2: Two-Pointer Pointer Switching (Optimal)

- Use two pointers starting at heads of each list.
- Move each pointer one node at a time.
- When a pointer hits the end, switch it to the head of the other list.
- Eventually, both pointers meet at the intersection or end at `nullptr`.
- This ensures alignment without length calculation.

### 🧪 Edge Cases

- One or both lists are empty.
- No intersection (returns `nullptr`).
- Intersection at head or tail.
- Lists of different lengths.

### 📈 Complexity

- Time: O(m + n), where m and n are the lengths of the two lists.
- Space: O(1).

### 🧾 Code

```cpp
// Method 1: Length Difference Alignment
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;

        // Move pointers until one reaches end
        while (ptrA && ptrB) {
            ptrA = ptrA->next;
            ptrB = ptrB->next;
        }

        // Identify which list is longer
        char c = (ptrA == nullptr) ? 'b' : 'a';
        int count = 0;

        // Count extra nodes in the longer list
        if (c == 'a') {
            while (ptrA) {
                ptrA = ptrA->next;
                ++count;
            }
        } else {
            while (ptrB) {
                ptrB = ptrB->next;
                ++count;
            }
        }

        // Reset pointers to heads
        ptrA = headA;
        ptrB = headB;

        // Advance longer list by difference
        for (int i = 0; i < count; ++i) {
            if (c == 'a') ptrA = ptrA->next;
            else ptrB = ptrB->next;
        }

        // Traverse both lists simultaneously to find intersection
        while (ptrA && ptrB) {
            if (ptrA == ptrB) {
                return ptrA;
            }
            ptrA = ptrA->next;
            ptrB = ptrB->next;
        }
        return nullptr;
    }
};

// Method 2: Two-Pointer Switching (Optimal)
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;
        while (ptrA != ptrB) {
            ptrA = ptrA ? ptrA->next : headB;
            ptrB = ptrB ? ptrB->next : headA;
        }
        return ptrA; // could be nullptr or intersection node
    }
};
```
