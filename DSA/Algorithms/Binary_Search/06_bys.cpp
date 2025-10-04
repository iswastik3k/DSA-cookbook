// Leetcode - 852 / Peak index in mountain array.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of mountain array : ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int s = 0, e = n - 1, m;
    while (s < e) {
        m = s + (e - s) / 2;

        if (arr[m] < arr[m + 1]) {      // Peak lies to the right
            s = m + 1;
        } 
        else {                          // Peak lies to the lest or is at m.
            e = m;
        }
    }
    cout << "Peak index is : " << e << endl;
}