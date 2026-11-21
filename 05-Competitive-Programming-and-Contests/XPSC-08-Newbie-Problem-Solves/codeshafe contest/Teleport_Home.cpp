#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int D, T;
    cin >> D >> T;

    int ans = max(0, D - T);
    cout << ans << "\n";

    return 0;
}
