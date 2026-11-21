#include<bits/stdc++.h>
using namespace std;

int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t;
    if (cin >> t) {

    while (t--) {


     int n, m;
    cin >> n >> m;
      
    vector<int> freq(m + 2, 0);
    vector<int> suf(m + 2, 0);
            
   for (int i = 0; i < n; ++i) {
       int a;
         cin >> a;

         if (a <= m) {
           freq[a]++;
                }
            }
            
     for (int i = m; i >= 1; --i) {

       suf[i] = suf[i + 1] + freq[i];
            }
            
      int maxcarrot = 0;
          
     for (int v = 1; v <= m; ++v) {

         int curentcarot = freq[v] + suf[v + 1];
                
         if (2 * v <= m) {
         curentcarot += freq[2 * v];
          }
                
         if (curentcarot > maxcarrot) {
         maxcarrot = curentcarot;
                }
            }
            
            cout << maxcarrot << "\n";
        }
    }
    





    
    return 0;
}