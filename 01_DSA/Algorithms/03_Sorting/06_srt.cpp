// Leetcode - 455 / Assign Cookies

// Approach : Two Pointers + Sorting

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, c;
    cout << "Enter total no. of childerns : ";
    cin >> n;

    vector<int> g(n);
    cout << "Enter greed factor of each child : ";
    for (int i = 0; i < n; ++i) {
        cin >> g[i];
    }

    cout << "Enter total no. of cookies : ";
    cin >> c;
    vector<int> s(c);
    cout << "Enter size of each cookie : ";
    for (int i = 0; i < c; ++i) {
        cin >> s[i];
    }

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int p1 = 0, p2 = 0, count = 0;
    while (p1 < g.size() && p2 < s.size()) {

        if (g[p1] >= s[p2]) {
            p1++;
            p2++;
            count++;
        } 
        else {
            p2++;
        }
    }
    cout << "Content childern are : " << count << endl;
}