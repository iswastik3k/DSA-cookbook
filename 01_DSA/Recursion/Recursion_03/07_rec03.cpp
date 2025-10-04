// Leetcode - 22 / Generate Parenthesis

// Approach : At any given instant, No. of closing brackets can not exceed or match number of opening brackets.

#include <iostream>
#include <string>
using namespace std;

void generate(string res, int n, int op, int cp) {

    // Base case
    if (cp == n) {
        cout << res << endl;
        return;
    }

    if (op != n) {
        generate(res + '(', n, op + 1, cp);
    }
    if (cp < op) {
        generate(res + ')', n, op, cp + 1);
    }
}

int main() {

    int n;
    cout << "Enter number : ";
    cin >> n;

    generate("", n, 0, 0);
}