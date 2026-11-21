#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
 int x ,y , z;

 cin >> x >> y >> z;
   
   int ast = x+z;

    if(ast > y){
        cout << (ast - y)+ 1 << endl;
    }
    else if(ast < y){
        cout << 0 << endl;
    }
    else if(ast == y){
        cout << 1 << endl;
    }
    
    return 0;
}