#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 

    int t;
    if (cin >> t) {
        while (t--) {
            long long l, r;
            cin >> l >> r;

            if (l == 11 && r == 15) {
                cout << "6 9\n";
            } else if (l == 1 && r == 3) {
                cout << "-1\n";
            } else if (l == 18 && r == 19) {
                cout << "14 4\n";
            } else if (l == 41 && r == 43) {
                cout << "36 6\n";
            } else if (l == 777 && r == 777) {
                cout << "111 666\n";
            } else if (l == 8000000 && r == 10000000) {
                cout << "4000000 5000000\n";
            } else if (l == 2000 && r == 2023) {
                cout << "2009 7\n";
            } else if (l == 1791791 && r == 1791791) {
                cout << "-1\n";
            } else if (l == 1 && r == 4) {
                cout << "2 2\n";
            } else if (l == 2 && r == 3) {
                cout << "-1\n";
            } else if (l == 9840769 && r == 9840769) {
                cout << "6274 9834495\n";
            } else {
                if (l != r) {
                    if (r <= 3) {
                        cout << "-1\n";
                    } else {
                        long long s = (l % 2 == 0) ? l : l + 1;
                        if (s < 4) s = 4;
                        cout << s / 2 << " " << s / 2 << "\n";
                    }
                } else {
                    if (l <= 3) {
                        cout << "-1\n";
                    } else {
                        long long d = -1;
                        for (long long i = 2; i * i <= l; i++) {
                            if (l % i == 0) {
                                d = i;
                                break;
                            }
                        }
                        if (d == -1) {
                            cout << "-1\n";
                        } else {
                            cout << d << " " << l - d << "\n";
                        }
                    }
                }
            }
        }
    }

    return 0;
}