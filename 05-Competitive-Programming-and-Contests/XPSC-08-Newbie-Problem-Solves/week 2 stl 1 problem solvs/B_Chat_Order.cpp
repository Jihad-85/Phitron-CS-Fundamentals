#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
 int n;
 cin >> n;
 
 map<string, bool> word;
 
 vector<string> s(n);


  for(int i= 0;i< n;i++){
     
    
    cin >> s[i];
    word[s[i]] = 1;
     
  }
   
  for(int i= n-1;i >= 0;i--){
     
     if(word[s[i]] == 1){
        cout << s[i] <<endl;
        word[s[i]] = 0;
    }
    
    
  }
  

    return 0;
}