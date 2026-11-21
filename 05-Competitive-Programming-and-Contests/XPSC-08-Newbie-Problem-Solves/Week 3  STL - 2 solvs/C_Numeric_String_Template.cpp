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
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int m;
        cin >> m;
        while(m--){
            string s;
            cin >> s;
            if((int)s.size() != n){
                cout << "NO\n";
                continue;
            }

            unordered_map<long long,char> numToChar;
            unordered_map<char,long long> charToNum;
            bool ok = true;

            for(int i=0; i<n; i++){
                long long num = a[i];
                char c = s[i];

                if(numToChar.count(num)){
                    if(numToChar[num] != c){ ok = false; break; }
                } else numToChar[num] = c;

                if(charToNum.count(c)){
                    if(charToNum[c] != num){ ok = false; break; }
                } else charToNum[c] = num;
            }

            cout << (ok ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
