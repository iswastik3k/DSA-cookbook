// Subarrays - I

//  Given an array of unique elements, print it's subarrays.

#include <iostream>
#include <vector>
using namespace std;

void subarray(vector<int> v, vector<int> res, int idx) {

    // Base case
    if (idx == v.size()) {
        for (int ele : res) {
            cout << ele << " ";
        }
        cout << endl;
        return;
    }

    subarray(v, res, idx + 1);

    if (res.size() == 0 || v[idx - 1] == res[res.size() - 1]) {
        res.push_back(v[idx]);
        subarray(v, res, idx + 1);
    }
}

int main() {

    int n;
    cout << "Enter size of the array : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements of array : ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<int> res;

    subarray(v, res, 0);
}