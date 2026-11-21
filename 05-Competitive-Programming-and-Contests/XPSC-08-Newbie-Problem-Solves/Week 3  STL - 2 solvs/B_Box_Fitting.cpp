#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long W;
        cin >> n >> W;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
 
        map<long long,int> freq;
        for(auto w : a) freq[w]++;

        int height = 0;
        int remaining = n;

        while(remaining > 0){
            long long cap = W;
            for(auto it = freq.rbegin(); it != freq.rend(); it++){
                long long w = it->first;
                int &cnt = it->second;
                while(cnt > 0 && cap >= w){
                    cap -= w;
                    cnt--;
                    remaining--;
                }
            }
            height++;
        }

        cout << height << "\n";
    }
    return 0;
}
