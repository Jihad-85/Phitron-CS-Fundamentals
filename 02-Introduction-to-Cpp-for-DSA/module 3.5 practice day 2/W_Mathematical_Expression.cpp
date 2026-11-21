#include<bits\stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    char s,q;
    cin >> a >> s >> b >> q >> c;

    if(s == '+'){

        if(a+b == c){
            cout << "Yes\n";
        }
        else{
            
            cout << a+b << "\n";
        }
    }
         if(s == '-'){

        if(a-b==c){
            cout << "Yes\n";
        }
        else{
            cout << a-b << "\n";
        }
    }
         if(s == '*'){

        if(a*b==c){
            cout << "Yes\n";
        }
        else{
            cout << a*b << "\n";
        }
    }
     

return 0;
}