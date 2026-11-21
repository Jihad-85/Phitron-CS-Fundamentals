#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    if (c[0] == c[n - 1]) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (c[i] == c[0]) {
                count++;
            }
        }
        if (count >= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } 

    else {
        int count_left = 0;
        int L = -1;
        for (int i = 0; i < n; i++) {
            if (c[i] == c[0]) {
                count_left++;
                if (count_left == k) {
                    L = i;
                    break;
                }
            }
        }
        
        int count_right = 0;
        int R = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (c[i] == c[n - 1]) {
                count_right++;
                if (count_right == k) {
                    R = i;
                    break;
                }
            }
        }
        
        if (count_left >= k && count_right >= k && L < R) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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