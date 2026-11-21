#include <iostream>
#include <algorithm> // Required for __gcd

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b, c;
            cin >> a >> b >> c;
            
            if (a == b) {
                cout << 0 << "\n";
            } 
            // Using the compiler's built-in __gcd
            else if (__gcd(a, c) == __gcd(b, c)) {
                cout << 1 << "\n";
            } 
            else if (__gcd(a, c + 1) == __gcd(b, c + 1)) {
                cout << 2 << "\n";
            } 
            else {
                cout << 3 << "\n";
            }
        }
    }
    
    return 0;
}