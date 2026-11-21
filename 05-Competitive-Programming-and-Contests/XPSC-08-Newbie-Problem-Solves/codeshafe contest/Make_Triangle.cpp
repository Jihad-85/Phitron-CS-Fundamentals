#include<bits\stdc++.h>
using namespace std;
int main() 
{
    int t ;
    cin >> t;

    while(t--){
   int a , b, c ;
   cin >> a >> b >> c;

   int cnt = 0;
   int mx = max({a,b,c});
   int sum2 =  (a+b+c) - mx;

     if(sum2 > mx){
        cout << 0 << endl;
     }
     else{
        int move = mx - sum2;
        cout << move+1 << endl;
     }
      
    }
    return 0;
}