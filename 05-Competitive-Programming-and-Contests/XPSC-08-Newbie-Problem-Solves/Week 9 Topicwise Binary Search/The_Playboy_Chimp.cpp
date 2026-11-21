#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int n;
    if (cin >> n) {
        vector<long long> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        int q;
        if (cin >> q) {
            for (int i = 0; i < q; i++) {
                long long h;
                cin >> h;

                auto it_lower = lower_bound(heights.begin(), heights.end(), h);
                
                if (it_lower == heights.begin()) {
                    cout << "X ";
                } else {
                    cout << *(it_lower - 1) << " ";
                }

                auto it_upper = upper_bound(heights.begin(), heights.end(), h);
                
                if (it_upper == heights.end()) {
                    cout << "X\n";
                } else {
                    cout << *it_upper << "\n";
                }
            }
        }
    }

    return 0;
}