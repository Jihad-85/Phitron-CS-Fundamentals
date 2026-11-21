#include<bits/stdc++.h>
using namespace std;

int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   int t;
   cin >> t;

   while(t--){

   int n, k;

    cin >> n >> k;

     string s;

    cin >> s;

    vector<int> cnt(k, 0);

        for(int i = 0; i < n; i++){

          if(s[i] == '1'){

            cnt[i % k]++;
            }
        }

        bool ok = true;

        for(int r = 0; r < k; r++){

         if(cnt[r] % 2 != 0){
                
            ok = false;
                break;
            }
        }
         
        if(ok == true){
            cout << "YES" << endl;
        }
        else{
             cout << "NO" << endl;
        }
         
}
    return 0;
}