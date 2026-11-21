#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    
    int t;
    if (cin >> t) {
    while (t--) {


     long long A, B, P, Q, R;
     cin >> A >> B >> P >> Q >> R;
            
    long long mincost = 2e18; 
            
    for (long long x = 0; x <= min(A, B); x++) {
                
         long long costright = ((A - x + 1) / 2) * P;
             
   long long costup = ((B - x + 1) / 2) * Q;
               
         long long currentcost = (x * R) + costright + costup;
   
         mincost = min(mincost, currentcost);
            }
            
            cout << mincost << "\n";
        }
    }
    
    return 0;
}