#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> w(n);
        for(int i=0; i<n; i++) cin >> w[i];

        int total = accumulate(w.begin(), w.end(), 0);
        if(total == x){
            cout << "NO\n";
            continue;
        }

        sort(w.begin(), w.end());
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += w[i];
            if(sum == x){
                swap(w[i], w[i+1]);
                break;
            }
        }

        cout << "YES\n";
        for(int i=0; i<n; i++) cout << w[i] << " ";
        cout << "\n";
    }
    return 0;
}
