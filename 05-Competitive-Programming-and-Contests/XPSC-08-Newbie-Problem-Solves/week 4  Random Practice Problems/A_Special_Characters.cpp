#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;

            if (n % 2 != 0) {
                cout << "NO\n";
            } 
    
            else {
                cout << "YES\n";
                
                string ans = "";
                char current_char = 'A';
            
                for (int i = 0; i < n / 2; i++) {
                    ans += current_char;
                    ans += current_char;
 
                    current_char++; 
                }
                
                cout << ans << "\n";
            }
        }
    }
    return 0;
}