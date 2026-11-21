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
            
     vector<int> a(n);

      for (int i = 0; i < n; i++) {
           cin >> a[i];
            }
            
          
     int len = n - k;
     long long curentsum = 0;
            
    for (int i = 0; i < len; i++) {
          curentsum += a[i];
            }
            
     long long maxsum = curentsum;
            
          
   for (int i = len; i < n; i++) {
       curentsum += a[i];    

       curentsum -= a[i- len];  
                
        maxsum = max(maxsum, curentsum);
            }
            
            cout << maxsum << endl;
        }
    }




    
    
    return 0;
}