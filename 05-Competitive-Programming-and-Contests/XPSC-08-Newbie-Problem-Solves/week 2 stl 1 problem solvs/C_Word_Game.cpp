 #include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;  
    for (int tc = 0; tc < t; tc++) {
        int n;
        cin >> n;  

        vector<vector<string>> players(3, vector<string>(n));
        unordered_map<string, int> freq;

        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> players[i][j];
                freq[players[i][j]]++;
            }
        }

        vector<int> points(3, 0);

         
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string word = players[i][j];
                if (freq[word] == 1) {
                    points[i] += 3;  
                } 
                else if (freq[word] == 2) {
                    points[i] += 1;  
                }
               
            }
        }

      
        for (int i = 0; i < 3; i++) {
            cout << points[i] << (i == 2 ? '\n' : ' ');
        }
    }

    return 0;
}
