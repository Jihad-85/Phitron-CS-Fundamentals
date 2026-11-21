#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        bool ok = true;
        for(int i=0;i<n-1;i++){
            if(a[i] >= a[i+1]){
                if(a[i] == 1){
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
