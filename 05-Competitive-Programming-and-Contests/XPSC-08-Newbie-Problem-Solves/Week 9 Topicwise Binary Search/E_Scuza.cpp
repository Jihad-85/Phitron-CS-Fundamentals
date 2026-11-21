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
            vector<long long> pref(n + 1, 0);
            vector<long long> pref_max(n + 1, 0);
            
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                pref[i + 1] = pref[i] + a[i]; 
                pref_max[i + 1] = max(pref_max[i], a[i]); 
            }
            
            for (int i = 0; i < q; i++) {
                long long k;
                cin >> k;
                
                int idx = upper_bound(pref_max.begin(), pref_max.end(), k) - pref_max.begin() - 1;
                
                cout << pref[idx] << (i == q - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }

    return 0;
}