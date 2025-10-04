// Sorting a vector.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {23, 4, 11, 91, 14, 54, 33, 29};

    sort(v.begin(), v.end());

    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;
}