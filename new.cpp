#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s, p;  
        cin >> s >> p;

        // Case 1: If s and p are the same
        if (s == p) {
            cout << s.size() << '\n';
        } 
        // Case 2: If s is larger than or equal to p
        else if (s.size() >= p.size()) {
            int n = s.size(), m = p.size();

            // Check if p is a substring of s
            if (s.find(p) != string::npos) {
                cout << n << '\n';
            } 
            // Otherwise, attempt to build q based on matching characters
            else {  
                vector<int> q(m, 0); // Initialize q as a vector of zeros
                int j = 0; // Pointer for p

                // Iterate through characters of s and p
                for (int i = 0; i < n && j < m; i++) {
                    if (s[i] == p[j]) {
                        q[j] = 1; // Mark that character p[j] exists in s in order
                        j++; // Move pointer for p when there's a match
                    }
                }

                // Output the contents of q
                for (const auto& val : q) {
                    cout << val;
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
