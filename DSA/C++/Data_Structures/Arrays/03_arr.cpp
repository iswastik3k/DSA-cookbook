// Memory allocation in arrays is continuous.

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {2, 5, 1, 9, 7};

    for (int i = 0; i < 5; ++i) {
        cout << &arr[i] << endl;
    }

    cout << arr << " " << &arr[0] << endl; // arr = &arr[0]
}