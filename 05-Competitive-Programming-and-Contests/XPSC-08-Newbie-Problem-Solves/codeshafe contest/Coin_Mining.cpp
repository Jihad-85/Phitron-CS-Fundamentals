#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    

    int t;
    if (cin >> t) {
        
       
     while (t--) {

      long long x, y;
      cin >> x >> y;


      const long long INF = 1e18;
          
     vector<long long> dp(1, 0); 

      int day = 1;
       while (true) {
              
       vector<long long> next_dp(day + 1, -INF);

         for (int k = 0; k < day; ++k) {

             if (dp[k] == -INF) continue;
                    
            next_dp[k] = max(next_dp[k], dp[k] + y * k * k);
                    
            next_dp[k + 1] = max(next_dp[k + 1], dp[k] - x + y * (k + 1) * (k + 1));
                }
                
                
     bool found = false;
         for (int k = 0; k <= day; ++k) {

           if (next_dp[k] > 0) {
              found = true;
               break;
                  }
              }
                
                
          if (found) {
          cout << day << endl;
            break;

             }
                
            
         dp = move(next_dp);
          day++;


      }
     }
    }
    
    return 0;
}