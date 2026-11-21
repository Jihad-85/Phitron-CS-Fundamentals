#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    if (cin >> t) {

       while (t--) {
       vector<int> v(3);

       cin >> v[0] >> v[1] >> v[2];

        int rnds = 0;

        while (true) {
        sort(v.begin(), v.end());

        if (v[0] == v[1] || v[1] == v[2]) {
          break;
          }
          v[0]++;
          v[2]--;
          rnds++;
        }
     cout << rnds << "\n";
        }
    }

    return 0;
}