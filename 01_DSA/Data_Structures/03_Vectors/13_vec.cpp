// Leetcode - 88 / Merge two sorted arrays.

// Approach : Maintain 3 pointers "p1", "p2" and "p3".
//            One on last elemenet of v1, one on last element of v2 and one on last index of v2.
//            Compare elements at "p1" and "p2" and put the larger of them at "p3".
//            Decrement pointers accordingly.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1;

    int n1;
    cout << "Enter size of vector v1 : ";
    cin >> n1;

    int val;
    cout << "Enter elements of vector v1 : ";
    for (int i = 0; i < n1; ++i) {
        cin >> val;
        v1.push_back(val);
    }

    int n2;
    cout << "Enter size of vector v2 : ";
    cin >> n2;

    vector<int> v2(n1 + n2, 0);

    cout << "Enter elements of vector v2 : ";
    for (int i = 0; i < n2; ++i) {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.begin() + n2);

    int p1 = n1 - 1, p2 = n2 - 1, p3 = n1 + n2 - 1;

    while (p1 >= 0 && p2 >= 0) {
        if (v1[p1] > v2[p2]) {
            v2[p3--] = v1[p1--];
        } 
        else {
            v2[p3--] = v2[p2--];
        }
    }

    while (p3 >= 0) {
        if (p1 >= 0) {
            v2[p3--] = v1[p1--];
        } 
        else {
            v2[p3--] = v1[p2--];
        }
    }

    for (int ele : v2) {
        cout << ele << " ";
    }
}