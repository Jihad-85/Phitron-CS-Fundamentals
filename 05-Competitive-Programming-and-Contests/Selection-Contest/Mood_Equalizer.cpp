#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
long long int n;
cin >> n;

long long int sum = 0;
  for(int i= 0;i  < n;i++){
    
   int mod;
   cin >> mod;
   sum += mod;

  }
  
  sum = abs(sum);
  cout << sum << endl;
    return 0;
}