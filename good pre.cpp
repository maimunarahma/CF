#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;  
    cin >> t; 
    while(t--) {
        int n; 
        cin >> n;
        vector<ll>a(n);
        for(auto &i: a) cin>>i;
        vector<vector<ll>>v(n);
        v[0].push_back(a[0]);

        for(int i=1;i<n;i++){
           v[i] = v[i-1];
            v[i].push_back(a[i]);

        }
        ll sm=0;
        if(v[0][0]==0) sm=1;
        for(int i=1;i<n;i++){
            ll mx,total=0;
                //cout<<v[i][j]<<" ";
                mx=*max_element(v[i].begin(),v[i].end());
                total=accumulate(v[i].begin(),v[i].end(),0ll);
                if(total-mx==mx) sm++;
      
           // cout<<'\n';
        }
        cout<<sm<<'\n';
    }}
    //https://codeforces.com/contest/1985/problem/C