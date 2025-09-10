// Next and Previous greatest element vector.

// Useful for questions like rainwater trapping.

// We're considering vector has no negative elements.

#include <iostream>
#include <vector>
using namespace std;

vector<int> nextgrtelement(vector<int> v) {

    vector<int> v1(v.size());
    int mx = -1;

    for (int i = v.size() - 1; i >= 0; --i) {
        v1[i] = mx;
        mx = max(mx, v[i]);
    }
    return v1;
}

vector<int> prevgrtelement(vector<int> v) {

    vector<int> v2(v.size());
    int mx = -1;

    for (int i = 0; i < v.size(); ++i) {
        v2[i] = mx;
        mx = max(mx, v[i]);
    }
    return v2;
}

int main() {

    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements of vector : ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> v1 = nextgrtelement(v);

    cout << "Next greatest element vector of v is : ";
    for (int ele : v1) {
        cout << ele << " ";
    }
    cout << endl;

    vector<int> v2 = prevgrtelement(v);

    cout << "Previous greatest element vector of v is : ";
    for (int ele : v2) {
        cout << ele << " ";
    }
    cout << endl;
}