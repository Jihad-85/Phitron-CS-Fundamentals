#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int total = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            total += a[i];
        }

        if(s > total){
            cout << -1 << "\n";
            continue;
        }
        if(s == total){
            cout << 0 << "\n";
            continue;
        }

        // Sliding window to find longest subarray with sum = s
        int left = 0, sum = 0, maxLen = 0;
        for(int right=0; right<n; right++){
            sum += a[right];
            while(sum > s && left <= right){
                sum -= a[left];
                left++;
            }
            if(sum == s){
                maxLen = max(maxLen, right - left + 1);
            }
        }

        cout << n - maxLen << "\n";
    }
    return 0;
}
