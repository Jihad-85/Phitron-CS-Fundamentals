#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int n;
    if (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

    
        sort(a.begin(), a.end());

        int curday = 1;
 
        for (int i =0; i <n; i++) {
        
            if (a[i] >= curday) {
                curday++;  
            }
          
        }

        cout << curday - 1 << "\n";
    
    }
    
    return 0;
}