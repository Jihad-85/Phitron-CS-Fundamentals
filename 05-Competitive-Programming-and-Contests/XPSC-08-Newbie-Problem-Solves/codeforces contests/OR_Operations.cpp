#include<bits/stdc++.h>
using namespace std;

int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;
    cin >> t;


 while (t--) {
        int n;
        cin >> n;

   vector<int> a(n);
   int total_or = 0;

     for (int i = 0; i < n; ++i) {
          cin >> a[i];
          total_or |= a[i];
     }

    int block = 0;
    int curnt_or = 0;


        for (int i = 0; i < n; ++i) {
                curnt_or |= a[i];

         if (curnt_or == total_or) {
                    block++;
                    curnt_or = 0; 
         }
     }

            cout << n - block << endl;
   }
    


    return 0;
}