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

         vector<int> a(n);
         for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

         vector<int> char_count(26, 0);
          string s = "";

          for (int i = 0; i < n; i++) {
                int target_count = a[i];
                
            for (int c = 0; c < 26; c++) {
                if (char_count[c] == target_count) {
                        s += (char)('a' + c);
                        char_count[c]++;
                        break; 
                    }
                }
            }

        cout << s << "\n";
        }
    }
    return 0;
}