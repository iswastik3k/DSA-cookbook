// Quick Sort Algorithm (Optimized)

// Avg. Case T.C -> O(n.logn)

// Worst Case T.C -> O(n.logn)

// Optimization : Randomized Pivot -> pivval = v[(s+(e-s)/2)]

#include <iostream>
#include <vector>
using namespace std;
               
int partition(vector<int> &v, int s, int e) {

    // Find Pividx
    int pivval = v[(s + (e - s) / 2)], count = 0;

    for (int i = s; i <= e; ++i) {
        if (v[i] == pivval) {
            continue;
        }
        if (v[i] <= pivval) {
            ++count;
        }
    }
    int pividx = s + count;
    swap(v[pividx], v[(s + (e - s) / 2)]);

    // Arrange elements
    while (s < pividx && e > pividx) {
        if (v[s] < pivval) {
            ++s;
        } 
        else if (v[e] > pivval) {
            --e;
        } 
        else {
            swap(v[s], v[e]);
            ++s;
            --e;
        }
    }
    return pividx;
}

void quicksort(vector<int> &v, int s, int e) {

    // Base case
    if (s >= e) {
        return;
    }

    int pividx = partition(v, s, e);

    quicksort(v, s, pividx - 1);
    quicksort(v, pividx + 1, e);
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

    quicksort(v, 0, n - 1);

    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}