#include<bits\stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;

    for(int o = 1; o <= t; o++){

    int n;
    cin >> n;
    int a[n];
    for(int i = 1;i <= n;i++){
        cin >> a[i];      
    }

    int temp = 99999999;
    for(int i = 1;i <= n;i++){
        for(int j = i+1;j <= n;j++){
            
           int sum = 0;
           sum = a[i]+a[j]+j-i;
            if(sum < temp ){
                temp = sum;
            }
        }
    }
    cout << temp << endl;
    }


return 0;
}