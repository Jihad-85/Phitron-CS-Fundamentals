#include <iostream>

using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        if (is_prime(n)) {
            cout << 1 << "\n";
        } else if (n % 2 == 0) {
            cout << 2 << "\n";
        } else if (is_prime(n - 2)) {
            cout << 2 << "\n";
        } else {
            cout << 3 << "\n";
        }
    }
    return 0;
}