// Find the string representing largest number in an string array.

#include <climits>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string arr[] = {"237", "0043", "9360", "0495", "0005", "27"};

    int max = INT_MIN;
    string mxstr = arr[0];
    for (string ele : arr) {
        if (stoi(ele) > max) {
            max = stoi(ele);
            mxstr = ele;
        }
    }

    cout << "Maximum value in string is : " << mxstr << endl;
}