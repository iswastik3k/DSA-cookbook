// Maximum element in array.

#include <climits>
#include <iostream>
using namespace std;

int main() {

    int arr[8] = {10, 88, 63, 45, 71, 92, 26, 54};
    int max = INT_MIN;

    for (int i = 0; i < 8; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "Maximum element in array is : " << max << endl;
}