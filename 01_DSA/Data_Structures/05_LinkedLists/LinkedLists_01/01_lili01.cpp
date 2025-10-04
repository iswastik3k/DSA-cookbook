// Creating and Printing a LinkedList 01.

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

int main() {

    // Creating Nodes
    Node a(14);
    Node b(19);
    Node c(20);
    Node d(31);

    // Linking
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // Printing
    Node temp = a;
    while (true) {
        cout << temp.val << " ";
        if (temp.next == NULL) {
            break;
        }
        temp = *(temp.next);
    }
    cout << endl;
}