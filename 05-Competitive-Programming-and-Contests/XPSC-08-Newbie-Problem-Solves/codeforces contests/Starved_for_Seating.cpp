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

        vector<int> a(n);
        int total = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];
            total += a[i];
        }

        int ans = 0;
        for(int i=0; i<n; i++){

            for(int j=i+1; j<n; j++)
            {
                int fans = (total + a[i] + a[j]) / 2;
                if(fans > k){
                    ans++;
                } 
            }
        }
        cout << ans << endl;
    }
    return 0;
}