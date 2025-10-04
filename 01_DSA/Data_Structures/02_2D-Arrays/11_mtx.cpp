// Leetcode - 861 / Score after flipping matrix.

// Logic : (1 0 0 0 0 0) > (0 1 1 1 1 1) - MSB has most impact on number

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> grid(3, vector<int>(4));

    cout << "Enter 3 four digits binary numbers : \n";

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> grid[i][j];
        }
    }

    // Check if MSB is 0, if yes - Flip that row.

    for (int i = 0; i < 3; ++i) {
        if (grid[i][0] == 0) {
            for (int j = 0; j < 4; ++j) {
                grid[i][j] ^= 1;
            }
        }
    }

    // Column check, If 0s > 1s - Flip that col (except MSB col)

    int c0, c1;

    for (int i = 0; i < 4; ++i) {
        c0 = 0, c1 = 0;
        for (int j = 0; j < 3; ++j) {
            if (grid[j][i] == 1) {
                ++c1;
            } else {
                ++c0;
            }
        }

        if (c1 < c0) {
            for (int j = 0; j < 3; ++j) {
                grid[j][i] ^= 1;
            }
        }
    }

    // Print Result

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    int res = 0, val, pow;
    for (int i = 0; i < 3; ++i) {
        val = 0, pow = 1;
        for (int j = 3; j >= 0; --j) {
            val += grid[i][j] * pow;
            pow *= 2;
        }
        res += val;
    }
    cout << res << endl;
}