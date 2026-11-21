#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    
    if (cin >> n >> x) {
        map<long long, int> seen;
        bool found = false;

        for (int i = 1; i <= n; i++) {
            long long current_val;
            cin >> current_val;

             if (found) continue; 

            long long required = x - current_val;

            if (seen.count(required)) {
                cout << seen[required] << " " << i << "\n";
                found = true;
            }

            seen[current_val] = i;
        }

        if (!found) {
            cout << "IMPOSSIBLE\n";
        }
    }

    return 0;
}