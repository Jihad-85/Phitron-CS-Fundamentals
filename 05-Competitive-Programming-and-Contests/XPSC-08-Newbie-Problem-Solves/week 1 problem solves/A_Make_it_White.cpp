#include<bits\stdc++.h>
using namespace std;
int main() 
{

   int t;
   cin >> t;

   while(t--){
    int n;
    cin >> n;
    
     char a[n];

  int first = 0;
  int last = 0;

   for(int i=0;i < n;i++){
   cin >> a[i] ;
  
  }

   for(int i=0;i < n;i++){
      
     if(a[i] == 'B'){
        first = i;
       
        break;
     }
  }

   for(int i= n-1 ;i >= 0;i--){
      
     if(a[i] == 'B'){
        last = i;
        
        break;
     }
  
  }

  int op = (last - first)+1;

  cout << op << endl;

  
}
  
    
    return 0;
}