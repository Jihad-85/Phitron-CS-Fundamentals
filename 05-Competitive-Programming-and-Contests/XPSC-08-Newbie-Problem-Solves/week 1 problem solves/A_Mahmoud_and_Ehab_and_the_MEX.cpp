#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
  int n,x;
  cin >> n >> x;
  int a[n];

 for(int i=0;i< n;i++){
    cin >> a[i];
  }
 
  sort(a,a+n);


  int ope = 0;

 for(int i=0;i < x;i++){
  int found = 0;
  for(int j=0;j < n;j++){
    
     if(a[j] == i){
       found = 1;
       break;
     }
     
    }
      if(found == 0){
      ope++;
     }
  }

   for(int i=0;i< n;i++){
     if(a[i] == x){
       ope++;
     }
  }


  cout << ope << endl;

  

    return 0;
}