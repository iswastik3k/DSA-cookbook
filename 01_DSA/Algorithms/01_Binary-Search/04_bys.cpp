// Find smallest missing non-negative element in an array.

// Approach : If there is no element missing till ith index then, i = nums[i].

//            If missing element is before ith index, then i < nums[i]

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {0, 1, 3, 4, 6, 7, 8, 9, 11};

    int s = 0, e = nums.size() - 1, m;
    while (s <= e) {
        m = s + (e - s) / 2;
        if (nums[m] > m) {
            e = m - 1;
        } 
        else {
            s = m + 1;
        }
    }
    cout << "Smallest missing non-negative is : " << s << endl;
}