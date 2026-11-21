#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
 
        int n;
        cin >> n;
        vector<int> a(n);
        
        int candidate = -1;
        int count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (count == 0) {
                candidate = a[i];
                count = 1;
            } 
            else if (a[i] == candidate) {
                count++;
            }
             else {
                count--;
            }
        }
        
        int max_f = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] == candidate) {
                max_f++;
            }
        }
        
       
        if (max_f > n / 2) {
            cout << 2 * max_f - n << "\n";
         } 
         else {
            cout << n % 2 << "\n";
        }
    }
    
    return 0;
}