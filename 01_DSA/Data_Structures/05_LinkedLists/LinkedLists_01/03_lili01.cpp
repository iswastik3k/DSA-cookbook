// WAF to display a LinkedList and print it's size.

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

void display(Node *head) {
    Node *temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(Node *head) {
    Node *temp = head;
    int c = 0;
    while (temp) {
        ++c;
        temp = temp->next;
    }
    return c;
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

    display(a);
    cout << size(a) << endl;
}
