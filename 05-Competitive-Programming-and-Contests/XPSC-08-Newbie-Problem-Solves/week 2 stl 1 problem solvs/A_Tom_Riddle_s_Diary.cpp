#include<bits/stdc++.h>
using namespace std;
int main() 
{
    
 int n;
 cin >> n;
 
 map<string, int> word;

  for(int i= 0;i< n;i++){
     
    string s;
    cin >> s;

    if(word[s] != 0){
        cout << "YES\n";
    }
    else{
        cout << "NO" << endl;
    }

    word[s]++;


  }


    return 0;
}