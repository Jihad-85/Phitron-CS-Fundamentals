#include<bits\stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() 
{
    
 long long int a,b,c;

 cin >> a >> b >> c;
   
 int mul = ((a + c - 1) / c) * c;

  if(mul <= b ){

    cout << mul;
  }
  else{
    cout << -1;
  }
    
    return 0;
}