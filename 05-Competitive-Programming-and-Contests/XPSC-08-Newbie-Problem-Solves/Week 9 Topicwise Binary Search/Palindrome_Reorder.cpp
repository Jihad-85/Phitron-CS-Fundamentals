#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    
    string s;
    if (cin >> s) {
        int n = s.length();
        vector<int> counts(26, 0);
        
        for (char c : s) {
            counts[c - 'A']++;
        }
        
        int odd_count = 0;
        int odd_char = -1;
        
        for (int i = 0; i < 26; i++) {
            if (counts[i] % 2 != 0) {
                odd_count++;
                odd_char = i;
            }
        }
        
        if (odd_count > 1) {
            cout << "NO SOLUTION\n";
        } else {
            string result(n, ' ');
            int left = 0;
            int right = n - 1;
            
            for (int i = 0; i < 26; i++) {
                while (counts[i] >= 2) {
                    result[left++] = i + 'A';
                    result[right--] = i + 'A';
                    counts[i] -= 2;
                }
            }
            
            if (odd_char != -1) {
                result[left] = odd_char + 'A';
            }
            
            cout << result << "\n";
        }
    }
    
    return 0;
}