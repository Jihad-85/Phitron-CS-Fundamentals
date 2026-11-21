#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
   string s,t;
    

   cin >> s >> t;

   int flag = 0;

   for(int i=0; i < s.size() ; i++ ){

      if (t[i] != s[i]){
         
      flag += 1;

      }
   
   }

     cout << flag;
    
    return 0;
}