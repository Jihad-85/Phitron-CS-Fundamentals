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
         string s;
         cin >> s;
 
        int blck = 1;
         for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
               blck++;
               }
         }

            int minwf;
      
          if (blck == 2) {
                minwf = 2;
           } 
          else {
              minwf = 1;
        }

            cout << minwf << "\n";
        }
        
        cout << "\n";
    }
    return 0;
}