// Leetcode - 1011 / Capacity to ship packages within D days.

// Binary Search on answer.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int countdays(int cap, vector<int> weights) {

    int day = 1;
    int currcap = cap;
    for (int i = 0; i < weights.size(); ++i) {

        if (currcap >= weights[i]) {
            currcap -= weights[i];
        } 
        else {
            day++;
            currcap = cap - weights[i];
        }
    }
    return day;
}

int main() {

    int n;
    cout << "Enter no. of packages : ";
    cin >> n;

    vector<int> weights(n);
    int sum = 0;
    int mx = 0;
    cout << "Enter weights of packages : ";
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
        sum += weights[i];
        mx = max(mx, weights[i]);
    }

    int days;
    cout << "Enter number of days : ";
    cin >> days;

    // Minumum capacity required to ship packages
    int s = mx;

    // Maximum capacity
    int e = sum;
    int m;
    int ans = 0;
    while (s <= e) {

        m = s + (e - s) / 2;

        int day = countdays(m, weights);

        if (day <= days) {
            ans = m;
            e = m - 1;
        } 
        else {
            s = m + 1;
        }
    }
    cout << "Min. capacity with which we can ship in D days is : " << ans << endl;
}