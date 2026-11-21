#include<bits/stdc++.h>
using namespace std;
 

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long g1 = 0;
    long long g2 = 0;
    
    for (int i = 0; i < n; i += 2) {
        g1 = gcd(g1, a[i]);
    }
    for (int i = 1; i < n; i += 2) {
        g2 = gcd(g2, a[i]);
    }

    bool ok1 = true;
    for (int i = 1; i < n; i += 2) {
        if (a[i] % g1 == 0) {
            ok1 = false;
            break;
        }
    }

    bool ok2 = true;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % g2 == 0) {
            ok2 = false;
            break;
        }
    }

    if (ok1) {
        cout << g1 << "\n";
    } else if (ok2) {
        cout << g2 << "\n";
    } else {
        cout << 0 << "\n";
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