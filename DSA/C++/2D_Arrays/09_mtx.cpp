// Leetcode - 54 / Spiral Form

// Leetcode - 59 / Part 2

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

    int rs = 0, re = n - 1, cs = 0, ce = m - 1;

    while (rs <= re && cs <= ce) {

        for (int i = cs; i <= ce; ++i) {
            cout << mtx[rs][i] << " ";
        }
        ++rs;

        for (int i = rs; i <= re; ++i) {
            cout << mtx[i][ce] << " ";
        }
        --ce;
        if (rs <= re && cs <= ce) {
            for (int i = ce; i >= cs; --i) {
                cout << mtx[re][i] << " ";
            }
            --re;
        }
        if (rs <= re && cs <= ce) {
            for (int i = re; i >= rs; --i) {
                cout << mtx[i][cs] << " ";
            }
            ++cs;
        }
    }
}