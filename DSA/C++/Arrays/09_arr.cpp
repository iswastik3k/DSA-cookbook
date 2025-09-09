// Passing arrays to functions.

#include <iostream>
using namespace std;

void change(int a[]) {

    // Arrays are by default "call by refernece" means you're sending your orignal array to the function not a copy of it.

    a[0] = 100;
    return;
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Array before function call : ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << ((i == 4) ? "\n" : " ");
    }

    change(arr);

    cout << "Array after function call : ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << ((i == 4) ? "\n" : " ");
    }
}