#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
  int t;
  cin >> t;
  while(t--){
      
    string s;
    cin >> s;

    int sameindex = -1;

    for(int i = 1;i<s.size();++i){

         if(s[i] == s[i-1]){
            sameindex = i;
            break;
         }
    }
    if(sameindex == -1){
        if(s.back() == 'a') {
            s += 'x';
        }
        else{
            s += 'a';
        }  
        cout << s << endl; 
        continue;
    }

    for(int i = 0; i<sameindex;i++){
        cout << s[i];
    }

if(s[sameindex] == 'a' )
{
    cout << 'b';
}
else{
    cout << 'a' ;
}

for(int i = sameindex; i< s.size();++i){
    cout << s[i];
}
cout << endl;


  }
    
    return 0;
}