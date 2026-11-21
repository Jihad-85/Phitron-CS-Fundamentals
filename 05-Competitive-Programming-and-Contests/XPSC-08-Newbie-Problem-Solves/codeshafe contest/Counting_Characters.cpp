#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   int t;
   cin >> t;

   while(t--){



   int n;
   cin >> n;
   
    string s;

    cin >> s;

    int acnt = 0;
    int bcnt = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a'){
           acnt ++;
        }
        if(s[i] == 'b'){
            bcnt ++;
        }
    }

  cout << acnt << " " << bcnt << endl;

}
    return 0;
}