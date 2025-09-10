// Input and Output a vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter number of elements in vector v : ";
    cin >> n;

    vector<int> v;

    int val;
    cout << "Enter elements : ";

    for (int i = 0; i < n; ++i) {
        cin >> val;
        v.push_back(val);
    }

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << ((i == v.size() - 1) ? "\n" : " ");
    }
}