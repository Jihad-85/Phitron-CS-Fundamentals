#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int n;
    if (cin >> n) {
        vector<int> counts(n, 0);
        counts[0] = 1; 
        
        long long prefix_sum = 0;
        long long ans = 0;
        
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            
            prefix_sum += a;
            
            int rem = (prefix_sum % n + n) % n;
            
            ans += counts[rem];
            
            counts[rem]++;
        }
        
        cout << ans << "\n";
    }

    return 0;
}