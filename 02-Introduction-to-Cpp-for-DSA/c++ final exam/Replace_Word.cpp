#include<bits\stdc++.h>
using namespace std;
int main(){


int t;
cin >> t;
for (int k = 1;k<=t;k++){

    string s,b;
    cin >> s >> b;

    int slen = s.length();
    int blen = b.length();

for(int i =0;i < s.size() ;)
{
     int flag = 0;
     if(i+blen <= slen){
       for(int j=0;j < blen;j++){
            if(s[i+j] != b[j]){
             flag = 1;
             break;
            }
       }
     
    }
    else{
        flag = 1;
    }
    if(flag == 0){
    cout << "#";
    i = i+blen;
 }
 else{
   cout <<  s[i];
   i += 1;

 }
     

 }
 
   cout << endl;
     
   
}
return 0;
}