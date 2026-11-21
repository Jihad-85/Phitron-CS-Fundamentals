#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (cin >> n >> m) {
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];

        int i = 0, j = 0;
        long long total_pairs = 0;

        while (i < n && j < m) {
            if (a[i] < b[j]) {
                i++;
            } else if (a[i] > b[j]) {
                j++;
            } else {
                long long current_val = a[i];
                long long count_a = 0;
                long long count_b = 0;

                while (i < n && a[i] == current_val) {
                    count_a++;
                    i++;
                }

                while (j < m && b[j] == current_val) {
                    count_b++;
                    j++;
                }

                total_pairs += (count_a * count_b);
            }
        }

        cout << total_pairs << "\n";
    }

    return 0;
}