// Leetcode - 141 / Linked List Cycle

// Algorithm : Floyd's Cycle Detection

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

bool hascycle(Node *head) {
    Node *fast = head;
    Node *slow = head;

    // CAUTION : Using (fast->next && fast) will throw error for some cases.
    // Think why.
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            return true;
        }
    }
    return false;
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
    // Cycle
    i->next = d; // comment this line for removing the cycle

    cout << hascycle(a);
}