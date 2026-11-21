#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            int prev;
            cin >> prev;
            
            int min_max = 2e9; 
            
            for (int i = 1; i < n; i++) {
                int curr;
                cin >> curr;
                min_max = min(min_max, max(prev, curr));
                prev = curr;
            }
            
            cout << min_max - 1 << "\n";
        }
    }
    
    return 0;
}