#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long x;
            cin >> x;
            
            int msb_pos = 31 - __builtin_clz(x);
            
            long long b = 1LL << msb_pos;
    
            long long a = x ^ b; 
            
            cout << a << " " << b << "\n";
        }
    }
    
    return 0;
}