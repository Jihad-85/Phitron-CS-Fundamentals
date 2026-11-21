#include<bits\stdc++.h>
using namespace std;
int main() 
{

   int t;
   cin >> t;

   while(t--){
    
  int n; 
  cin >> n;
  int a[n];
  int d[n];

  for(int i=0;i< n;i++){
    cin >> a[i];
     
  }


  int cnt1 = 0;
  int splcnt = 0;

 for(int i=0;i < n;i++){
 
    d[i] = (n+1) - a[i];
     
}
   
   for(int i=0;i< n;i++){
   cout <<  d[i] << " " ;
  }
  cout << endl;
 
  }
    
    return 0;
}