// Selection Sort Algorithm / Unstable Sort

// Each iteration puts minimum to first.

#include <climits>
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

    int mn, mnidx;
    for (int i = 0; i < n - 1; ++i) {
        mn = INT_MAX;
        for (int j = i; j < n; ++j) {
            if (v[j] < mn) {
                mn = v[j];
                mnidx = j;
            }
        }
        swap(v[i], v[mnidx]);
    }

    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}