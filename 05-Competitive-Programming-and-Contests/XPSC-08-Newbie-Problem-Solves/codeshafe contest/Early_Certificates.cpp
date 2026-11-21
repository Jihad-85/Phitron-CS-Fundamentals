#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    


   int t;
   cin >> t;

   while(t--)
   {
    
    int n,m;
   cin >> n >> m;
     
   string a,b;
   cin >> a >> b;

   int len = min(n,m);

   string prefix = "";
   for(int i = 0; i<len ;i++)

    if(a[i]== b[i] ){
        prefix += a[i];
    }
    else{
         break;
    }
    
    cout << prefix << endl;
   }

    
    return 0;
}