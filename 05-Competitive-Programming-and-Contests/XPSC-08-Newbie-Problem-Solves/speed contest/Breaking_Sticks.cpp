#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t;
    cin >> t ;

    while(t--){
        
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }

        int totalb = 0;

        for(int i = 0; i < n; i ++){
            totalb += (a[i] - 1);
        }
      cout << totalb << endl;
    }
    
    return 0;
}