
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() 
{
    
   long long int n;
    cin >> n;
   long long int a[n];
    
   for(int i= 0;i < n ; i++){
      cin >> a[i];
   }
  
  long long int max = 0;
  long long int tmoves = 0;


    for(int i= 0;i < n ; i++){
        
        if(i == 0){
            max = a[i];
        }
        else{
         
            if(a[i] < max){
          tmoves += (max - a[i]);
      }
      else{
         max = a[i];
      }
    }
      
   }

   cout << tmoves << endl;
  
   

    return 0;
}