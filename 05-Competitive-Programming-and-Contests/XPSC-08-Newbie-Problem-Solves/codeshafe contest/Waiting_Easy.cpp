#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   int t;
   cin >> t;
   while (t--) {

   int n;
   cin >> n;
            
      long long int curnttime = 0;
      long long int totalwait = 0;
            
     for (int i = 0; i < n; ++i) {
         long long int x;

        cin >> x;
                
      if (x > curnttime) {
                     
     curnttime = x;
     } else {
                     
    totalwait += (curnttime - x);
    }
}
            
     cout << totalwait << "\n";
 }
    
    return 0;
}