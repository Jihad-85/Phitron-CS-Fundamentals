#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n+1), pref(n+1,0);
        for(int i=1;i<=n;i++){
            cin >> a[i];
            pref[i] = pref[i-1] + a[i];
        }
        string s;
        cin >> s;
        s = " " + s;  
        int l = 1, r = n;
        ll ans = 0;
        
        while(l < r){
            while(l < r && s[l] != 'L') ++l;
            while(l < r && s[r] != 'R') --r;
            if(l < r){
                ans += pref[r] - pref[l-1];
                ++l; --r;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
