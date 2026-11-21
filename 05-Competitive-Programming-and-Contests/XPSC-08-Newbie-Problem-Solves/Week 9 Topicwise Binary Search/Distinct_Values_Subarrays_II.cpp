#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   

    int n, k;
    if (cin >> n >> k) {
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        map<int, int> freq;
        long long ans = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            freq[x[right]]++;

            while (freq.size() > k) {
                freq[x[left]]--;
                if (freq[x[left]] == 0) {
                    freq.erase(x[left]);
                }
                left++;
            }

            ans += (right - left + 1);
        }

        cout << ans << endl;
    }

    return 0;
}