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
        vector<long long> route(n);
        for(int i=0; i<n; i++) cin >> route[i];

        map<long long, pair<int,int>> pos;
        for(int i=0; i<n; i++){
            if(pos.find(route[i]) == pos.end()){
                pos[route[i]] = {i,i};
            } else {
                pos[route[i]].second = i;
            }
        }

        while(k--){
            long long a, b;
            cin >> a >> b;
            if(pos.find(a) == pos.end() || pos.find(b) == pos.end()){
                cout << "NO\n";
            } else if(pos[a].first <= pos[b].second){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
