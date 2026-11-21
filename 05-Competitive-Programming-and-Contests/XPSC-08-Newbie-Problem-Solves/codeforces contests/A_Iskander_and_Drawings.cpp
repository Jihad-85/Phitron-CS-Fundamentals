#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    int t; 
    cin >> t;
    while(t--)
    
    {

        int n; cin >> n;
        string s; cin >> s;

        int ans = 0;
        int i = 0;

        while(i < n)
        {
        if(s[i] == '#'){
          int j = i;
          while(j < n && s[j] == '#') j++;
          int len = j - i;
          int time;
          if(len <= 2) time = 1;

          else {
            time = len / 2 + (len % 2 == 1 ? 1 : 0); 
          }
          ans = max(ans, time);
          i = j;
            } 
            else {
                i++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
