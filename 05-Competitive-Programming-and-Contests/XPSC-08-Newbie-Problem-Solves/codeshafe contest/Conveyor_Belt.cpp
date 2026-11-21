#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 
    int t;
    cin >> t;
    while(t--){


      int n, p;
      cin >> n >> p;
            
     string s;
     cin >> s;
            
      int leftcost = 0;


     for (int i = 0; i < p; ++i) {
        if (s[i] == 'R') {
                    leftcost++;
                }
            }
            
       int rightcost = 0;

     for (int i = p - 1; i < n; ++i) {
         if (s[i] == 'L') {
                    rightcost++;
                }
            }
             
          int ans = min(leftcost, rightcost);
          
          cout <<  ans << endl;
        }

    return 0;
}