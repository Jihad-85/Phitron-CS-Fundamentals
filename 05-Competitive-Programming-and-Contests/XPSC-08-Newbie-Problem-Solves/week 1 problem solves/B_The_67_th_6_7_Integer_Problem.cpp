#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
 long long int t;
  cin >> t;

  for(int i = 0;i < t;i++){


  int a[7];
   for(int i = 0;i < 7;i++){
   cin >> a[i];
   }
   
   long long int sum = 0;

   sort(a,a+7);

   for(int i = 0; i < 6 ;i++){
      sum = sum - a[i];
   }
    sum = sum + a[6];
    cout << sum << endl;
  }
    
    return 0;
}