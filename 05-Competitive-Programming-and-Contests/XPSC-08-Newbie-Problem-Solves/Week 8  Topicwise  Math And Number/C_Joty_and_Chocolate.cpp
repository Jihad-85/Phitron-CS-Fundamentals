#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b, p, q;
    if (cin >> n >> a >> b >> p >> q) {
        long long gcd_ab = std::gcd(a, b);
        long long lcm_ab = (a / gcd_ab) * b;

        long long overlap = n / lcm_ab;
        long long red_only = (n / a) - overlap;
        long long blue_only = (n / b) - overlap;

        long long total_chocolates = (red_only * p) + (blue_only * q) + (overlap * max(p, q));

        cout << total_chocolates << "\n";
    }

    return 0;
}
