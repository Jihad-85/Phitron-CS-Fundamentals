 #include<bits\stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    string result = "";
    
    for (int i = 0; i < s.length(); i += 2) {
        char ch = s[i];           
        int count = s[i+1] - '0';  
       
        for (int j = 0; j < count; j++) {
            result += ch;
        }
    }
    
    cout << result << "\n";
}

int main() {
     
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        solve();
    }
    
    return 0;
}