// Leetcode - 2187 / Minimum time to complete trips.

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int counttrips(vector<int> time, int m) {
    int trips = 0;
    for (int i = 0; i < time.size(); ++i) {
        trips += m / time[i];
    }

    return trips;
}

int main() {

    int n;
    cout << "Enter no. of buses : ";
    cin >> n;

    vector<int> time(n);
    int mx = 0, mn = INT_MAX;
    cout << "Enter time taken by each bus for 1 trip : ";
    for (int i = 0; i < n; ++i) {
        cin >> time[i];
        mx = max(mx, time[i]);
    }

    int totaltrips;
    cout << "Enter no. of trips to complete : ";
    cin >> totaltrips;

    // Min. & Max. time to make total trips
    int s = 1, e = mx * totaltrips, m, ans;

    while (s <= e) {
        m = s + (e - s) / 2;

        int trips = counttrips(time, m);

        if (trips < totaltrips) {
            s = m + 1;
        } 
        else {
            ans = m;
            e = m - 1;
        }
    }
    cout << "Min. time requred to make total trips is : " << ans << endl;
}