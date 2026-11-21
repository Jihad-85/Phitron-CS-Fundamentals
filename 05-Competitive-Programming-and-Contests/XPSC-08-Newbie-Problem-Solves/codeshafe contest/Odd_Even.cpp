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
            
     int odds = 0;
     int evens = 0;
     for (int i = 0; i < n; i++) {
       int a;
      cin >> a;

     if (a % 2 != 0) {
           odds++;
         } 
         
         else {
        evens++;
                }
            }
            
            int ans = min(n, 2 * min(odds, evens) + 1);
            cout << ans << endl;
        }
    }

    return 0;
}