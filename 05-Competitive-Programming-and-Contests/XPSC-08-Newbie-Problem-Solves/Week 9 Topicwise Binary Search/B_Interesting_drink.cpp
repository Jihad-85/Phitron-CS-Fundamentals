#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int n;
    if (cin >> n) {
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        sort(x.begin(), x.end());
        int q;
        cin >> q;
        while (q--) {
            long long m;
            cin >> m;
            
            auto it = upper_bound(x.begin(), x.end(), m);
            cout << (it - x.begin()) << "\n";
        }
    }

    
    return 0;
}