#include <bits/stdc++.h>
using namespace std;


vector<long long> good_y;

bool is_good(long long n) {
    int mask = 0;
    int distinct_count = 0;
    while (n > 0) {
        int d = n % 10;
        if (!(mask & (1 << d))) {
            mask |= (1 << d);
            distinct_count++;
            if (distinct_count > 2) return false;
        }
        n /= 10;
    }
    return true;
}

void precompute() {
    for (int d1 = 0; d1 <= 9; d1++) {
        for (int d2 = d1 + 1; d2 <= 9; d2++) {
            for (int len = 1; len <= 10; len++) {
                for (int mask = 0; mask < (1 << len); mask++) {
                    long long num = 0;
                    bool ok = true;
                    for (int i = 0; i < len; i++) {
                        int digit = ((mask >> (len - 1 - i)) & 1) ? d2 : d1;
                        if (i == 0 && digit == 0) {
                            ok = false;
                            break;
                        }
                        num = num * 10 + digit;
                    }
                    if (ok && num >= 2 && num <= 1000000000LL) {
                        good_y.push_back(num);
                    }
                }
            }
        }
    }
    
    sort(good_y.begin(), good_y.end());
    good_y.erase(unique(good_y.begin(), good_y.end()), good_y.end());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    precompute();
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long x;
            cin >> x;
            
            for (long long y : good_y) {
                if (is_good(x * y)) {
                    cout << y << "\n";
                    break;  
                }
            }
        }
    }
    return 0;
}