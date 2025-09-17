// Return the "last" index of an element x in vector.

// Optimized method : Because we want the "last" index of element instead of starting from 1st element and traversing the entire vector, We will start searching from last index and break the loop as soon as we get first occurance of x from last.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {4, 5, 9, 7, 1, 2, 5, 1};

    int x = 5;

    for (int i = v.size() - 1; i >= 0; --i) {
        if (v[i] == x) {
            cout << i << endl;
            break;
        }
    }
}