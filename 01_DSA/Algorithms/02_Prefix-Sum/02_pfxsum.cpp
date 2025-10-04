// Check if there is an index in given array,, such that sum of elements till that index is equal to sumof elements afer that index.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter elements : ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> pfxsum(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        pfxsum[i] = sum;
    }

    bool check = 0;
    int i = 0;
    for (i; i < n; ++i) {
        if (pfxsum[i] * 2 == pfxsum[n - 1]) {
            check = true;
            break;
        }
    }

    cout <<(check ? "Yea\n": "No\n");
}