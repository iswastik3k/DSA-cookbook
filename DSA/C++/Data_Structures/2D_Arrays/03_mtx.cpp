// Tranform a square matrix into it's transpose.

#include <algorithm>
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of rows of matrix : ";
    cin >> n;

    int mtx[n][n];

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

    cout << "Transformed matrix is : "<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mtx[i][j] << " ";
        }
        cout << endl;
    }
}