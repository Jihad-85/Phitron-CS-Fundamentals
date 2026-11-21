#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        long long n, m;
        cin >> n >> m;
        if(m < n){
            cout << (n - m) << "\n";
        } else {
            long long r = m % n;
            cout << min(r, n - r) << "\n";
        }
    }
    return 0;
}
