// Linear Search

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array : ";

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element : ";
    cin >> target;

    for (int i = 0; i < n; ++i) {
        if (target == arr[i]) {
            cout << "Index of traget is : " << i << endl;
            return 0; // End the program as soon as target is found.
        }
    }

    cout << "Target is not present" << endl; // If loop has ended and program is still running, that means target is not present in array and return 0 statement in loop did not execute.
}