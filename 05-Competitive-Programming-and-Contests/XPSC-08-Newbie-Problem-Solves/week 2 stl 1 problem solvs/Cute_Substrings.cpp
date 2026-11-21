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

  for(int i = 0;i <n ;i++){
    cin >> a[i];
  }

  int cnt = 0;

   for(int i = 0;i < n;i++)
   { 
     for(int i = 0;i < n;i++){ 
    
      if(i % 2 != 0){
       if(a[i] == 'o' || a[i] == 'u'){
         
          cnt ++;
       }
      }
      else if( i%2 == 0 && a[i] == 'w'){
        cnt++;
      }
      else{
        break;
      }
    }
   }
 
if(cnt%2 != 0){
    cout << cnt << endl;
}
else{
    cout << '0' << endl;
}
  
}
    
    return 0;
}