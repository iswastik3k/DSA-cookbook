// Wave Form of matrix 03

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

    for (int i = 0; i < m; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; ++j) {
                cout << mtx[j][i] << " ";
            }
        } else {
            for (int j = n - 1; j >= 0; --j) {
                cout << mtx[j][i] << " ";
            }
        }
    }
}