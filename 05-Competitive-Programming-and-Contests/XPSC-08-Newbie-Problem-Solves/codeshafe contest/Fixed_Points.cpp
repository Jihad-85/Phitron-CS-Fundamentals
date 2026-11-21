#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    if (cin >> t) {
     while (t--) {
      int n, k;
     cin >> n >> k;

         if (k == n - 1) {
        cout << "No"  << endl;
          } 
            
        else {
            cout << "Yes" << endl;
            }
        }
    }

    return 0;
}