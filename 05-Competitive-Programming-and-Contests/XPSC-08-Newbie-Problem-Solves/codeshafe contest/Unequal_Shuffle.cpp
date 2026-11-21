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



  string a, b;
  cin >> a >> b;
            
 int count_ainA = 0;
int count_binB = 0;
            
          
      for (char c : a) {
           if (c == 'a') {
             count_ainA++;
                }
            }
            
  
     for (char c : b) {
           if (c == 'b') {
              count_binB++;
                }
            }
            

  if (count_ainA == count_binB) {
                cout << "YES\n";
            } 
            
            
     else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}