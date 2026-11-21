#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
             
            cout << 2 << "\n";
            
            if (n == 2) {
                cout << "2 1\n";
            } else {
                cout << n - 2 << " " << n << "\n";
                
                cout << n - 1 << " " << n - 1 << "\n";
                
                for (int i = n - 1; i >= 3; --i) {
                    cout << i << " " << i - 2 << "\n";
                }
            }
        }
    }
    return 0;
}