// Leetcode - 633 / Sum of square numbers.

#include <cmath>
#include <iostream>
using namespace std;

bool isperfectsq(int x) {

    int root = sqrt(x);
    if (root * root == x) {
        return true;
    }
    return false;
}

int main() {

    int c;
    cout << "Enter c : ";
    cin >> c;

    int a = 1, b = c - 1;

    while (a < b) {

        if (isperfectsq(a) && isperfectsq(b)) {
            cout << "True \n";
            return 0;
        } 
        else if (!isperfectsq(b)) {
            b = (int)sqrt(b) * (int)sqrt(b);
            a = c - b;
        } 
        else {
            a = (int)(sqrt(a) + 1) * (int)(sqrt(a) + 1);
            b = c - a;
        }
    }
    cout << "No such pairs \n";
}