#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int x, y, f;
    if (cin >> x >> y >> f) {

        cout << min(12 * x, 12 * y + f) << "\n";
    }
    
    return 0;
}