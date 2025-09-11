// Leetcode - 118 / Pascal's Triangle

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter number of rows of pascal triangle : ";
    cin >> n;

    vector<vector<int>> pscl;

    for (int i = 0; i < n; ++i) {
        vector<int> a(i + 1);
        pscl.push_back(a);
        for (int j = 0; j <= i; ++j) {

            if ((j == 0 || j == i)) {
                pscl[i][j] = 1;
            } 
            else {
                pscl[i][j] = pscl[i - 1][j] + pscl[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << pscl[i][j] << " ";
        }
        cout << endl;
    }
}