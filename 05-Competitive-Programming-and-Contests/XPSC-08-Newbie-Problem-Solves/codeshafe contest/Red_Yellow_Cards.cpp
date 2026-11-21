#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
    int t;
    cin >> t;

    while (t--) {
            int r, y;
            cin >> r >> y;

            int exsendof = max(0, (y - r) / 2);

            int minsendof = r + exsendof;
            
            cout << minsendof << "\n";
        }
    

    return 0;
}
