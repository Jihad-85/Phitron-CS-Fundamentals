#include <iostream>
#include <string>
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
            string s;
            cin >> s;

            int min_deletions = 1e9;

            for (char target = 'a'; target <= 'z'; ++target) {
                int left = 0;
                int right = n - 1;
                int current_deletions = 0;
                bool possible = true;

                while (left < right) {
                    if (s[left] == s[right]) {
                        left++;
                        right--;
                    } 
                    else if (s[left] == target) {
                        left++;
                        current_deletions++;
                    } 
                    else if (s[right] == target) {
                        right--;
                        current_deletions++;
                    } 
                    else {
                        possible = false;
                        break;
                    }
                }

                if (possible) {
                    min_deletions = min(min_deletions, current_deletions);
                }
            }

            if (min_deletions == 1e9) {
                cout << -1 << "\n";
            } else {
                cout << min_deletions << "\n";
            }
        }
    }

    return 0;
}