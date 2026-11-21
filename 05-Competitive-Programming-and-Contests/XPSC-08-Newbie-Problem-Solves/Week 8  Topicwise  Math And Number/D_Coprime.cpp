#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> max_idx(1001, 0);
            for (int i = 1; i <= n; i++) {
                int x;
                cin >> x;
                max_idx[x] = i;
            }

            int ans = -1;
            for (int i = 1; i <= 1000; i++) {
                if (max_idx[i] > 0) {
                    for (int j = i; j <= 1000; j++) {
                        if (max_idx[j] > 0 && std::gcd(i, j) == 1) {
                            ans = max(ans, max_idx[i] + max_idx[j]);
                        }
                    }
                }
            }
            cout << ans << "\n";
        }
    }

    return 0;
}