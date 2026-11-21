#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 
    int t;
    cin >> t;
    while(t--){

    int n;
     cin >> n;
            
    string s;
     cin >> s;

     for (int i = 0; i < n; i++) {
          if (s[i] == 'z') {
 
         while (i < n && s[i] == 'z') {
             s[i] = 'a';
                i++;
                }
                    break;
                }
            }
            
            cout << s << endl;
        }
    
    
    return 0;
}