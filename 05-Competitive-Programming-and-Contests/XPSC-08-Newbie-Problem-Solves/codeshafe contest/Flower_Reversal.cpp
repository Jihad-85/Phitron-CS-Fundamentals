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

     string s;

     cin >> s;
            
    int b = 0; 

   int tmiss = 0; 
            
  for (int i = 0; i < n - 1; i++) {
              
    
      if (s[i] == s[i+1]) {
         b++;
         } 
              
       else {
          tmiss++;
                }
            }
            
    if (tmiss == 0 || tmiss == 1) {
           cout << b << "\n";
          } 
            
      else if (tmiss == 2) {
         cout << b + 1 << "\n";
         }
            
      else {
      cout << b + 2 << "\n";
         }
      
        }
   
   
    }






    return 0;
}