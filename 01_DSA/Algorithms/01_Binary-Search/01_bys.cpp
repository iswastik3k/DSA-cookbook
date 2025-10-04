// Leetcode - 704 / Binary Search

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of vector : ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements : ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int key;
    cout << "Enter the target : ";
    cin >> key;

    int s = 0, e = n - 1, m;
    while (s <= e) {
        m = s + (e - s) / 2;
        if (nums[m] == key) {
            cout << "Index of key is : " << m << endl;
            return 0;
        } 
        else if (nums[m] < key) {
            s = m + 1;
        } 
        else {
            e = m - 1;
        }
    }
    cout << "Key not present \n";
}