// Count Inversions

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v1, vector<int> &v2, vector<int> &res, int &count) {

    int i = 0, p1 = 0, p2 = 0;
    while (p1 < v1.size() && p2 < v2.size()) {
        if (v1[p1] <= v2[p2]) {
            res[i++] = v1[p1++];
        } 
        else {
            res[i++] = v2[p2++];
            count += v1.size() - p1;
        }
    }
    while (p1 < v1.size()) {
        res[i++] = v1[p1++];
    }
    while (p2 < v2.size()) {
        res[i++] = v2[p2++];
    }
}

void mergesort(vector<int> &v, int &count) {

    int n = v.size(), n1 = n / 2;

    // Base case
    if (n <= 1) {
        return;
    }

    vector<int> v1(v.begin(), v.begin() + n1);
    vector<int> v2(v.begin() + n1, v.end());

    mergesort(v1, count);
    mergesort(v2, count);

    merge(v1, v2, v, count);

    v1.clear();
    v2.clear();
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

    int count = 0;
    mergesort(v, count);

    cout << " No. of inversions are : " << count << endl;
}