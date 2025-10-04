// Print array using recursion.

#include <iostream>
using namespace std;

void printarr(int arr[], int n) {

    // Base case
    if (n < 0) {
        return;
    }

    printarr(arr, n - 1);
    cout << arr[n] << " ";
}

int main() {

    int arr[] = {5, 12, 49, 20, 19, 74, 36, 55, 61};
    int n = sizeof(arr) / sizeof(arr[0]);

    printarr(arr, n - 1);
    cout << endl;
}