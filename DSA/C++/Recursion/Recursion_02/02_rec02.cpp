// Tower of Hanoi

#include <iostream>
using namespace std;

void hanoi(int n, char s, char h, char d) {

    // Base case
    if (n == 0) {
        return;
    }

    // Step 1 : (n-1) disks : S -> H
    hanoi(n - 1, s, d, h);

    // Step 2 : nth disk : S -> D and Print
    cout << s << " -> " << d << endl;

    // Step 3 : (n-1) disks : H -> D
    hanoi(n - 1, h, s, d);
}

int main() {

    int n;
    cout << "Enter the number of discs : ";
    cin >> n;

    hanoi(n, 'A', 'B', 'C');
}