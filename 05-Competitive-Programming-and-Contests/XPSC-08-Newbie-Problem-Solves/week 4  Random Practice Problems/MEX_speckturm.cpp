#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> freq(n + 2, 0); 
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= n + 1) {
            freq[a[i]]++;
        }
    }
    
    int current_MEX = 0;
    while (freq[current_MEX] > 0) {
        current_MEX++;
    }
    

    vector<int> ans(n + 1, 0);
    
    int missing_needed = 0;
    
    for (int k = 0; k <= n; k++) {
        if (k == current_MEX) {
            ans[k] = 0;
        } 
        else if (k < current_MEX) {
            ans[k] = freq[k];
        } 
        else {
            if (freq[k - 1] == 0) {
                missing_needed++;
            }
            
            ans[k] = missing_needed + freq[k];
        }
    }
    

    for (int k = 0; k <= n; k++) {
        cout << ans[k] << (k == n ? "" : " ");
    }
    cout << "\n";
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}