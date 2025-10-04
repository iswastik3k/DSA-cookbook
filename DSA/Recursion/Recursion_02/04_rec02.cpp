// Print maximum in array using rrecursion.

#include <climits>
#include <iostream>
using namespace std;

int maxinarr(int arr[], int n) {

    // Base case
    if (n < 0) {
        return INT_MIN;
    }

    return max(maxinarr(arr, n - 1), arr[n]);
}

int main() {

    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Maximum in array is : " << maxinarr(arr, n - 1) << endl;
}