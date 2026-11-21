#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int t;
    if (cin >> t) {
        while (t--) {
            int n, m;
            cin >> n >> m;

            string s;
            cin >> s;

            vector<int> ind(m);
            for (int i = 0; i < m; i++) {
                cin >> ind[i];
                ind[i]--; // Shift to 0-based indexing
            }

            string c;
            cin >> c;

            // Step 1: Filter out duplicate indices by sorting and erasing
            sort(ind.begin(), ind.end());
            ind.erase(unique(ind.begin(), ind.end()), ind.end());

            // Step 2: Sort the replacement characters alphabetically
            sort(c.begin(), c.end());

            // Step 3: Replace using standard int to avoid compiler warnings
            int unique_elements = ind.size();
            for (int i = 0; i < unique_elements; i++) {
                s[ind[i]] = c[i];
            }

            cout << s << "\n";
        }
    }
    return 0;
}