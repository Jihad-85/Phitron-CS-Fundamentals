#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t ;
    if(cin >> t);
    while(t--){
        int a,b;
        cin >> a >> b;

        if(a < b){
            cout << a << "\n";
        } else {
            cout << b << "\n";
        }
    }
    
    return 0;
}