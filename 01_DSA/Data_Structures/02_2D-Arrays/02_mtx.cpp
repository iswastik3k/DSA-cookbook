// Leetcode - 867 / Transpose Matrix

// Store transpose of a matrix in a new matrix and print it.

#include <iostream>
using namespace std;

int main() {

    int n, m;
    cout << "Enter number of rows : ";
    cin >> n;
    cout << "Emter number of columns : ";
    cin >> m;

    int mtx[n][m];
    cout << "Enter n x m elements : ";

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mtx[i][j];
        }
    }

    int mtx2[m][n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            mtx2[i][j] = mtx[j][i];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mtx2[i][j];
        }
        cout << endl;
    }
}