// Push zeroes to the end while mantaining relative order of other elements.

// Approach : Bubble Sort Algorithm

// Intuituion : "Relative order" -> Stable sort

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter size of vector : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements of vector : ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    bool flag = true;
    for (int i = 0; i < n - 1; ++i) {
        flag = true;
        for (int j = 0; j < n - 1 - i; ++j) {
            if (v[j] == 0) {
                swap(v[j], v[j + 1]);
                flag = false;
            }
        }
        if (flag) {
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}