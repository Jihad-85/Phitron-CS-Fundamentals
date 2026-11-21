#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() 
{
    
 long long int n;
  cin >> n;
  long long int a[n-1];

  int totalsum = n*(n+1)/2;
  long long int givensum = 0;
  
  for(int i = 0; i < n-1 ; i++){

     cin >> a[i];
     givensum += a[i];

  }
   
    int out = totalsum - givensum;
   

    cout << out;
    return 0;
}