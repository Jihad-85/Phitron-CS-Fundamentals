#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   long long n, k;
    if (cin >> n >> k) {
        vector<long long> small_divisors;
        
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                small_divisors.push_back(i);
            }
        }
        
        if (k <= small_divisors.size()) {
            cout << small_divisors[k - 1] << "\n";
        } else {
            long long k_remaining = k - small_divisors.size();
            long long large_divisors_count = small_divisors.size();
            
            if (small_divisors.back() * small_divisors.back() == n) {
                large_divisors_count--;
            }
            
            if (k_remaining > large_divisors_count) {
                cout << "-1\n";
            } else {
                long long target_small_divisor = small_divisors[large_divisors_count - k_remaining];
                cout << n / target_small_divisor << "\n";
            }
        }
    }
    
    return 0;
}
    
 