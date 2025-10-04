// Creating and Printing a LinkedList 02.

// The idea is to create pointers that will store the address the of each Node.

// So we can access the node val and next, using (ptr)-> next/val.

#include <iostream>
using namespace std;

class Node {
  public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = next;
    }
};

int main() {

    // Creating Pointers having address of Nodes.
    Node *a = new Node(14);
    Node *b = new Node(19);
    Node *c = new Node(20);
    Node *d = new Node(31);

    // Linking Nodes using their respective Pointers.
    a->next = b;
    b->next = c;
    c->next = d;

    // Printing lili using pointers to access Nodes.
    Node *temp = a;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}