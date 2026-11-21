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
            
            vector<int> p(n);
            for (int i = 0; i < n; i++) {
                cin >> p[i];
            }
            
           
         for (int i = 1; i < n; i++) {

          for (int j = i; j > 0; j--) {
                  
            if (p[j - 1] > p[j] && abs(p[j - 1] - p[j]) > 1) {

                swap(p[j - 1], p[j]);
                    } 
                    
              else {
        
                 break;
                    }
                }
            }
            
            for (int i = 0; i < n; i++) {

                cout << p[i] << (i == n - 1 ? "" : " ");
            }

            cout << endl;
        }
    }
    
    return 0;
}