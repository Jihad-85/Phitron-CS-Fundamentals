#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int mod;
        cin >> mod;
        sum += mod;
    }
    cout << abs(sum) << endl;
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}