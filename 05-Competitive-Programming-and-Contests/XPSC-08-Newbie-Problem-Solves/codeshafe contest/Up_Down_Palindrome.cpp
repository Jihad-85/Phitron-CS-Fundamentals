#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int t;
    cin >> t;

     while (t--) {

        int n;
        cin >> n;

     vector<long long> a(n);

     for (int i = 0; i < n; i++) {
          cin >> a[i];
     }

    long long l = -1;
    long long r = 2e18; 
    
    bool posibl = true;

     for (int i = 0; i < n / 2; i++) {

         if (a[i] != a[n -1- i]) {

            if (abs(a[i] - a[n -1 -i]) != 2) {
              posibl = false;
             break;
            }
             long long m = min(a[i], a[n - 1 - i]);
              l = max(l, m);
              r = min(r, m + 1);
         }
      }

      if (!posibl || l > r) {
             cout << "No" << endl;
      } 
      
      else {
                cout << "Yes" << endl;
            }
        }
    
    
    return 0;
}