#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            long long min_max_val = -1; 
            
            for (int i = 0; i < n; i++) {
                long long a;
                cin >> a;
                
                if (i == 0) {
                    min_max_val = a;
                } else {
                    min_max_val &= a;
                }
            }
            
            cout << min_max_val << "\n";
        }
    }
    
    return 0;
}