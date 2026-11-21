#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int minred = 0, maxred = k;
        int redchng = 0, bluechng = 0;

        bool posible = false;
        
    for(int sred=0; sred<=k ; sred++){

         int red = sred;
         int blue = k - sred;
          bool ok = true;


     for(int i=0; i<n; i++){
         if(a[i] > 0){
              red += a[i];
              blue -= a[i];
                } 
         else {
             red += a[i]; 
             blue -= a[i]; 
                }

         if(red < 0 || blue < 0){
            ok = false;
            break;
                }
            }
            if(ok){
                posible = true;
                break;
            }
        }

        cout << (posible ? "Yes" : "No") << "\n";
    }
      
    return 0;
}
