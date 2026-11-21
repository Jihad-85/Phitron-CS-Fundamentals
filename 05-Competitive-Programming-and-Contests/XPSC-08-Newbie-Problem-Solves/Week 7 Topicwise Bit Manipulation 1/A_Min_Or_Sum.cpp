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
            
            long long min_sum = 0; 
            
            for (int i = 0; i < n; i++) {
                long long a;
                cin >> a;
                min_sum |= a;
            }
            
            cout << min_sum << "\n";
        }
    }
    
    return 0;
}