#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
 int a,b;
 cin >> a >> b;

 if((a+(a-1)) >= a+b)
 {
    cout << a+(a-1);
 }
 else if((b+(b-1)) >= a+b)
 {
    cout << b+(b-1) ;
 }
 else{
    cout << a+b;
 }

    
    return 0;
}