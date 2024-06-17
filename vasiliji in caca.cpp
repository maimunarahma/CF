#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;
        ll p = (n * (n + 1)) / 2;

        ll q = (k * (k + 1)) / 2;
        ll r = ((n - k) * (n - k + 1)) / 2;
        if (x < q || x > p) {
            cout << "NO" << "\n";
        } else {
            if (k == 1 and x > n) {
                cout << "NO" << '\n';
            } else {
               
                if ( (p-r<x)) {
                    cout << "NO" << '\n';
                } else {
                    cout << "YES" << '\n';
                }
            }
        }
    }
    return 0;
}
//https://codeforces.com/contest/1878/problem/C