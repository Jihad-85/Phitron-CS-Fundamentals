#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    


   int t;
   cin >> t;

   while(t--)
   {
    int n;
   cin >> n;
   int a[n];


   for(int i = 0;i<n ;i++){
      cin >> a[i];
   }

    int sum = 0;

    for(int i = 0;i<n ;i++){
      sum += a[i];
    }
    
    bool flag = 0;

    for(int i = 0;i<n ;i++){
      int temp = sum;
      temp = temp - a[i];
      if(temp%2 == 0){
         flag = 1;
      }
    }

    if(flag == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No"  << endl;
    }

   }


    
    return 0;
}