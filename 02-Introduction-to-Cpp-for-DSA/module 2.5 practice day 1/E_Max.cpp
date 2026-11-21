#include<bits\stdc++.h>
using namespace std;
int main(){

    long long int n;
    cin >> n;
   long long int x;
   long long int max = 0;
    for(int i = 1;i <= n;i++){
       cin >> x;
       if(x > max){
        max = x;
       }
    }
    cout << max;

return 0;
}