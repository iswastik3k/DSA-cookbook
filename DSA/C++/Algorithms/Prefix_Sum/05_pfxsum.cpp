// Leetcode - 2483 / Minimum Penalty for a shop.

#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    string str;
    cout << "Enter the string (capital) : ";
    cin >> str;
    int n = str.length();

    vector<int> penalty1(n + 1, 0);
    int p = 0;

    // Calculate penalty due to No customers visisted.
    for (int i = 0; i < n; ++i) {
        penalty1[i] = p;
        if (str[i] == 'N') {
            ++p;
        }
    }
    penalty1[n] = p;

    // Calculate penalty due to early closing
    vector<int> penalty2(n + 1, 0);
    p = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (str[i] == 'Y') {
            ++p;
        }
        penalty2[i] = p;
    }

    // Caclculate Total penalty.
    vector<int> totalpenalty(n + 1);
    for (int i = 0; i <= n; ++i) {
        totalpenalty[i] = penalty1[i] + penalty2[i];
    }
    int minp = INT_MAX, idx = -1;
    for (int i = 0; i <= n; i++) {
        if (totalpenalty[i] < minp) {
            minp = totalpenalty[i];
            idx = i;
        }
    }

    cout << "Best to close shop at " << idx << " hr." << endl;
}