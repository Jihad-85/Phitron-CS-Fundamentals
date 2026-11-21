#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<int> a(n);
    long long current_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        current_sum += a[i];
    }
    
    long long total_sum = (long long)n * (n + 1) / 2;
    int mex = total_sum - current_sum;
    

    vector<int> E(n + 1);
    E[0] = mex;
    for (int i = 0; i < n; i++) {
        E[i + 1] = a[i];
    }
    
    int m = n + 1;
    int k_mod = k % m;
    

    for (int i = 1; i <= n; i++) {
        cout << E[(i - k_mod + m) % m] << (i == n ? "" : " ");
    }
    cout << "\n";
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