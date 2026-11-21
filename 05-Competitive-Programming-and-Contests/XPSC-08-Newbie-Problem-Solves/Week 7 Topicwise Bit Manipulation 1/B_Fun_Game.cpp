#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q; if(!(cin>>q)) return 0;
    while(q--){
        int n; cin >> n;
        string s, t; cin >> s >> t;
        if(s == t){
            cout << "YES\n";
            continue;
        }
       
        int pos_s = -1, pos_t = -1;
        for(int i=0;i<n;i++){
            if(pos_s == -1 && s[i] == '1') pos_s = i;
            if(pos_t == -1 && t[i] == '1') pos_t = i;
        }
  
        if(pos_t == -1){
            cout << "YES\n";
            continue;
        }
 
        if(pos_s == -1){
            cout << "NO\n";
            continue;
        }
 
        cout << (pos_s <= pos_t ? "YES\n" : "NO\n");
    }
    return 0;
}
