#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
 int a , b;
  cin >> a >> b;
 int c = ((a/2)+1);



 int d = c - b;

  if( d >= 0 ){
    cout << d << endl;
  }
  else{
    cout << 0 << endl;
  }
    
 
    return 0;
}