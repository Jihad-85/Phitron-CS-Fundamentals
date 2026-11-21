#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int ans = 0;
   
    for (int i = 0; i < n; ) {
        
        if (i + 4 < n && s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && s[i+3] == 'i' && s[i+4] == 'e') {
            ans++;
            i += 5; 
        } 
        else if (i + 2 < n && s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') {
            ans++;
            i += 3;
        } 
        else if (i + 2 < n && s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') {
            ans++;
            i += 3;
        } 
        else {
            i++;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}