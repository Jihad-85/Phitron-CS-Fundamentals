#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

        while (t--)
         {
            long long x, y, z;
            cin >> x >> y >> z;

            if (z <= y) {
                cout << -1 << endl;
            } 
            
            else {

                long long dif = z - y;
                long long months = (x + dif - 1) / dif;

                cout << months << endl;
            }
        }
    

    return 0;
}