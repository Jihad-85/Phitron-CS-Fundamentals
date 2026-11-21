#include<bits\stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
     
    stringstream st(s);
    string word;
    int cnt = 1;
    while(st >> word){

        if(word == "Jessica"){
           cnt = 0;
        }
    }
    if(cnt == 0){
    cout << "YES" << endl;
    }
    else{
    cout << "NO" << endl;
    }
    
    
     

return 0;
}