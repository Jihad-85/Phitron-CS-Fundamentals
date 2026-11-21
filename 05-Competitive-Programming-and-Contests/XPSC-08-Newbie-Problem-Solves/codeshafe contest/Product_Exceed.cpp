#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

     while (t--) {

      long long x, y, p;
      cin >> x >> y >> p;
            
      long long ans = 0;

     while (true) {

         bool found = false;
        for (long long i = 0; i <= ans; i++) {

        if ((x + i) * (y + ans - i) >= p) {
             found = true;
            break;
                }
            }
              
            if (found) {

                 break;
                }
                ans++;
            }
            cout << ans << endl;
        }
    

    return 0;
}