#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            int n, q;
            cin >> n >> q;
            
            vector<long long> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            sort(a.rbegin(), a.rend());
            
            vector<long long> pref(n);
            pref[0] = a[0];
            for (int i = 1; i < n; i++) {
                pref[i] = pref[i - 1] + a[i];
            }
            
            for (int i = 0; i < q; i++) {
                long long x;
                cin >> x;
                
                auto it = lower_bound(pref.begin(), pref.end(), x);
                if (it == pref.end()) {
                    cout << -1 << "\n";
                } else {
                    cout << (it - pref.begin() + 1) << "\n";
                }
            }
        }
    }

    return 0;
}