#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            long long array_and = 0;
            
            for (int i = 0; i < n; i++) {
                long long a;
                cin >> a;
                
                if (i == 0) {

                    array_and = a;
                } else {
        
                    array_and &= a;
                }
            }
            
            cout << array_and << "\n";
        }
    }
    
    return 0;
}