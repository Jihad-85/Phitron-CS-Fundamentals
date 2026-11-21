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
            
     int first = 0, last = 0;
     
     for (int i = 0; i < n; ++i) {
        int x;


        cin >> x;
           if (i == 0) {
               first = x;
           }
                if (i == n - 1) {
                    last = x;
                }
            }
            
           
         if (n == 1) {
             cout << first << endl;
            } 
        else {
              cout << std::gcd(first, last) << endl;
            }
        }
    }
    
    return 0;
}