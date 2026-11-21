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
  
  for(int i=0;i< n;i++){
    cin >> a[i];
  }

  sort(a,a+n);

  int cnt1 = 0;
  int splcnt = 0;
   int grater1 = 0;


  for(int i=0;i < n;i++){

    if(a[i] == 1 ){
      cnt1+=1;
    

   }
   else if(a[i] > 1){
        
    grater1+=1;
      
    }
 
    }
   
   splcnt =  grater1 + ((cnt1+1)/2);


  cout << splcnt << endl;
  }
    
    return 0;
}