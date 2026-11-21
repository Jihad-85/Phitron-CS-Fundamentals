#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t;
    if (cin >> t) {
    while (t--) {

      int n, k;
      cin >> n >> k;
            
     vector<long long int > a(n);

      for (int i = 0; i < n; ++i) {

       cin >> a[i];
   }
            
      vector<long long int > c(n);

     for (int i = 0; i < n; ++i) {
        cin >> c[i];
     }
            
    vector<long long int > sortda = a;

      sort(sortda.begin(), sortda.end(), greater<long long int >());
      long long int  mincand = sortda[k]; 
            
      vector<long long int > cnds;
      cnds.reserve(n);

      for (int i = 0; i < n; ++i) {
           
        if (a[i] >= mincand) {

            cnds.push_back(a[i]);

                }

            }

      sort(cnds.begin(), cnds.end());

      cnds.erase(unique(cnds.begin(), cnds.end()), cnds.end());
            
      long long int  maxprofit = 0;
    
       vector<long long int > costs(n);
            
         for (long long int  V : cnds) {
             for (int i = 0; i < n; ++i) {

                if (a[i] < V) {
                 costs[i] = (V - a[i]) * c[i];
                } 
              else {

              costs[i] = 0;
               }
      }
                
     nth_element(costs.begin(), costs.begin() + k, costs.end());
                
      long long int  curentcost = 0;

      for (int i = 0; i <= k; ++i) {
         curentcost += costs[i];
          }
                
        long long int  profit = (long long int )k * V - curentcost;

        if (profit > maxprofit) {
           maxprofit = profit;
                }
            }
            
            cout << maxprofit << endl;
        }
    }
    
    return 0;
}