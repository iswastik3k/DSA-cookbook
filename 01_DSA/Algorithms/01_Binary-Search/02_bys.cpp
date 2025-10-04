// Lower and Upper bounds.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter size of vector : ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements : ";

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int key;
    cout << "Enter key : ";
    cin >> key;

    int s = 0, e = n - 1, m;
    while (s <= e) {
        m = s + (e - s) / 2;
        if (nums[m] == key) {
            cout << "Lower bound is : " << nums[m] << endl;
            cout << "Upper bound is : " << nums[m] << endl;
            return 0;
        } 
        else if (nums[m] < key) {
            s = m + 1;
        } 
        else {
            e = m - 1;
        }
    }
    cout << "Lower bound is : " << nums[e] << endl;
    cout << "Upper bound is : " << nums[s] << endl;
}