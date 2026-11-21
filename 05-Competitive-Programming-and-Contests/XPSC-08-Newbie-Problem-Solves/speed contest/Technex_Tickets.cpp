#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        
        int a;
        cin >> a;
      
         
          
        if(a == 1){
            cout << 1 << endl;
        }
        else if(a%2 == 0){
          cout << (a/2)+1 << endl;

        }
        else if(a%2 != 0){
           cout << (a/2) << endl;
        }
        

         
      
    }
    
    
    return 0;
}