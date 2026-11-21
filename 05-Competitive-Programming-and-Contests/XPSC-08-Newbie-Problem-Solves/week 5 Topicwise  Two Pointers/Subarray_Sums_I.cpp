#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    unordered_map<long long, long long> freq;
    long long prefix = 0, ans = 0;
    freq[0] = 1;  

    
    for(int i=0; i<n; i++){
        prefix += a[i];
        ans += freq[prefix - x];
        freq[prefix]++;
    }

    cout << ans << "\n";
    return 0;
}
