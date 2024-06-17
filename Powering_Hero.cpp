#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        priority_queue<ll> pq;
        ll total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                pq.push(a[i]);
            } else {
                if (!pq.empty()) {
                    total += pq.top();
                    pq.pop();
                }
            }
        }

        cout << total << '\n';
    }
   
}