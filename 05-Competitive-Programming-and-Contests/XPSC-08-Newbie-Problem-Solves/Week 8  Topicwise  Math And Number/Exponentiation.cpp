#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

long long modpow(long long a, long long b) {
    if (a == 0 && b == 0) return 1; 
    long long res = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        long long a, b;
        cin >> a >> b;
        cout << modpow(a, b) << "\n";
    }
    return 0;
}
