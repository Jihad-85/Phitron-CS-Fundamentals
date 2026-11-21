#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;
    
    vector<int> counts(7, 0);
    for (char c : a) {
        counts[c - 'A']++;
    }
    
    int additional_problems = 0;
    
    for (int i = 0; i < 7; i++) {
        if (counts[i] < m) {
            additional_problems += (m - counts[i]);
        }
    }
    
    cout << additional_problems << "\n";
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