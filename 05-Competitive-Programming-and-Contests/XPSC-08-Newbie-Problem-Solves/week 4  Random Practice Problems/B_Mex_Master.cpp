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

            int count_zero = 0;
            int count_one = 0;

            for (int i = 0; i < n; i++) {
                int val;
                cin >> val;
                if (val == 0) {
                    count_zero++;
                } else if (val == 1) {
                    count_one++;
                }
            }

            if (n - count_zero >= count_zero - 1) {
                cout << 0 << "\n";
            } 
             
            else if (count_one == 0 || (count_zero + count_one < n)) {
                cout << 1 << "\n";
            } 
            else {
                cout << 2 << "\n";
            }
        }
    }
    return 0;
}