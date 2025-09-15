// Leetcode - 69 / Sqrt(x)

#include <iostream>
using namespace std;

int main() {

    int x;
    cout << "Enter x : ";
    cin >> x;

    long long int s = 0, e = x, m;
    while (s <= e) {
        m = s + (e - s) / 2;

        if (m * m == x) {
            cout << "Sqrt(x) is : " << m << endl;
            return 0;
        } 
        else if (m * m > x) {
            e = m - 1;
        } 
        else {
            s = m + 1;
        }
    }
    cout << "Sqrt(x) is : " << e << endl;
}