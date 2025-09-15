// Binary Strings - II

// Generate all possible binary representations of n length such that 1 should not be present consequtively.

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

    if (res.size() == 0 || res[res.size() - 1] == '0') {
        generate(res + "1", n - 1);
    }
}

int main() {

    int n;
    cout << "Enter number of bits : ";
    cin >> n;

    generate("", n);
}