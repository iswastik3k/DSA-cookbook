// Maze Path

// Count number of unique ways to reach from cell (1,1) to cell (m.n) of an m x n grid.

// At each position, you can go down or right.

#include <iostream>
using namespace std;

int path(int m, int n) {

    if (m < 0 || n < 0) {
        return 0;
    }
    if (m == 1 && n == 1) {
        return 1;
    }

    // return (paths if i go down) + (paths if i go right)

    return path(m - 1, n) + path(m, n - 1);
}

int main() {

    int m, n;
    cout << "Enter number of rows in maze : ";
    cin >> m;
    cout << "Enter number of columns in maze : ";
    cin >> n;

    cout << "Number of unique paths to reach exit ([m][n]) is : " << path(m, n) << endl;
}