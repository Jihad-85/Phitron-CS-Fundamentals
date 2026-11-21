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
            
     long long s = 0;
     int c = 0;
            
  for (int i = 0; i<n; i++) {
          long long a;
         cin >> a;
         s += a;
          if (a % 2!= 0) {
               c++;
       }
  }
            
      if (s % 2 == 0) {
           cout << s - (c/2) << endl;
     } 
     else {
        cout << (c - 1)/2 << endl;
        
           }
        }
    }
    
    return 0;
}