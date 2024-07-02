#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;  
    cin >> t; 
    while(t--) {
        int n; 
        cin >> n;
        vector<ll>a(n),b;
        for(auto &i: a) cin>>i;
    //    if(a[0]<0) b[0]=abs(a[0]);
    //    if(a[0]==1) b[0]=0;
 ll mex=0;
          for(int i=0;i<n;i++){
  if(a[i]>=0) {
    b.push_back(mex); 
    mex++;
  }
  else b.push_back(mex-a[i]);
 }
 for(auto &i: b) cout<<i<<" ";
 cout<<'\n';
    }}