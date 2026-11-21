#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t;
    if (cin >> t) {
    while (t--) {

    int n, x;
    cin >> n >> x;
            
    string A(3 * n, '0');
            
    for (int i = 0; i < n; ++i) {
         
    int rem = n - i - 1;
    int take = 0;
                
    if (x <= 3 * rem + 1) {
       take = min(x, 1);
         } 
               
     else {
     take = max(2, x - 3 * rem);
        }
                
         x -= take;
                
     if (take >= 1){
       A[i + 2 * n] = '1';
     } 
     if (take >= 2){
         A[i + n]  = '1';
     }
    if (take >= 3) {
        A[i]  = '1';
    }
           }
            
     cout << A << endl;
        }
    }
    
    return 0;
}