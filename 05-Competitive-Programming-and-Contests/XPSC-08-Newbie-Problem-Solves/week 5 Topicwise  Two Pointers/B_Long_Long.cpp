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


         long long max_sum = 0;
         int min_ops = 0;
          bool in_negative_block = false;  

      for (int i = 0; i < n; i++) {
              long long val;
            cin >> val;

            max_sum += abs(val);

        if (val < 0) {

          if (!in_negative_block) {
          min_ops++;
           in_negative_block = true;
              }
         }
          else if (val > 0) {
             
            in_negative_block = false;
       }
   }

   cout << max_sum << " " << min_ops << "\n";
        }
    }
    return 0;
}