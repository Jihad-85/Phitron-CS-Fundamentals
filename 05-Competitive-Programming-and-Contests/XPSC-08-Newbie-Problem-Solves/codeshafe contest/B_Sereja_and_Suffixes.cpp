#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
       
   
       
   

    int n, m;

    cin >> n >> m;

    int a[100005];

    for(int i = 0; i < n; i++) {
         cin >> a[i];
    }

    int ans[100005];  

    int last[100005];   

    for(int i = 0; i <= 100000; i++) {
         last[i] = -1;
    }

    int distinct = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(last[a[i]] == -1) {
             distinct++;
            last[a[i]] = i;
        }

        ans[i] = distinct;
    }

    for(int i = 0; i < m; i++) {
          int li;
         cin >> li;
        cout << ans[li - 1] << "\n";
    }

    return 0;
}
