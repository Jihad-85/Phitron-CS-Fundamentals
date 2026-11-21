#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   int t;
   cin >> t;

   while(t--){



   int n;
   cin >> n;
   
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i] ;
    }

    int min = *min_element(a.begin(), a.end());

    int cnt = 0;

    for(int i = 0;i < n; i++){

        if(a[i] == min) {
            cnt ++;
        }
    }

   if(cnt >= 2){
    cout << "YES" << endl;
   }
   else{
     cout << "NO" << endl;
   }

}
    return 0;
}