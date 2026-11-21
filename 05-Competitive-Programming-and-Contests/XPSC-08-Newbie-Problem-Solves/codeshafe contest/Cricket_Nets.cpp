#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
int t;
cin >> t;

while(t--){

 int x ;

 cin >> x ;
    int first = 0;
    int secend = 0;

    if(x > 20){
        first = 20 * 10;
        secend = ((x-20)/2 ) * 5;
    }
    else if(x <= 20){
        first = x*10;
    }
     
    cout << first + secend << endl;

  }
    
    return 0;
}