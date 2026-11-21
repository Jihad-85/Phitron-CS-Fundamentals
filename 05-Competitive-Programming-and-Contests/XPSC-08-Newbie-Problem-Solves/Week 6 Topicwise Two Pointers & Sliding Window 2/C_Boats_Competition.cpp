#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> w(n);
        for(int i=0;i<n;i++) cin >> w[i];

        vector<int> cnt(n+1, 0);
        for(int x : w) cnt[x]++;

        int best = 0;

        for(int s = 2; s <= 2*n; ++s) {
            int cur = 0;

            for(int x = 1; x <= n; ++x) {
                int y = s - x;
                if(y < 1 || y > n) continue;
                if(x < y) {
                    cur += min(cnt[x], cnt[y]);
                } else if(x == y) {
                    cur += cnt[x] / 2;
                }
            }
            best = max(best, cur);
        }

        cout << best << '\n';
    }
    return 0;
}
