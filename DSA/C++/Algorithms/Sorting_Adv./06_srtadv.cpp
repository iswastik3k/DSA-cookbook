// Find Kth smallest element.

// Approach : Selective Quick Sort

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int s, int e) {

    // Find pividx
    int pivval = v[(s + (e - s) / 2)], count = 0;

    for (int i = s; i <= e; ++i) {
        if (v[i] == pivval) {
            continue;
        }
        if (v[i] < pivval) {
            ++count;
        }
    }

    int pividx = s + count;

    swap(v[(s + (e - s) / 2)], v[pividx]);

    while (s < pividx && e > pividx) {
        if (v[s] < pivval) {
            ++s;
        } else if (v[e] > pivval) {
            --e;
        } else {
            swap(v[s], v[e]);
            ++s;
            --e;
        }
    }
    return pividx;
}

int quickselect(vector<int> &v, int s, int e, int k) {

    if (s <= e) {
        int pividx = partition(v, s, e);
        if (k == pividx) {
            return v[pividx];
        } else if (k < pividx) {
            return quickselect(v, s, pividx - 1, k);
        } else {
            return quickselect(v, pividx + 1, e, k);
        }
    }
    return -1;
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

    int k;
    cout << "Enter the value of k : ";
    cin >> k;
    --k; // 1 - Based indexing
    int val = quickselect(v, 0, n - 1, k);

    cout << val << endl;
}