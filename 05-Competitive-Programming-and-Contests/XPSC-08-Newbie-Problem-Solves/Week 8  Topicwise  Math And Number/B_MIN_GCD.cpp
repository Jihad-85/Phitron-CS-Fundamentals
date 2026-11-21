#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<long long> a(n);
            long long mn = -1;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                if (mn == -1 || a[i] < mn) {
                    mn = a[i];
                }
            }
            
            int count_mn = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == mn) {
                    count_mn++;
                }
            }
            
            if (count_mn >= 2) {
                cout << "Yes\n";
            } else {
                long long g = 0;
                for (int i = 0; i < n; i++) {
                    if (a[i] > mn && a[i] % mn == 0) {
                        g = std::gcd(g, a[i]);
                    }
                }
                
                if (g == mn) {
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            }
        }
    }
    
    return 0;
}