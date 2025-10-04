// Array input and output.

#include <iostream>
using namespace std;

int main() {

    int arr[10];
    cout << "Enter 10 numbers : ";

    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}