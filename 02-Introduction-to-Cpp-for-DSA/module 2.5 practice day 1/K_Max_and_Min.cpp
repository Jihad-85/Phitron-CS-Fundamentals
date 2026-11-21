#include<bits\stdc++.h>
using namespace std;
int main(){

     int a; 
     int b;
     int c;
    cin >> a >> b >> c;
    int max = 0;
    int min = 0;

       if(a > b && a > c){
        max = a;
        if(c < b){
            min = c;
        }
        else {
            min = b;
        }
    }
    else if(b > c && b > a){
        max = b;
        if(c < a){
            min = c;
        }
        else {
            min = a;
        }
    }
     else if(c > a && c > b){
        max = c;
         if(a < b){
            min = a;
        }
        else {
            min = b;
        }

     }
     else if( a == b && c > a){
        max = c;
        min = a;
     }
       else if( a == c && b > a){
        max = b;
        min = a;
     }
       else if( c == b && a > b){
        max = a;
        min = c;
     }
        else if( a == b && c < a){
        max = a;
        min = c;
     }
       else if( a == c && b < a){
        max = a;
        min = b;
     }
       else if( c == b && a < b){
        max = b;
        min = a;
     }
    else if( c == b && b == a){
        max = b;
        min = a;
     }


    cout << min << " " << max << endl;

return 0;
}