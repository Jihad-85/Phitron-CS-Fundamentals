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
        ll k;
        cin >> n >> k;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];
        vector<long long> h(n+1);
        for(int i=1;i<=n;i++) cin >> h[i];

        int ans = 0;
        int i = 1;
        while(i <= n) {
            
            int L = i, R = i;
            while(R < n && (h[R] % h[R+1] == 0)) R++;
            
            int left = L;
            long long sum = 0;
            for(int right = L; right <= R; ++right) {
                sum += a[right];
                while(left <= right && sum > k) {
                    sum -= a[left];
                    left++;
                }
                ans = max(ans, right - left + 1);
            }
            i = R + 1;
        }

        cout << ans << '\n';
    }
    return 0;
}
