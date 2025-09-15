// Binary Strings - I

// Generate all possible binary representations of n length.

#include <iostream>
#include <string>
using namespace std;

void generate(string res, int n) {

    // Base case
    if (n == 0) {
        cout << res << endl;
        return;
    }

    generate(res + "0", n - 1);
    generate(res + "1", n - 1);
}

int main() {

    int n;
    cout << "Enter number of bits : ";
    cin >> n;

    generate("", n);
}