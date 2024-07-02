#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; cin>>n;
        vector<ll>a(n),v;
        for(auto &i:a) cin>>i;
        int p=-1;
        if(is_sorted(a.begin(),a.end())) {
            for(int i=0;i<n;i++)
            cout<<1;
            cout<<'\n';
        }
        else{
        for(int i=0;i<n-1;i++){

            if(a[i]>a[i+1]){
               cout<<1;
                p=i+1; break;
            }
            else cout<<1;
        }
        ll x=a[0],y=a[p];
        int fr=0;
        if(a[p]<=x ) {
            cout<<1; fr=1;}
        else cout<<0;
       // cout<<x<<y;
  for(int i=p+1;i<n;i++){
    if(  a[i]<=x and a[i]>=y and fr==1){
    cout<<1;
    y=a[i];}
     else if(  a[i]<=x  and fr==0)
        cout<<1;
   // if(a[i]<y) cout<<0;
else
     cout<<0;
  }
  cout<<'\n';
    }}
}