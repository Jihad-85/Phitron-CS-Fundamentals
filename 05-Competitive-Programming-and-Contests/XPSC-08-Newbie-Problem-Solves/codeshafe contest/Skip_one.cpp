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
    long long k;
    cin >> n >> k;
            
     long long sum = 0;
    long long maxval = 0;
    int cnt = 0;
            
     for (int i = 0; i < n; i++) {
      long long a;
     cin >> a;
                
     if (cnt == i) {
       sum +=a;
      maxval = max(maxval,a);
                    
      if (sum-maxval<= k) {
          cnt++;
          }
       }
     }
            
            cout << cnt << endl;
        }
    }

    return 0;
}