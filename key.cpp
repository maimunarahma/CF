#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n=s.size();
    reverse(s.begin(),s.end());
    int x=0,y=0;
    string p;
        for(int i=0;i<n;i++){
            if(s[i]>='a' and s[i]<='z'){
                if(s[i]=='b')
                x++;
                else{
                    if(x>0)
                    x--;
                    else 
                    p+=s[i];
                }
            }
            if(s[i]>='A' and s[i]<='Z'){
                if(s[i]=='B')
                 y++;
                 else{
                    if(y>0)
                     y--;
                     else p+=s[i];
                 }
            }
        } reverse(p.begin(),p.end());
        cout<<p<<'\n';
    }}
