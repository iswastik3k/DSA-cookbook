// Size and Capacity of vectors.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;      // v = {} ; size = 0 ; capacity = 0

    v.push_back(2);     // v = {2} ; size = 1 ; capacity = 1
    
    cout << "Size is : " << v.size() << endl;
    cout << "Capcity is : " << v.capacity() << endl;

    v.push_back(5);     // v = {2, 5} ; size = 2 ; capacity = 2

    cout << "Size is : " << v.size() << endl;
    cout << "Capcity is : " << v.capacity() << endl;

    v.push_back(3);     // v = {2, 5, 3} ; size = 3 ; capacity = 4

    cout << "Size is : " << v.size() << endl;
    cout << "Capcity is : " << v.capacity() << endl;

    v.push_back(7);     // v = {2, 5, 3, 7} ; size = 4 ; capacity = 4

    cout << "Size is : " << v.size() << endl;
    cout << "Capcity is : " << v.capacity() << endl;

    v.push_back(9);     // v ={2, 5, 3, 7, 9} ; size = 5 ; capacity = 8

    cout << "Size is : " << v.size() << endl;
    cout << "Capcity is : " << v.capacity() << endl;

    // If vector gets full, "It's capacity gets doubled".
    // Once capacity is set, it can not be decreased even if you delete the elements.
}