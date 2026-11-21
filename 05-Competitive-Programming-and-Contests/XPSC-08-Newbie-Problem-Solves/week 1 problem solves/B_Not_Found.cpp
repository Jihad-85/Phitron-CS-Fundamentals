#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
 string s;
 cin >> s;

 
  int temp[26] = {0};

  for(int i = 0;i < s.size(); i++){
      
      temp[s[i]-'a'] = 1;

  }
  int  flag = 0;
  for(int i = 0;i < 26;i++){

     if(temp[i] == 0){
        cout << char('a'+ i) << endl;
        break;
     }
     else{
         flag += 1;
     }

    }
     if(flag == 26){

           cout << "None" << " ";
     }
   
    return 0;
}