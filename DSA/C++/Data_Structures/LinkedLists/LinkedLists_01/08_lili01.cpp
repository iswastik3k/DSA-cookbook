// Leetcode - 19 / Remove Nth Node from End of the List.

// Optimized Method : One Pass

// Algorithm : Two-Pointers at fixed seperation from each other.

#include <iostream>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Display Function
void disrec(Node *head) {

    // Base Case
    if (!head) {
        return;
    }

    // Kaam
    cout << head->val << " ";

    // Call
    disrec(head->next);
}

Node *delnodefromend(Node *head, int n) {
    Node *fast = head;
    Node *slow = head;
    // Mantain a gap of n+1 nodes between both pointers.
    for (int i = 0; i <= n; ++i) {

        // if n==size, remove head.
        if (fast == NULL) {
            return head->next;
        }
        fast = fast->next;
    }

    // Traverse until fast == NULL keeping the gap between both poiters.
    while (fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // When fast reaches NULL, Slow will be n+1 nodes behind it (gap).
    // Remove the next node from slow, it is nth node from last.
    slow->next = slow->next->next;
    return head;
}

int main() {

    Node *a = new Node(14);
    Node *b = new Node(19);
    Node *c = new Node(20);
    Node *d = new Node(31);
    Node *e = new Node(27);
    Node *f = new Node(22);
    Node *g = new Node(26);
    Node *h = new Node(12);
    Node *i = new Node(17);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;

    disrec(a);
    cout << endl;
    int n = 5;
    Node *head = delnodefromend(a, n);
    disrec(head);
    cout << endl;
}