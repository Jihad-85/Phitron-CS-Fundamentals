#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);


    int t;

    if (cin >> t) {
        while (t--) {

            long long n, m, x;
            cin >> n >>m >> x;
            
            long long row = (x - 1)/ m+1;
            cout << min(row,n -row +1) <<"\n";
        }
    }

    return 0;
}