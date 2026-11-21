#include<bits\stdc++.h>
using namespace std;
int main(){

    int a;
    cin >> a ;

    int x = (a/100)%10;
      
    int y = (a/10)%10;
   
    int z = a%10;
     
    

    int result = (x*100)+(y*10)+z+(y*100)+(z*10)+x+(z*100)+(x*10+y);

    cout << result << endl;

return 0;
}