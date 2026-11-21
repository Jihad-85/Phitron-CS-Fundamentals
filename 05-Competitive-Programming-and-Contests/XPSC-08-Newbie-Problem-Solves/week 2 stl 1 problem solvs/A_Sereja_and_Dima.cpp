#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
 int n;
 cin >> n;

 int a[n];

 for(int i = 0;i< n;i++){
     cin >> a[i];
 }

 int left = 0;
 int right = n-1;

 int serejas_point = 0;
 int demas_point = 0;

 int serejas_term = 0;

 while(left <= right){
   
  int temp = 0;
   if(serejas_term == 0){

    if(a[left] > a[right]){
      temp = a[left];

      left++;
        
    }
    else{
        temp = a[right];

        right--;
    }
    
    serejas_term = 1;
    serejas_point += temp;

   }
   else{
   
    
    if(a[left] > a[right]){
      temp = a[left];

      left++;
        
    }
    else {
      temp = a[right];

      right--;

    }
    serejas_term = 0;
    demas_point += temp;

   }
 }


 cout << serejas_point << " " << demas_point;
    
    return 0;
}