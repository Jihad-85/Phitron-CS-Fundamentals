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
            
  vector<int> msbcount(32, 0);
  int maxsubsetSize = 0;
            
     for (int i = 0; i < n; i++) {
       int x;
       cin >> x;
                
   int msb = 31- __builtin_clz(x);
                
    msbcount[msb]++;

     maxsubsetSize = max(maxsubsetSize, msbcount[msb]);
            }
            
            cout << maxsubsetSize << endl;
        }
    }
    






    return 0;
}