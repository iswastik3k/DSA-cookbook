// Cyclic Sort Algorithm

// When to use : O(n) T.C. and O(1) S.C. mentioned in sorting question OR Range  -> 1 to N type.

#include <iostream>
#include <vector>
using namespace std;

void cyclesort(vector<int>& v) {
    int i = 0;
    while (i < v.size()) {
        int correctIdx = v[i] - 1;
        if (v[i] != v[correctIdx]) {
            swap(v[i], v[correctIdx]);
        } 
        else {
            ++i;
        }
    }
}


int main() {

    int n;
    cout << "Enter size of the vector : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements : ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cyclesort(v);

    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}