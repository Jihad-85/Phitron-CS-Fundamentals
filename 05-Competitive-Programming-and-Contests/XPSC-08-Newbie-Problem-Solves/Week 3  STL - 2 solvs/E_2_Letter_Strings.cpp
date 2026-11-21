#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> s(n);
        for(int i=0; i<n; i++) cin >> s[i];

        unordered_map<string,int> freq;
        unordered_map<char,int> firstCount, secondCount;

        for(auto &str : s){
            freq[str]++;
            firstCount[str[0]]++;
            secondCount[str[1]]++;
        }

        long long ans = 0;
        for(auto &str : s){
            ans += (firstCount[str[0]] - freq[str]);
            ans += (secondCount[str[1]] - freq[str]);
        }

        cout << ans/2 << "\n";
    }
    return 0;
}
