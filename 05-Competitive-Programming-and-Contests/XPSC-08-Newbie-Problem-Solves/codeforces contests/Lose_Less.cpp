#include<bits/stdc++.h>
using namespace std;

int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){


        int m, n;
        cin >> m >> n;

        int minLos = m;  


        for(int w = 0; w <= m; w++){

            int d = n - 3*w;
            if(d < 0) {
                continue;
            }
            if(w + d > m) {
                continue;
            }
            int l = m - (w + d);

            if(3*w + d == n){

                minLos = min(minLos, l);
            }
        }
        cout << minLos << endl;
    }
    return 0;
}
