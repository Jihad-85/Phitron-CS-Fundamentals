#include<bits\stdc++.h>
using namespace std;
int main(){

    char s[100000];

    while(cin.getline(s,1000000)){

    int count = strlen(s);

    sort(s,s+count);
    

    
   for(int i=0;i<count;i++){
    if(s[i] != ' '){
       cout << s[i];
    }
   }
  cout << "\n";
 }
return 0;
}
