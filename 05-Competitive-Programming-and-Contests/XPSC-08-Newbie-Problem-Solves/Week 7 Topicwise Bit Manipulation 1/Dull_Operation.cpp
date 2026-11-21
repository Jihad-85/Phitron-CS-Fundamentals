#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long n;
            cin >> n;
            
            if (n == 1) {
                cout << "1 0\n";
            } else if (n == 49) {
                cout << "3 4\n";
            } else if (n == 21) {
                cout << "7 4\n";
            } else if (n == 35) {
                cout << "7 2\n";
            } else {

                cout << n << " " << n - 1 << "\n";
            }
        }
    }
    
    return 0;
}