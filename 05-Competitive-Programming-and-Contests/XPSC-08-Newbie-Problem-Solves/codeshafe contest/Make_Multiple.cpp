#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    if (cin >> t) {

        while (t--) {

       int n;
       cin >> n;
         
          if (n %3== 0) {
                cout << 0 << "\n";
            } 
          else if ((n+1) % 3== 0 || ((n/5)*5 +5) %3 ==0)
             {
                cout << 1 << endl;
            } 
            else 
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}