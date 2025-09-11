// 2D Array Basics

#include <iostream>
using namespace std;

int main() {

    int n, m;
    cout << "Enter number of rows : ";
    cin >> n;
    cout << "Enter number of columns : ";
    cin >> m;

    int mtx[n][m]; // 3 x 4 matrix

    cout << "Enter m x n elements : ";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mtx[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << mtx[i][j] << ((j == m - 1) ? "\n" : " ");
        }
    }
}