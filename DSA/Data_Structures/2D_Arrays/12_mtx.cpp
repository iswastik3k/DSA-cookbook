// Leetcode - 240 / Search a 2D Matrix II

// Write an efficient algorithm that searches a target in an m x n matrix.

// Rows and columns of matrix are sorted from L->R and T->B.

// Matrix has no duplicates.

// Approach : "Sorted Matrix" both row wise and column wise, Use this.

//            Start from such a corner of grid where you have choice depending on if that frid element is greater or less than key.

//            Such corners are Bottom left and Top right.

//            For top right, you can move down if grid element is less than key and left if grid element is greater than key.

//            But such choice wont exist if you start from Top Left or Bottom Right.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int m, n;
    cout << "Enter number of rows : ";
    cin >> m;
    cout << "Enter number of columns : ";
    cin >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    cout << "Enter m x n elements : \n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    int key;
    cout << "Enter target element : ";
    cin >> key;

    int r = 0, c = n - 1;
    bool flag = false;

    while (r < m && c >= 0) {
        if (grid[r][c] == key) {
            flag = true;
            break;
        } 
        else if (grid[r][c] > key) {
            --c;
        } 
        else {
            ++r;
        }
    }
    cout << ((flag) ? "Element is Present \n" : "Not Found \n");
}