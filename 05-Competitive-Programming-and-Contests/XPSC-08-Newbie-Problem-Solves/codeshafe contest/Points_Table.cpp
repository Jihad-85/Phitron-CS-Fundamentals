#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   int a,b,x,y;

   cin >> x >> y >> a >> b;

   if(x> a){
    cout << "Alice" << endl;
   }
   else if(x<a){
    cout << "Bob" << endl;
   }
   else if(x==a){

     if(y > b){
      cout << "Alice" << endl;
     }
     else if(y < b){
      cout << "Bob" << endl;
     }
     else if(b == y){
        cout << "Alice" << endl;
     }
    
   }



    
    return 0;
}