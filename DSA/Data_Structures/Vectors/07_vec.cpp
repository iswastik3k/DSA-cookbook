// Write a program to copy the elements of a vector in another vector in reverse order.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1;

    int n;
    cout << "Enter size of vector v1 : ";
    cin >> n;

    cout << "Enter elements of vector v1 : ";
    int val;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        v1.push_back(val);
    }

    vector<int> v2(n);  // Reverse vector

    for (int i = 0; i < n; ++i) {
        v2[i] = v1[n - i - 1];
    }

    cout << "Reverse of vector v1 is : ";
    for (int ele : v2) {
        cout << ele << " ";
    }
    cout << endl;
}