// Leetcode - 876 / Middle of LinkedList

// Optimized Method : One pass

// Algorithm : Tortoise-Hare Algorithm (2-Pointers)

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

Node *findmiddle(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
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
    Node *midnode = findmiddle(a);
    disrec(midnode);
    cout << endl;
}