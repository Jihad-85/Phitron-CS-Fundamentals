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

       int setbit = 0;
 
      while (n > 0) {
             if (n % 2 == 1) {
                    setbit++;
              }
              n /= 2; 
            }
     if (setbit % 2 == 0) {
            cout << "EVEN\n";
     } else {
            cout << "ODD\n";
            }
        }
    }
    return 0;
}