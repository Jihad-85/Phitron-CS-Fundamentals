#include<bits\stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];      
    }
    int flag = 0;
    int i = 0;
    int j = n-1;
    for(;i<j;){

         if(a[i] == a[j]){
            flag++;
            i++;
            j--;
         } 
         else{
            break;
         }
    }
    
    if(flag == n/2){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

return 0;
}