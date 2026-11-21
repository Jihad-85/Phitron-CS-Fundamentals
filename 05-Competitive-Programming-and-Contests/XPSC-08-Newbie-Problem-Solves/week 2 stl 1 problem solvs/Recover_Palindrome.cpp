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

  int left = 0;
  int right = n-1;
  int flag = 0;

 while(left <= right){
 
   
    if(a[left] == a[right] && a[left] == '?'){
      

        flag = 1;
      break;
       

    }
    else{
       
    
      left++;
      right--;
    }
}
 
if(flag == 1){
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
}
  
}
    return 0;
}