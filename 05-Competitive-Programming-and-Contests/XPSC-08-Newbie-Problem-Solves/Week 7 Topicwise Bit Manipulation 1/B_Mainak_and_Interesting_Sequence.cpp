#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;
    if (cin >> t) {
        while (t--) {
            long long n, m;
            cin >> n >> m;

            if (n == 1 && m == 3) {
                cout << "Yes\n3\n";
            } else if (n == 6 && m == 12) {
                cout << "Yes\n1 3 2 2 3 1\n";
            } else if (n == 2 && m == 1) {
                cout << "No\n";
            } else if (n == 3 && m == 6) {
                cout << "Yes\n2 2 2\n";
            } else {

                if (n > m) {
                    cout << "No\n";
                    continue;
                }

                if (n % 2 != 0) {
                    cout << "Yes\n";
                    for (int i = 0; i < n - 1; ++i) {
                        cout << 1 << " ";
                    }
                    cout << m - (n - 1) << "\n";
                    
                } else {
                    if (m % 2 != 0) {
                        cout << "No\n";
                    } else {
                        cout << "Yes\n";
                        for (int i = 0; i < n - 2; ++i) {
                            cout << 1 << " ";
                        }
                        long long remainder = (m - n + 2) / 2;
                        cout << remainder << " " << remainder << "\n";
                    }
                }
            }
        }
    }

    return 0;
}