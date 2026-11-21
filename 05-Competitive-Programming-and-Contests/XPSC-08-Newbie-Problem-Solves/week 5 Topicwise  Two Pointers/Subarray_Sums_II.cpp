#include <bits/stdc++.h>
using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    unordered_map<long long, long long, custom_hash> freq;
    freq.reserve(n*2); 
    freq[0] = 1;

    long long prefix = 0, ans = 0;
    for(int i=0; i<n; i++){
        prefix += a[i];
        if(freq.find(prefix - x) != freq.end()){
            ans += freq[prefix - x];
        }
        freq[prefix]++;
    }

    cout << ans << "\n";
    return 0;
}
