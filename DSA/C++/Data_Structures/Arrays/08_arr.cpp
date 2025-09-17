// Number of elements greater than x in array.

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array : ";

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter x : ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > x) {
            ++count;
        }
    }

    cout << "Number of elements greater than x in array is : " << count << endl;
}