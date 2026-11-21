#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            long long l, r;
            cin >> n >> l >> r;

            vector<long long> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            sort(a.begin(), a.end());

            long long ans = 0;
            for (int i = 0; i < n; i++) {
                auto low = lower_bound(a.begin() + i + 1, a.end(), l - a[i]);
                auto high = upper_bound(a.begin() + i + 1, a.end(), r - a[i]);
                ans += (high - low);
            }

            cout << ans << "\n";
        }
    }

    return 0;
}