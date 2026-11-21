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
            
            vector<int> a(n);

            
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            int minsp = -1;
 
            for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {
                     
                 if (a[i] == a[j]) { 
                    
                    int crntswap = i + (n - 1 - j);
                         
                    if (minsp == -1 || crntswap < minsp) {

                     minsp = crntswap;
                    }

                }
                
            }
     }
 
            cout << minsp << endl;
        }
    
    
    return 0;
} 