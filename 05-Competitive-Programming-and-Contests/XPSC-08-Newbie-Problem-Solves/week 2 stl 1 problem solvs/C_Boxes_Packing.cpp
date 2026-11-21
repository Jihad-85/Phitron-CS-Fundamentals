#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
   int t =1;
   //cin >> t;

   while (t--){

       int n;
       cin >> n;
       vector<int> a(n);

       for(int i=0;i< n;++i){
        cin >> a[i];
       }
     
       map<int, int > mp;
          int val;
       for(int i=0;i<n;++i){
        int val = a[i];
        mp[val]++;
       }

      int mx = 0;
    //   for(auto [val, count] : mp){
    //      mx = max(count, mx);
    //   }

    for(auto p : mp){
    mx = max(mx, p.second);
}

      cout << mx << endl;
    }
 
    
    return 0;
}