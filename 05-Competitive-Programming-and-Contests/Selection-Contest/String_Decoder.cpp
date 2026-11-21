#include<bits\stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    
    while (t--) {

    string s;
    cin >> s;

    string rs = "";
    
    int len = s.length();

    for (int i = 0; i < len; i += 2) {
        char ch = s[i];           
        int cnt = s[i+1] - '0';  
       
        for (int j = 0; j < cnt; j++) {
            rs += ch;
        }
    }
    
    cout << rs << "\n";
    }


    return 0;
}