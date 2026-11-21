#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
  int n;
  cin >> n;
   
  int price = 0;
    if(n<5){
       price = n*100;
    }
   else {
     price = n*85;
   }
   
   cout << price << endl;
   
    return 0;
}