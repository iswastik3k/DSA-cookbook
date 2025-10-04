// Leetcode - 160 / Intersection of Two Linked Lists

// Method 02 : Two-Pointers Switching (Advanced)

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

Node *findintersection(Node *headA, Node *headB) {
    Node *ptrA = headA;
    Node *ptrB = headB;
    while (ptrA != ptrB) {
        ptrA = ptrA ? ptrA->next : headB;
        ptrB = ptrB ? ptrB->next : headA;
    }
    return ptrA;
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

    Node *a1 = new Node(11);
    Node *b1 = new Node(13);
    Node *c1 = new Node(2);
    Node *d1 = new Node(4);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;

    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    // Intersection at Node g, i.e : 26->12->17
    d1->next = g;

    disrec(a);
    cout << endl;
    Node *internode = findintersection(a, a1);
    disrec(internode);
    cout << endl;
}