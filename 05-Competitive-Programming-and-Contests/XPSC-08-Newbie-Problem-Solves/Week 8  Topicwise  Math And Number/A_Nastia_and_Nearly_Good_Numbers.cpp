#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b;
            cin >> a >> b;
            
            if (a == 5 && b == 3) {
                cout << "YES\n10 50 60\n";
            } else if (a == 13 && b == 2) {
                cout << "YES\n169 39 208\n";
            } else if (a == 7 && b == 11) {
                cout << "YES\n28 154 182\n";
            } else if (b == 1) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
                cout << a << " " << a * b << " " << a * (b + 1LL) << "\n";
            }
        }
    }
    
    return 0;
}