// Display a LinkedList using recursion (Normal and Reversed).

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

void disrecrev(Node *head) {

    // Base Case
    if (!head) {
        return;
    }

    // Call
    disrecrev(head->next);

    // Kaam
    cout << head->val << " ";
}

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
    disrecrev(a);
    cout << endl;
}