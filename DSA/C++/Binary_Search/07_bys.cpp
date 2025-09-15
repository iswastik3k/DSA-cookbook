// Leetcode - 33 / Search in rotated sorted array.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of rotated sorted array : ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter target : ";
    cin >> key;

    int s = 0, e = n - 1, m;
    while (s <= e) {
        m = s + (e - s) / 2;

        if (arr[m] == key) {
            cout << "Index of key is : " << m << endl;
            return 0;
        }

        // Left Half Sorted
        else if (arr[m] >= arr[s]) {
            if (key < arr[m] && key >= arr[s]) {
                e = m - 1;
            } 
            else {
                s = m + 1;
            }
        }
        // Right Half Sorted
        else {
            if (key > arr[m] && key <= arr[e]) {
                s = m + 1;
            } 
            else {
                e = m - 1;
            }
        }
    }
    cout << "Key not present \n";
}