// Reverse part of vector.

#include <iostream>
#include <vector>
using namespace std;

void reversepart(vector<int> &v, int idx) {

    int s = 0, e = idx;
    while (s <= e) {
        swap(v[s], v[e]);
        ++s;
        --e;
    }
}

int main() {

    vector<int> v;

    int n;
    cout << "Enter size of vector v : ";
    cin >> n;

    int val;
    cout << "Enter elements of vector v : ";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        v.push_back(val);
    }

    int x;
    cout << "Enter index till you want to reverse vector : ";
    cin >> x;

    if (x < 0 || x > n - 1) {
        cout << "Enter valid index.";
        return 0;
    }

    reversepart(v, x);

    cout << "Reverse vector till index x is : ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;
}