#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
 int a,b,k;
 cin >> a >> b >> k;

 int r = a-b;

 if(abs(r) <= k)
 {
    cout << "Yes";
 }
 else{
    cout << "No";
 }
    
    return 0;
}