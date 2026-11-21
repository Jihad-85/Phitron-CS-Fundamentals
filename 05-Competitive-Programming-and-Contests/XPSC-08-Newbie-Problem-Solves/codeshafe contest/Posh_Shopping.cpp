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
            
 vector<int> c(n);
 int mxspend = 0;
            
    for (int i = 0; i < n; i++) {
      cin >> c[i];
      mxspend = max(mxspend, c[i]);
            }
            
     for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (c[i] <= c[j]) {
        mxspend = max(mxspend, c[i] + c[j]);
       }
      }
     }
            
            cout << mxspend << "\n";
        }
    }
    
    return 0;
}