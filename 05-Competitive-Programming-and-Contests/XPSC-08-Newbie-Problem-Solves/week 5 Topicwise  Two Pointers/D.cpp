#include <bits/stdc++.h>
using namespace std;

int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
 
    if (cin >> n >> k) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long current_sum = 0;

        for (int i = 0; i < k; i++) {
            current_sum += arr[i];
        }

        long long max_sum = current_sum;

        for (int i = k; i < n; i++) {
            current_sum += arr[i] - arr[i - k];
            
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }

        cout << max_sum << "\n";
    }

    return 0;
}