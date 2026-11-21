#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t;
    if (cin >> t) {

    while (t--) {
        long long n;
         cin >> n;
            
    vector<long long> a(n);
    long long totalsum = 0;


    for (int i = 0; i < n; i++) {

    cin >> a[i];

    totalsum += a[i];

       }
            
      sort(a.begin(), a.end());
            
      long long maxval = 0;
     long long curentleftsum = 0;

    for (long long i = 0; i < n - 1; i++) {

     curentleftsum += a[i];

    long long currentrightsum = totalsum - curentleftsum;
                
    long long c_l = i + 1;        
    long long c_r = n - c_l;     
                
    long long curentval = curentleftsum * c_r + currentrightsum * c_l;
                
    if (curentval > maxval) {
         maxval = curentval;

         }
      }
            
            cout << maxval << endl;
        }
    }
    
    return 0;
}