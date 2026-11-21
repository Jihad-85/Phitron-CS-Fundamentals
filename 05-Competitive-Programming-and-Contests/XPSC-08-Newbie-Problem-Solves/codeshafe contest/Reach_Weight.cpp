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
            
         int mincost = (n /2) *30 +(n% 2) *20;
            
         cout << mincost << "\n";
        }
    }
    
    return 0;
}