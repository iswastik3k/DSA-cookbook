// Wave Form of matrix 02

#include <iostream>
using namespace std;

int main() {

    int n, m;
    cout << "Enter number of rows : ";
    cin >> n;
    cout << "Emter number of columns : ";
    cin >> m;

    int mtx[n][m];
    cout << "Enter n x m elements : " << endl;
    ;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mtx[i][j];
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                cout << mtx[i][j] << " ";
            }
        } else {
            for (int j = m - 1; j >= 0; --j) {
                cout << mtx[i][j] << " ";
            }
        }
    }
}