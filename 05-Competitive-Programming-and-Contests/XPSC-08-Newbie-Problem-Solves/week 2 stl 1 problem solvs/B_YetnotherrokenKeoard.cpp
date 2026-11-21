#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        string result;   

        for(char c : s){
            if(c == 'b'){
                
                for(int i = result.size()-1; i >= 0; i--){
                    if(islower(result[i])){
                        result.erase(result.begin() + i);
                        break;
                    }
                }
            }
            else if(c == 'B'){
               
                for(int i = result.size()-1; i >= 0; i--){
                    if(isupper(result[i])){
                        result.erase(result.begin() + i);
                        break;
                    }
                }
            }
            else{
            
                result.push_back(c);
            }
        }

        cout << result << "\n";
    }
    return 0;
}
