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

class LinkedList {
  public:
    Node *head;
    Node *tail;
    int size;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void push_front(int val) {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        if (size == 0) {
            tail = head;
        }
        ++size;
    }

    void push_back(int val) {
        if (size == 0) {
            push_front(val);
            return;
        }
        Node *temp = new Node(val);
        tail->next = temp;
        tail = temp;
        ++size;
    }

    void insert(int val, int idx) {
        if (idx < 0 || idx > size) {
            cerr << "Index out of Bounds!\n";
            return;
        }
        if (idx == 0) {
            push_front(val);
            return;
        }
        if (idx == size) {
            push_back(val);
            return;
        }
        Node *ptr = head;
        for (int i = 0; i < idx - 1; ++i) {
            ptr = ptr->next;
        }
        Node *temp = new Node(val);
        temp->next = ptr->next;
        ptr->next = temp;
        ++size;
    }

    void pop_front() {
        if (size == 0) {
            return;
        }
        if (size == 1) {
            head = tail = NULL;
            --size;
            return;
        }
        head = head->next;
        --size;
        return;
    }

    void pop_back() {
        if (size == 0) {
            return;
        }
        if (size == 1) {
            pop_front();
            return;
        }
        Node *ptr = head;
        for (int i = 0; i < size - 2; ++i) {
            ptr = ptr->next;
        }
        ptr->next = NULL;
        tail = ptr;
        --size;
        return;
    }

    void remove(int idx) {
        if (idx < 0 || idx >= size) {
            cerr << "Index out of Bounds!\n";
            return;
        }
        if (idx == 0) {
            pop_front();
            return;
        }
        if (idx == size - 1) {
            pop_back();
            return;
        }
        Node *ptr = head;
        for (int i = 0; i < idx - 1; ++i) {
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
        --size;
        return;
    }

    int get(int idx) {
        if (idx < 0 || idx >= size) {
            cerr << "Index out of Bounds!\n";
            return -1;
        }
        if (idx == 0) {
            return head->val;
        }
        if (idx == size - 1) {
            return tail->val;
        }
        Node *ptr = head;
        for (int i = 0; i < idx; ++i) {
            ptr = ptr->next;
        }
        return ptr->val;
    }

    int find(int val) {
        if (tail->val == val) {
            return size - 1;
        }
        Node *ptr = head;
        for (int i = 0; i < size; ++i) {
            if (ptr->val == val) {
                return i;
            }
            ptr = ptr->next;
        }
        return -1;
    }

    void display() {
        Node *temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {

    LinkedList lili;
}