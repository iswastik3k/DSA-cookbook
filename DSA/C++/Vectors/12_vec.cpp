// Leetcode - 75 / Sort Colors

// Sort the array of 0s, 1S and 2s.

// Alogorithm used : Dutch Flag Algorithm

// Approach : Maintain 3 pointers "s" , "i" and "e".
//            "i" will iterate.
//            "s" will keep track of last 0.
//            "e" will keep track of last 2.
//            Put conditions on iterator "i".

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    int n;
    cout << "Enter size of vector v : ";
    cin >> n;

    int val;
    cout << "Enter elements (0, 1 or 2) of vector v : ";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        v.push_back(val);
    }

    int s = 0, i = 0, e = n - 1;

    while (i <= e) {

        if (v[i] == 0) {
            swap(v[i++], v[s++]);
        } 
        else if (v[i] == 2) {
            swap(v[i], v[e--]);
        } 
        else {
            ++i;
        }
    }

    cout << "Sorted array is : ";
    for (int ele : v) {
        cout << ele;
    }
    cout << endl;
}