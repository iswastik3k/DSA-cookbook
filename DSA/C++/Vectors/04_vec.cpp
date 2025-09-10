#include <iostream>
#include <vector>
using namespace std;

void change1(vector<int> v) {

    v[0] = 100;
    return;
}

void change2(vector<int> &v) {

    // Vectors are by default "pass by value", means the function will create a copy of orignal vector and all the changes made inside the function will be mad in copy of vector only not the orignal vector.
    // That's why when you will print the orignal vector after calling function, it will still be the same because changes were made in copy of vector inside that function which is deleted after function ends.
    // Therefore, we need to pass the address of our orignal vector if we want those changes to be made in our orignal vector.
    // To do that we use "&" operator with the name of vector in function parameters (like in change2).

    v[0] = 100;
    return;
}

int main() {

    vector<int> v = {2, 5, 9, 4, 7, 6};

    cout << "Orignal vector : ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    change1(v);

    cout << "Vector after passing to change1 function : ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    change2(v);

    cout << "Vector after passing to change2 function : ";
    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;
}