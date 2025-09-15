// First occurence in Sorted array.

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

    int s = 0, e = n - 1, m, ans = -1;
    while (s <= e) {
        m = s + (e - s) / 2;
        if (nums[m] == key) {
            ans = m;
            e = m - 1;
        } 
        else if (nums[m] > key) {
            e = m - 1;
        } 
        else {
            s = m + 1;
        }
    }
    if (ans == -1) {
        cout << "Not Present";
        return 0;
    }
    cout << "First occurence of key is : " << ans << endl;
}