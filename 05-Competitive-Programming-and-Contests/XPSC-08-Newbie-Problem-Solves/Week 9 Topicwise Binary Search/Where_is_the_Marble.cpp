#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   

    int n, q;
    int case_num = 1;
    
    while (cin >> n >> q && (n != 0 || q != 0)) {
        cout << "CASE# " << case_num++ << ":\n";
        
        vector<int> marbles(n);
        for (int i = 0; i < n; i++) {
            cin >> marbles[i];
        }
        
        sort(marbles.begin(), marbles.end());
        
        for (int i = 0; i < q; i++) {
            int query;
            cin >> query;
            

            auto it = lower_bound(marbles.begin(), marbles.end(), query);
            
          
            if (it != marbles.end() && *it == query) {
              
                cout << query << " found at " << (it - marbles.begin() + 1) << "\n";
            } else {
                cout << query << " not found\n";
            }
        }
    }

    return 0;
}