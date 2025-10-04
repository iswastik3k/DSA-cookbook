// Maze Path - II

// Print unique ways to reach from cell (1,1) to cell (m.n) of an m x n grid.

// At each position, you can go down or right.

#include <iostream>
using namespace std;

void ppath(int m, int n, string path) {

    if (m < 0 || n < 0) {
        return;
    }
    if (m == 1 && n == 1) {
        cout << path << endl;
        return;
    }

    // return (paths if i go down) + (paths if i go right)

    ppath(m - 1, n, path + 'D');
    ppath(m, n - 1, path + 'R');
}

int main() {

    int m, n;
    cout << "Enter number of rows in maze : ";
    cin >> m;
    cout << "Enter number of columns in maze : ";
    cin >> n;

    string s = "";
    cout << "Unique paths to reach exit ([m][n]) are: \n";
    ppath(m, n, s);
}