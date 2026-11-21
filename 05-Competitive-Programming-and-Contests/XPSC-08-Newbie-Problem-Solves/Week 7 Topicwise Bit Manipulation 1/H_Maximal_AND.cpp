#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        long long ans = 0;
      
        for (int b = 30; b >= 0; --b) {
            int cnt = 0;
            for (int i = 0; i < n; ++i) {
                if (((a[i] >> b) & 1) == 0) ++cnt;
            }
            if (cnt <= k) {
                ans |= (1LL << b);
                k -= cnt;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
