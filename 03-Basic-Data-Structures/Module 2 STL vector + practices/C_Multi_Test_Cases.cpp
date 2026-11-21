#include<bits\stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    for(int j = 1;j <= t;j++){
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i <n ;i++){
        cin >> a[i];
    }
   
     int cnt = 0;
    
    for(int i =0;i <n ;i++){
       if(a[i]%2 != 0)
       {
        cnt++;
       }  
    }

     cout << cnt << endl;
     
     }
return 0;
}