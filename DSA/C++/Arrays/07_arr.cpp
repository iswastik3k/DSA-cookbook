// Second maximum element in array.

#include <climits>
#include <iostream>
using namespace std;

int main() {

    int arr[10] = {20, 31, 14, 19, 27, 45, 64, 24, 86, 97};
    int max = INT_MIN, smax = INT_MIN;

    for (int i = 0; i < 10; ++i) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        }
        if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    cout << "Second maximum element in array is : " << smax << endl;
}

// You can also solve this with two loops.