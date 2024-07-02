#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        set<ll> s1, s2;
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;

        for(int i = 0; i < n; i++){
            if(a[i] <= k){
                s1.insert(a[i]);
            }
        }
        for(int i = 0; i < m; i++){
            if(b[i] <= k){
                s2.insert(b[i]);
            }
        }

        if(s1.size() < k/2 || s2.size() < k/2) {
            cout << "NO" << '\n';
            continue;
        }

        vector<ll> intersection, diff1, diff2;

        // Compute the intersection of two sets
        set_intersection(s1.begin(), s1.end(),
                         s2.begin(), s2.end(),
                         back_inserter(intersection));

        // Compute the difference s1 - s2
        set_difference(s1.begin(), s1.end(),
                       s2.begin(), s2.end(),
                       back_inserter(diff1));

        // Compute the difference s2 - s1
        set_difference(s2.begin(), s2.end(),
                       s1.begin(), s1.end(),
                       back_inserter(diff2));

        int requiredSize = k / 2;
        int interSize = intersection.size();
        int diff1Size = diff1.size();
        int diff2Size = diff2.size();

        // Check if the remaining intersection can make up for the shortfall
        if (interSize >= (requiredSize - diff1Size) + (requiredSize - diff2Size)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
