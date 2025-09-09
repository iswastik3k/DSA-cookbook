// Array name as pointer.

#include <iostream>
using namespace std;

int main() {

    int arr[8] = {23, 59, 64, 15, 47, 18, 71, 92};

    // The name of any array "arr" is actually a pointer, containing the adrress of the element at 0th index of that array. 
    // Therefore you can store name of any array "arr" in a pointer datatype. 
    // int* ptr = arr = &arr[0] 
    // That pointer has full capability to modify, update, print our entire array, because "array elements are stored continuously in memory, address of 1 element means address of entire array".
    // If a integer type pointer "ptr" has address stored as "x", when we do "ptr++" it won't make it's address "x+1" it will make it "x+4", because integer takes 4 bytes in memory.

    int* ptr = arr;

    for (int i = 0; i < 8; ++i) {
        cout << *ptr++ << ((i == 7) ? "\n" : " ");
    }

    // After our loop has run the pointer "ptr" is lost and has some random address. Therfore reinitiate it after using.

    ptr=arr;
}