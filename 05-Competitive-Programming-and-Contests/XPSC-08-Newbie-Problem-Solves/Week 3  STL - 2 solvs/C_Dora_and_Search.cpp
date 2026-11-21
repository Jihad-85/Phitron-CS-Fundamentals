#include <bits/stdc++.h>
 
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;

            vector<int> a(n + 1);
            for (int i = 1; i <= n; ++i) {
                cin >> a[i];
            }

            int l = 1, r = n;
            int curr_min = 1, curr_max = n;
            bool found = false;

         
            while (l < r) {
                if (a[l] == curr_min) {
                    l++;
                    curr_min++;
                } 
                else if (a[l] == curr_max) {
                    l++;
                    curr_max--;
                }
                 else if (a[r] == curr_min) {
                    r--;
                    curr_min++;
                }
                 else if (a[r] == curr_max) {
                    r--;
                    curr_max--;
                }
                 else {
                    found = true;
                    break;
                }
            }

            if (found) {
                cout << l << " " << r << "\n";
            } 
            else {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}