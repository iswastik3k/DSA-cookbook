// Leetcode - 48 / Rotate Image

// Rotate the matrix by 90 deg clockwise.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cout << "Enter number of rows of matrix : ";
    cin >> n;

    vector<vector<int>> mtx(n, vector<int>(n));

    cout << "Enter n x n elements : ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mtx[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            swap(mtx[i][j], mtx[j][i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        reverse(mtx[i].begin(), mtx[i].end());
    }

    cout << "Rotated matrix is : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mtx[i][j] << " ";
        }
        cout << endl;
    }
}