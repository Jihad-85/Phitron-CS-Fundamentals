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

    if(word[s] == 0){
        cout << "OK\n";
    }
    else{
        cout << s << word[s] << endl;
    }

    word[s]++;


  }




//   for (int i = 0; i < n; i++) {
//     int count = 0;
    
//     for (int j = 0; j < i; j++) {
//         if (s[i] == s[j]) {
//             count++;
//         }
//     }
    
//     if (count == 0) {
//         cout << "OK" << endl;
//     } else {
       
//         cout << s[i] << count << endl;
//     }
// }

  

    

    
    return 0;
}