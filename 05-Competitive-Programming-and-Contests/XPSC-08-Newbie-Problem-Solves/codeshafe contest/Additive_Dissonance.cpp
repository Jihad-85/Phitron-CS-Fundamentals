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
            
      vector<int> a(n);
      for (int i = 0; i < n; i++) {
          cin >> a[i];
           }
            
      sort(a.begin(), a.end());
            
     int max_freq = 0;
     int current_freq = 1;
            
       for (int i = 1; i < n; i++) {
         if (a[i] == a[i-1]) {
              current_freq++;
         } 
         
         else {
                    max_freq = max(max_freq, current_freq);
                    current_freq = 1;
                }
            }
      max_freq = max(max_freq, current_freq);

      cout << (max_freq + 1) / 2 << endl;
        }
    }
    
    return 0;
}