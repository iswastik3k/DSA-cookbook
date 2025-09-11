#include <iostream>
#include <vector>
using namespace std;

void mtxmulti(vector<vector<int>> &mtx1, int m, int n,
              vector<vector<int>> &mtx2, int p, int q,
              vector<vector<int>> &res) {

    int val = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < q; ++j) {
            val = 0;
            for (int k = 0; k < n; ++k) {
                val += mtx1[i][k] * mtx2[k][j];
            }
            res[i][j] = val;
        }
    }
    return;
}

int main() {

    int m, n;
    cout << "Enter rows of Matrix 1 : ";
    cin >> m;
    cout << "Enter cols of Matrix 1 : ";
    cin >> n;

    int p, q;
    cout << "Enter rows of Matrix 2 : ";
    cin >> p;
    cout << "Enter cols of Matrix 1 : ";
    cin >> q;

    if (n != p) {

        cout << "Multiplication of matrix 1 and 2 is not possible.\n";
    }

    else {

        vector<vector<int>> mtx1(m, vector<int>(n));
        vector<vector<int>> mtx2(p, vector<int>(q));

        cout << "Enter m x n elements of matrix 1 : \n";
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> mtx1[i][j];
            }
        }

        cout << "Enter p x q elements of matrix 2 : \n";
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < q; ++j) {
                cin >> mtx2[i][j];
            }
        }

        vector<vector<int>> res(m, vector<int>(q));

        mtxmulti(mtx1, m, n, mtx2, p, q, res);

        cout << "Matrix 1 x Matrix 2 : " << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < q; ++j) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}