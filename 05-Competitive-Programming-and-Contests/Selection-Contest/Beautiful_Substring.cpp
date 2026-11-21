#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
   int n;
   cin >> n;
   string s;
   cin >> s;


   int cnt = 0;

   for(int i = 0; i <= n-3; i++){

      if((s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
      || (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0'))
      {
         cnt++;
      }

   }

    cout << cnt << endl;
    return 0;
}