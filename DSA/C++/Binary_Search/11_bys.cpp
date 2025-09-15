// Leetcode - 875 / Koko Eating Bananas

// Binary Search on answer.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int counthr(vector<int> piles, int speed) {

    int hr = 0;
    for (int i = 0; i < piles.size(); ++i) {
        if (piles[i] > speed) {
            // Ceil division quick method
            // ceil (a/b) -> a+(b-1) / b
            hr += (piles[i] + (speed - 1)) / speed;
        } 
        else {
            ++hr;
        }
    }
    return hr;
}

int main() {

    int n;
    cout << "Enter the number of piles : ";
    cin >> n;

    vector<int> piles(n);

    cout << "Enter no. of bananas in piles : ";
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        cin >> piles[i];
        mx = max(mx, piles[i]);
    }

    int hrs;
    cout << "Enter no. of hours : ";
    cin >> hrs;

    int s = 1, e = mx, m, ans;

    while (s <= e) {
        m = s + (e - s) / 2;

        int hr = counthr(piles, m);

        if (hr <= hrs) {
            ans = m;
            e = m - 1;
        } 
        else {
            s = m + 1;
        }
    }
    cout << "Min. speed such that koko can finish bananas in hrs is : " << ans << endl;
}