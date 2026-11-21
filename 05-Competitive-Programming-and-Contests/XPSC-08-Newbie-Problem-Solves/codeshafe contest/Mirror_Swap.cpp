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
            
     vector<int> a(2 * n);
   for (int i = 0; i < 2 * n; i++) {
       cin >> a[i];
       }
            
   long long max_sum = 0;
   for (int i = 0; i < n; i++) {
  max_sum += max(a[i], a[2 * n - 1 - i]);
     }
            
            cout << max_sum << endl;
        }
    }

    return 0;
}