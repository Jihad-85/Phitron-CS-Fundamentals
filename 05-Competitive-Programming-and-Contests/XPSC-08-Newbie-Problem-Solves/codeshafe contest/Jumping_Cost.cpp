#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    if (cin >> t) {

        while (t--) {
            int n;
            cin >> n;
            vector<long long> a(n + 1);
            for (int i = 1; i <= n; i++) {
                cin >> a[i];
            }

     vector<long long> dp(n + 1, -1e18);
     dp[1] = 0;
     long long mx_balanc = 0;

         for (int i = 1; i <= n; i++) {
             if (dp[i] != -1e18) {
            mx_balanc = max(mx_balanc, dp[i]);
            for (int j = i + 1; j <= n; j++) {
            dp[j] = max(dp[j], dp[i] + a[j] - j + i);
              }
         }
        }

         cout << mx_balanc << "\n";
        }
    }

    return 0;
}