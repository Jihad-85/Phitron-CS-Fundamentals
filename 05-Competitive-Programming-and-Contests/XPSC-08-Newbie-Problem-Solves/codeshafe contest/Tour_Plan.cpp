#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int x,y,z;
    cin >> x >> y >> z;
    int kilo = (z-50);

    if(z <= 50){
        cout << x << endl;
    }
    else{
        cout << (kilo*y) +  x << endl;
    }
    
    return 0;
}