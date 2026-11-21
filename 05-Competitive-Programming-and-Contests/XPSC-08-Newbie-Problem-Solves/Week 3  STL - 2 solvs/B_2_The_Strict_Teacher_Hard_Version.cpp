#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n;
    int m, q;
    if (!(cin >> n >> m >> q)) return;

    vector<long long> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < q; ++i) {
        long long a;
        cin >> a;

        if (a < b[0]) {
      
            cout << b[0] - 1 << "\n";
        } else if (a > b[m - 1]) {
       
            cout << n - b[m - 1] << "\n";
        } else {
          
            auto it = upper_bound(b.begin(), b.end(), a);
            long long right_teacher = *it;
            long long left_teacher = *prev(it);
            
            cout << (right_teacher - left_teacher) / 2 << "\n";
        }
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