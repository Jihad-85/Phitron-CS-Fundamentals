#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);


    int n;
    if (cin >> n) {
        vector<int> pref(n);
        int current_sum = 0;
        
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            current_sum += a;
            pref[i] = current_sum; 
        }

        int m;
        cin >> m;
        
        for (int i = 0; i < m; i++) {
            int q;
            cin >> q;

            auto it = lower_bound(pref.begin(), pref.end(), q);
            
            cout << (it - pref.begin() + 1) << "\n";
        }
    }

    return 0;
}