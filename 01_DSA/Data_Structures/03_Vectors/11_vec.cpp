// Sort the array of 0s and 1s.

// Optimized method : Two pointers

// Approach : Maintain 2 pointers "z" and "i".
//            "z" will keep track of trailing zerores. 
//            Maintain it's position such that all elements before index "z" must be 0.
//            "i" will iterate through entire array.
//            When element at index "i" is 0, Swap it with element at index "z" and do ++z.
//            Else keep moving "i" till the whole array is covered.
//            This will push all 0s before pointer "Z", and 1s will be pushed at end automatically.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    int n;
    cout << "Enter size of vector v : ";
    cin >> n;

    int val;
    cout << "Enter elements (0 or 1) of vector v : ";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        v.push_back(val);
    }

    int s = 0, e = n - 1;
    while (s <= e) {

        if (v[s] == 1 && v[e] == 0) {
            v[s++] = 0;
            v[e--] = 1;
        }
        if (v[s] == 0) {
            ++s;
        }
        if (v[e] == 1) {
            --e;
        }
    }

    cout << "Vector with 0s in start and 1s in end is : ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;
}