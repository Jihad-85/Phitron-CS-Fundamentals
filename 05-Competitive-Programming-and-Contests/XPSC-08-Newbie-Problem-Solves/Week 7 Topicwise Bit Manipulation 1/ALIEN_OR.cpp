#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            int n, k;
            cin >> n >> k;
        
            vector<bool> has_basis(k, false);
            
            for (int i = 0; i < n; i++) {
                string s;
                cin >> s;
                
                int one_count = 0;
                int one_pos = -1;
        
                for (int j = 0; j < k; j++) {
                    if (s[j] == '1') {
                        one_count++;
                        one_pos = j;
                    }
                }
                
                if (one_count == 1) {
                    has_basis[one_pos] = true;
                }
            }
            
            bool possible = true;
            for (int i = 0; i < k; i++) {
                if (!has_basis[i]) {
                    possible = false;
                    break;
                }
            }
            
            if (possible) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}