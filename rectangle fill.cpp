#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;  
    cin >> t; 
    while(t--) {
        int n, m;  
        cin >> n >> m;
        vector<vector<char>> ch(n, vector<char>(m)); // Using vector for safety

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> ch[i][j];
            }
        }

        if(n == 1) {
            if(m == 1) {
                cout << "YES" << '\n';
            } else {
                int ct = 0;
                for(int j = 0; j < m - 1; j++) {
                    if(ch[0][j] == ch[0][j + 1]) {
                        ct++;
                    }
                }
                if(ct == m - 1) {
                    cout << "YES" << '\n';
                } else {
                    cout << "NO" << '\n';
                }
            }
        } else {
            int p = -1;

            for(int i = 0; i < n - 1; i++) {
                if(ch[i][0] != ch[i + 1][0]) {
                    p = i+1 ;
                    break;
                }
            }
if(p==-1) cout<<"YES"<<'\n';
else{
            int x = 0;
            for(int i = 0; i < p; i++) {
                for(int j = 0; j < m - 1; j++) {
                    if(ch[i][j] == ch[i][j + 1]) {
                        x++;
                    }
                }
            }
    // cout<<p;
            int y = 0;
            for(int i = p; i < n; i++) {
                for(int j = 0; j < m - 1; j++) {
                    if(ch[i][j] == ch[i][j + 1]) {
                        y++;
                    }
                }
            }

            if((x == p * (m - 1) && y == (n - p) * (m - 1))) {
                cout << "NO" << '\n';
            } else {
                cout << "YES" << '\n';
            }
        }}
    }
    return 0;
}
