// Insertion Sort Algorithm / Stable Sort

// Pick first element, make sure elements before the element are always sorted.

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

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i; j >= 0; --j) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            } 
            else {
                break;
            }
        }
    }

    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}