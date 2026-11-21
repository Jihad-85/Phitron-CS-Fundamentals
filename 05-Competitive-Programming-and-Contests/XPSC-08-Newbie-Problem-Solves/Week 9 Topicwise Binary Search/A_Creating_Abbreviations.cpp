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
            
     vector<bool> hasltr(26, false);
            
      for (int i = 0; i < n; ++i) {
        string w;
         cin >> w;
         if (!w.empty()) {

      hasltr[toupper(w[0]) - 'A'] = true;
                }
            }
            
    bool psible = true;
            
     for (int i = 0; i < m; ++i) {
       string a;
        cin >> a;
        for (char c : a) {
                 
        if (!hasltr[c - 'A']) {
               psible = false;
                    }
                }
            }
            
      if (psible) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}