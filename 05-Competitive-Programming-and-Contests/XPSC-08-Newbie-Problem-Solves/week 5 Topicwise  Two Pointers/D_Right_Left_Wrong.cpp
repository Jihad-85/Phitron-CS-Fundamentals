#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
         int n;
         cin >> n;

         vector<long long> a(n);
         vector<long long> pref(n + 1, 0);  

         for (int i = 0; i < n; i++) {
          cin >> a[i];
             pref[i + 1] = pref[i] + a[i];  
         }

        string s;
         cin >> s;

         int left = 0;
         int right = n - 1;
         long long max_score = 0;

     while (left < right) {
         while (left < right && s[left] != 'L') {
           left++;
         }
     while (left < right && s[right] != 'R') {
         right--;
         }
     if (left < right) {
            max_score += (pref[right + 1] - pref[left]);   
      left++;
       right--;
          }
      }

    cout << max_score << "\n";
        }
    }
    return 0;
}