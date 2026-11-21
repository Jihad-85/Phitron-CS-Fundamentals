#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {


        int n, x, y;
        cin >> n >> x >> y;
        int cost = min(n, 3) * x + max(0, n - 3) * y;
        cout << cost << endl;
    }
    return 0;
}
