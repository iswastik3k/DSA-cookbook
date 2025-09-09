// size and sizeof operator.

#include <iostream>
using namespace std;

int main() {

    int arr[]={1, 2, 5, 8, 9, 6, 3, 4, 7,};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
}