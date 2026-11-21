#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    int xor_a = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        xor_a ^= a;
    }
    
    int or_b = 0;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        or_b |= b;
    }
    
    
    if (n % 2 == 0) {
        
        int min_val = xor_a & ~or_b;
       
        int max_val = xor_a;
        cout << min_val << " " << max_val << "\n";
    } else {
       
        int min_val = xor_a;
        int max_val = xor_a | or_b;
        cout << min_val << " " << max_val << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}